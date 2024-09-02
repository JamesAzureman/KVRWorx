#include <iostream>

using namespace std;

struct lib_card {
    const char *title {};
    const char *author {};
    const char *publisher {};
    const char *subject {};
    long long int isbn {};
    long long int oclc {};
    float dewey {};
    const char *pub_date {};
    const char *buy_date {};
    short int stock_amt {};
};

int main()
{
    lib_card dystopian_card = { "1984", "George Orwell", "", "Dystopia", 9780451524935, 0, 806.111, "1948", "2021", 2 };
    cout << "Title: " << dystopian_card.title << endl;
    cout << "Author: " << dystopian_card.author << endl;
    cout << "Publisher: " << dystopian_card.publisher << endl;
    cout << "Subject: " << dystopian_card.subject << endl;
    cout << "ISBN: " << dystopian_card.isbn << endl;
    cout << "OCLC: " << dystopian_card.oclc << endl;
    cout << "Dewey Decimal System: " << dystopian_card.dewey << endl;
    cout << "Published in Year: " << dystopian_card.pub_date << endl;
    cout << "Acquired in Year: " << dystopian_card.buy_date << endl;
    cout << "Quantity in stock: " << dystopian_card.stock_amt << endl;
    return 0;
}
