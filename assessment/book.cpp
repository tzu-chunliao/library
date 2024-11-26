// Book.cpp
#include "Book.h"

// Default constructor
Book::Book() {
    title = "Unknown";
    author = "Unknown";
    ISBN = "0000000000";
    isAvailable = true;
}

// Constructor with parameters
Book::Book(string myTitle, string myAuthor, string myISBN) {
    title = myTitle;
    author = myAuthor;
    ISBN = myISBN;
    isAvailable = true;
}

// Set book details
void Book::setBookDetails(string myTitle, string myAuthor, string myISBN) {
    title = myTitle;
    author = myAuthor;
    ISBN = myISBN;
    isAvailable = true;
}

// Display book details
void Book::displayBookDetails() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Availability: " << (isAvailable ? "Available" : "Borrowed") << endl;
}

// Borrow a book
void Book::borrowBook() {
    if (isAvailable) {
        isAvailable = false;
        cout << "You have borrowed: " << title << endl;
    }
    else {
        cout << "Sorry, " << title << " is already borrowed." << endl;
    }
}

// Return a book
void Book::returnBook() {
    if (!isAvailable) {
        isAvailable = true;
        cout << "You have returned: " << title << endl;
    }
    else {
        cout << title << " is already available in the library." << endl;
    }
}
