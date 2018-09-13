#include <iostream>
#include <vector>
#include "Library.h"

using namespace std;

// Names (Please include last name or initial!): Eric Ha, Shania Roy, Rebecca Donohoe, Drew Turner
//
// Complete numbered coding tasks.
// Answer the questions with "Answer: " in the comments in the comments.
// Turn all your library files in as library.zip on moodle before the end of class.

int main() {
    // 1) Instantiate a couple Books. Set their fields equal to some values.
    // Print out the values of the books' fields.
    Book a;
    a.title = "Green eggs and ham";
    a.author = "dr.seuss";
    Book b;
    b.title = "harry potter";
    b.author = "jk rowling";

    cout << a.title << " by " << a.author <<endl;
    cout << b.title << " by " << b.author <<endl;


    // 2) Instantiate a Library.
    Library Norlin;

    // 3) Add a void Donate(Book b) method to your Library class.
    // Your Library should store the new book at the end of its shelf.

    // 4) Donate one of the Books that you instantiated to your Library.
    Norlin.Donate(a);

    // 5) Print out the books in the Library (use the given PrintBooks method)
    Norlin.PrintBooks();

    // 6) Change the title and/or author of the book that you donated to
    // something different.
    // Print out the new book information, then print out the books in your
    // Library. Did changing the Book information change it in your Library?
    //
    // Answer (and your hypothesis for why/why not):
    //Hypothesis: The book title will remain the same in the Library if printed because the book "a" donated is in the vector and won't change

    a.title = "Hunger Games";
    a.author = "Susan Collins";
    cout << a.title << " by " << a.author <<endl;

    Norlin.PrintBooks();

    // 7) Create two Books that are separate structs (not pointers or references)
    // but that have the same information.
    // use the == operator to test if they are equal. What happens?
    // if it succeeds, are these equal?
    //
    // Answer: Gives us an error when setting book c == book d
    Book c; Book d;
    c.title = "cat in the hat";
    c.author = "dr. seuss";
    d.title = "cat in the hat";
    d.author = "dr. seuss";
    /*
    if(c == d) {
      cout << "Books are equal" <<endl;
    }
    else{
      cout << "Not the same books" <<endl;
    }
    */


    // 8) Create two Book references to your Books from # 7.
    // use the == operator to test if they are equal. What happens?
    // if it succeeds, are these equal?
    //
    // Answer: Does not succeed
    /*
    Book &b1 = c; Book &b2 = d;
    if(b1 == b2) {
      cout << "Books are equal" <<endl;
    }
    else{
      cout << "Not the same books" <<endl;
      */

    // 9) Create two Book pointers to your Books from # 7.
    // use the == operator to test if they are equal. What happens?
    // if it succeeds, are these equal?
    //
    // Answer: Success comparison but the books are not equal
    Book *b1_p = &c; Book *b2_p = &d;
    if(b1_p == b2_p) {
      cout << "Books are equal" <<endl;
    }
    else{
      cout << "Not the same books" <<endl;
    }

    // 10) (Given in lecture)
    if(c == d) {
      cout << "Books are equal" <<endl;
    }
    else{
      cout << "Not the same books" <<endl;
    }

    // 11)
    Norlin.Donate(c,3);
    Norlin.PrintBooks();
    // 12)

}
