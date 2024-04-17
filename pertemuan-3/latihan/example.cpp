#include <iostream>
using namespace std;

struct BOOK {
    string title;
    string author;
    string publisher;
    int page;
    bool isPublished;
};

BOOK fiction;
BOOK nonFiction;

int main() {
    cout << "Books Data" << endl;

    fiction.title = "1984";
    fiction.author = "George Orwell";
    fiction.publisher = "Gramedia Pustaka Utama";
    fiction.page = 200;
    fiction.isPublished = true;

    cout << "--------------------------------" << endl << endl;
    cout << "Book title       : " << fiction.title << endl;
    cout << "Author           : " << fiction.author << endl;
    cout << "Publisher        : " << fiction.publisher << endl;
    cout << "Pages            : " << fiction.page << endl;
    cout << "Is published(?)  : " << fiction.title << endl;

    return 0;
}