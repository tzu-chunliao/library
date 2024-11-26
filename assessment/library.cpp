// Library.cpp
#include <iostream>
#include "Book.h"

int main() {
    // Initialize an array with 5 books
    Book library[5];

    // Setting details for each book in the library
    library[0].setBookDetails("1984", "George Orwell", "9780451524935");
    library[1].setBookDetails("To Kill a Mockingbird", "Harper Lee", "9780060935467");
    library[2].setBookDetails("Pride and Prejudice", "Jane Austen", "9781503290563");
    library[3].setBookDetails("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565");
    library[4].setBookDetails("Moby-Dick", "Herman Melville", "9781503280786");

    string inputISBN;

    // Main loop for user interaction
    while (true) {
        cout << "Enter the ISBN of the book you wish to borrow (or '0' to exit): ";
        cin >> inputISBN;

        // Exit the program if the user inputs "0"
        if (inputISBN == "0") break;

        bool found = false;

        // Search for the book by ISBN
        for (int i = 0; i < 5; i++) {
            if (library[i].ISBN == inputISBN) {
                found = true;

                // Try to borrow the book
                if (library[i].isAvailable) {
                    library[i].borrowBook();
                }
                else {
                    cout << "The book \"" << library[i].title << "\" is currently unavailable." << endl;
                }
                break;
            }
        }

        if (!found) {
            cout << "Book with ISBN " << inputISBN << " not found in the library." << endl;
        }
    }

    // Display final status of all books
    cout << "\nLibrary Book List Status:" << endl;
    for (int i = 0; i < 5; i++) {
        library[i].displayBookDetails();
        cout << "-------------------------" << endl;
    }

    return 0;
}
