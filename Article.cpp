#include "Article.hpp" 

Article::Article(): Literature() 
{
	this->author = "";
	this->source = "";
}

Article::Article(const string& name, const string& author, const string& source, const string& publisher) : Literature(name, publisher) 
{
	this->author = author;
	this->source = source;
}

void Article::setAuthor(const string& author) 
{
	this->author = author;
}

string Article::getAuthor() const
{
	return author;
}

void Article::setSource(const string& source) 
{
	this->source = source;
}

string Article::getSource() const
{
	return source;
}

//переопределяем виртуальный метод
string Article::getInfo()
{
	return "Статья. Название: " + name + ". Автор: " + author + ". Источник: " + source + ". Издательство: " + publisher + "\n";
}