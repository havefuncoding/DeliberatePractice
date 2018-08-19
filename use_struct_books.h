// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.27 Setting up your data with structures
// This header file defines a structure for information about 
// a book

struct bookInfo {
    char title[40];
    char author[25];
    float price;
    int pages;
};
