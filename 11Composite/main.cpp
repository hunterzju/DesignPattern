#include "Directory.hpp"
#include "File.hpp"

int main() {
    Directory *root = new Directory("root");
    Directory *bin = new Directory("bin");
    Directory *tmp = new Directory("tmp");
    Directory *usr = new Directory("usr");

    root->AddEntry(bin);
    root->AddEntry(tmp);
    root->AddEntry(usr);
    bin->AddEntry(new File("vi", 3000));
    bin->AddEntry(new File("latex", 2000));
    static_cast<Entry *>(root)->PrintList();

    Directory *yuki = new Directory("yuki");
    Directory *hanako = new Directory("hanako");
    Directory *tomura = new Directory("tomura");

    usr->AddEntry(yuki);
    usr->AddEntry(hanako);
    usr->AddEntry(tomura);
    yuki->AddEntry(new File("diary.html", 100));
    hanako->AddEntry(new File("memo.tex", 1024));
    tomura->AddEntry(new File("junk.mail", 40));

    static_cast<Entry *>(root)->PrintList();

    {
        File *f = new File("123.txt", 1);
        f->AddEntry(root);
        f->PrintList("");
        delete f;
    }
    {
        yuki->PrintList("");
    }
    {
        File *f = new File("123.txt", 1);
        Entry *e = new Directory("test");
        e->AddEntry(f);
        e->PrintList("");
        e->ToString();
        delete e;
    }
    delete root;
    return 0;
}
