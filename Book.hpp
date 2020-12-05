#pragma once
#include "Literature.hpp" 
#include <stdlib.h>
#include <string>

class Book : public Literature
{
protected:
    string author; 
    int year; 

public:
    Book(); 

    Book(const string& name, const string& author, const string& publisher, int year); 
 
    void setAuthor(const string& author); 

    void setYear(int year); 

    string getAuthor() const; 

    int getYear() const; 
        
    virtual string getInfo(); 
};