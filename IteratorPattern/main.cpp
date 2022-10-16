#include "Book.h"
#include "BookSelf.h"
#include "BookSelfIterator.h"
#include <iostream>
#include <string>
using std::cerr;
using std::cout;
using std::endl;
using std::string;
int main() {
    Aggregate<Book> *aggregate = new BookSelf<Book>(0);
    BookSelf<Book> *self = static_cast<BookSelf<Book> *>(aggregate);
    self->AppendBook(Book(string("name1")));
    self->AppendBook(Book(string("name2")));
    self->AppendBook(Book(string("name3")));

    auto iter = aggregate->CreateIterator();
    while (iter->hasNext()) {
        Book book = iter->next();
        cout << book.GetName() << endl;
    }
    delete aggregate;
    delete iter;
    return 0;
}
