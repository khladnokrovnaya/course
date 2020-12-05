#include "Book.hpp" 

Book::Book() : Literature() 
{
	this->author = "";
	this->year = 0;
}

Book::Book(const string& name, const string& author, const string& publisher, int year) : Literature(name, publisher) 
{
	this->author = author;
	this->year = year;
}

void Book::setAuthor(const string& author) 
{
	this->author = author;
}

void Book::setYear(int year) 
{
	this->year = year;
}

string Book::getAuthor() const
{
	return author;
}

int Book::getYear() const
{
	return year;
}

//�������������� ����������� �����
string Book::getInfo()
{
	return "�����. ��������: " + name + ". �����: " + author + ". ��� �������: " + to_string(year) + ". ������������: " + publisher + "\n";
}