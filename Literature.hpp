#pragma once
#include <iostream>

using namespace std;

class Literature
{
protected:
    string name; 
    string publisher; 

    Literature(); 

    Literature(const string& name, const string& publisher); 

public:
    void setName(const string& name); 

    void setPublisher(const string& publisher); 

    string getName() const; 

    string getPublisher() const; 

    virtual string getInfo();  
};