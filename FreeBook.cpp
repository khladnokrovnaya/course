#include "FreeBook.hpp"

FreeBook::FreeBook(): Book() 
{
	lastReaderName = "";
}

FreeBook::FreeBook(const string& name, const string& author, const string& publisher, int year, const string& lastReaderName): Book(name, author, publisher, year) 
{
	this->lastReaderName = lastReaderName;
}

void FreeBook::setLastReaderName(const string& lastReaderName) 
{
	this->lastReaderName = lastReaderName;
}

string FreeBook::getLastReaderName() const 
{
	return lastReaderName;
}