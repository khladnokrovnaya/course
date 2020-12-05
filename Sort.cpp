#include "Sort.hpp" 

Sort::Sort(int len)
 {
	this->len = len;
}

void Sort::sortByName(Literature** arr) 
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (strcmp(arr[i]->getName().c_str(), arr[j]->getName().c_str()) > 0)
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}

void Sort::sortByPublisher(Literature** arr) 
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (strcmp(arr[i]->getPublisher().c_str(), arr[j]->getPublisher().c_str()) > 0)
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}

int Sort::getLen () const
{
    return len;
}

void Sort::setLen(int len)
{
    this->len = len;
}