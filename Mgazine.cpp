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
	return "������. ��������: " + name + ". ����� �������: " + to_string(number) + ". ������������: " + publisher + "\n";
 }