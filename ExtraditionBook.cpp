#include "ExtraditionBook.hpp" 

ExtraditionBook::ExtraditionBook(): Book() 
{
	this->readerName = "";
	this->extraditionD = 0;
	this->extraditionM = 0;
	this->extraditionY = 0;
}

ExtraditionBook::ExtraditionBook(const string& name, const string& author, const string& publisher, int year, const string& readerName, int extraditionD, int extraditionM, int extraditionY) : Book(name, author, publisher, year)
{
	this->readerName = name;
	this->extraditionD = extraditionD;
	this->extraditionM = extraditionM;
	this->extraditionY = extraditionY;
}

void ExtraditionBook::setReaderName(const string& readerName) 
{
	this->readerName = readerName;
}

void ExtraditionBook::setExtraditionD(int extraditionD) 
{
	this->extraditionD = extraditionD;
}

void ExtraditionBook::setExtraditionM(int extraditionM) 
{
	this->extraditionM = extraditionM;
}

void ExtraditionBook::setExtraditionY(int extraditionY) 
{
	this->extraditionY = extraditionY;
}

string ExtraditionBook::getReaderName() const 
{
	return readerName;
}

int ExtraditionBook::getExtraditionD() const 
{
	return extraditionD;
}

int ExtraditionBook::getExtraditionM() const 
{
	return extraditionM;
}

int ExtraditionBook::getExtraditionY() const 
{
	return extraditionY;
}
