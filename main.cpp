#include <iostream>
#include <string>
using namespace std;

string bookTitle;
string author;
int bookID;
bool available = true;

void addBook();
void showBook();
void borrowBook();
void returnBook();
void checkStatus();

int main()
{
    int choice;

    do
    {
        cout << "\nLibrary System\n";
        cout << "1. Add Book\n";
        cout << "2. Show Book\n";
        cout << "3. Borrow Book\n";
        cout << "4. Return Book\n";
        cout << "5. Check Status\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addBook();
            break;

        case 2:
            showBook();
            break;

        case 3:
            borrowBook();
            break;

        case 4:
            returnBook();
            break;

        case 5:
            checkStatus();
            break;

        case 6:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}

void addBook()
{
    cin.ignore();

    cout << "Enter book title: ";
    getline(cin, bookTitle);

    cout << "Enter author name: ";
    getline(cin, author);

    cout << "Enter book ID: ";
    cin >> bookID;

    available = true;

    cout << "Book added successfully!\n";
}

void showBook()
{
    cout << "\nBook Information\n";
    cout << "Title: " << bookTitle << endl;
    cout << "Author: " << author << endl;
    cout << "Book ID: " << bookID << endl;

    if (available)
        cout << "Status: Available\n";
    else
        cout << "Status: Borrowed\n";
}

void borrowBook()
{
    if (available)
    {
        available = false;
        cout << "Book borrowed successfully!\n";
    }
    else
    {
        cout << "Book is not available!\n";
    }
}

void returnBook()
{
    if (!available)
    {
        available = true;
        cout << "Book returned successfully!\n";
    }
    else
    {
        cout << "Book is already in library!\n";
    }
}

void checkStatus()
{
    if (available)
        cout << "Book is available.\n";
    else
        cout << "Book is borrowed.\n";
}
