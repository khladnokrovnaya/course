#pragma once

#include "Literature.hpp"
#include <string>

class Magazine : public Literature
{
protected:
    int number; 

public:
    Magazine(); 

    Magazine(const string& name, const string& publisher, int number); 

    void setNumber(int number); 

    int getNumber() const; 

    virtual string getInfo(); 
};