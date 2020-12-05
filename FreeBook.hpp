#pragma once
#include "Book.hpp"

//книга, возвращенная в библиотеку
class FreeBook : public Book
{
private:
    string lastReaderName; 

public:
    FreeBook(); 

    FreeBook(const string& name, const string& author, const string& publisher, int year, const string& lastReaderName); 

    void setLastReaderName(const string& readerName); 

    string getLastReaderName() const; 
};
