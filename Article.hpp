#pragma once

#include "Literature.hpp" 

class Article : public Literature
{
protected:
    string author; 
    string source; 

public:
    Article();
    Article(const string& name, const string& author, const string& publisher, const string& source);

    void setAuthor(const string& author); 

    string getAuthor() const; 

    void setSource(const string& source); 

    string getSource() const; 

    string getInfo(); 
};