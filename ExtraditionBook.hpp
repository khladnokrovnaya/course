#pragma once
#include "Book.hpp"

//книга, выданная читателю
class ExtraditionBook : public Book
{
private:
    string readerName; 
    int extraditionD; 
    int extraditionM; 
    int extraditionY; 

public:
    ExtraditionBook(); 

    ExtraditionBook(const string& name, const string& author, const string& publisher, int year, const string& readerName, int extraditionD, int extraditionM, int extraditionY); 

    void setReaderName(const string& readerName); 

    void setExtraditionD(int extraditionD); 

    void setExtraditionM(int extraditionM); 

    void setExtraditionY(int extraditionY); 

    string getReaderName() const; 

    int getExtraditionD() const;  

    int getExtraditionM() const;  

    int getExtraditionY() const;  
};