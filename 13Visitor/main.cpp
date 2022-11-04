#include "Directory.hpp"
#include "File.hpp"
#include "ListVisitor.hpp"

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
    auto list1 = new ListVisitor;
    root->Accept(list1);

    Directory *yuki = new Directory("yuki");
    Directory *hanako = new Directory("hanako");
    Directory *tomura = new Directory("tomura");

    usr->AddEntry(yuki);
    usr->AddEntry(hanako);
    usr->AddEntry(tomura);
    yuki->AddEntry(new File("diary.html", 100));
    hanako->AddEntry(new File("memo.tex", 1024));
    tomura->AddEntry(new File("junk.mail", 40));
    auto list2 = new ListVisitor;
    root->Accept(list2);
    
    {
        yuki->PrintList("");
        Entry *e = new Directory("test");
        File *f = new File("123.txt", 1024);
        f->PrintList("");
        f->AddEntry(e);
        f->ToString();
        delete f;
        delete e;
    }
    delete root;
    delete list1;
    delete list2;
    return 0;
}
