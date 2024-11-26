#pragma once
#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    // Attributes
    string title;
    string author;
    string ISBN;
    bool isAvailable = true; // Availability flag

    // Constructors
    Book();
    Book(string myTitle, string myAuthor, string myISBN);

    // Methods
    void setBookDetails(string myTitle, string myAuthor, string myISBN);
    void displayBookDetails();
    void borrowBook();
    void returnBook();
};
