#include "Magazine.hpp" 

Magazine::Magazine(): Literature() 
{
	this->number = 0;
}

Magazine::Magazine(const string& name, const string& publisher, int number) : Literature(name, publisher) 
 {
	this->number = number;
 }

 void Magazine::setNumber(int number) 
 {
	this->number = number;
 }

 int Magazine::getNumber() const
 {
	return number;
 }

 
 string Magazine::getInfo()
 {
	return "Журнал. Название: " + name + ". Номер выпуска: " + to_string(number) + ". Издательство: " + publisher + "\n";
 }