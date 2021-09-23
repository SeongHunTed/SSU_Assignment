#include <iostream>
#include <string>
using namespace std;

class Book
{
    string title;
    string author;

public:
    Book(string t, string a){
        title = t;
        author = a;
    }
    string getAuthor(){
        return author;
    }
    string getTitle(){
        return title;
    }
    void setAuthor(string a){
        author = a;
    }
    void setTitle(string t){
        title = t;
    }
    void print(){
        cout << "책 이름 : " << title << endl;
        cout << "책 저자 : " << author << endl;
    }
};

int main(){
    Book b1("Great c++", "Bob");
    b1.print();
    return 0;
}

