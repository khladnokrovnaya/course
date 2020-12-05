#include "Literature.hpp" 

Literature::Literature() 
{
    name = "";
    publisher = "";
}

Literature::Literature(const string& name, const string& publisher) 
{
    this->name = name;
    this->publisher = publisher;
}

void Literature::setName(const string& name) 
{
    this->name = name;
}

void Literature::setPublisher(const string& publisher)
{
    this->publisher = publisher;
 }

string Literature::getName() const
{
    return name;
}

string Literature::getPublisher() const
{
    return publisher;
}

//виртуальный метод, который будет переобределен у других классов
string Literature::getInfo()
{
    return "Информация";
}

