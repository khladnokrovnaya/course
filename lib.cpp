#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Literature.hpp" 
#include "Book.hpp" 
#include "Article.hpp" 
#include "Magazine.hpp" 
#include "Sort.hpp" 

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); 

    //создаем класс книги
    Book book("Война и мир", "Л.Н.Толстой", "Издательский дом Мир", 1978);

    string info = book.getInfo();

    cout << info;

    //создаем класс статьи
    Article article("Влияние музыки на человека", "И. И. Иванов", "Журнал 'Хочу все знать'", "Москва");

    info = article.getInfo();

    cout << info;

    //создаем класс журнала
    Magazine magazine("Огонек", "Ленинград", 10);

    info = magazine.getInfo();

    cout << info;

    Literature* arr[3];

    arr[0] = new Book("Война и мир", "Л.Н.Толстой", "Издательский дом Мир", 1978);
    arr[1] = new Article("Влияние музыки на человека", "И. И. Иванов", "Журнал 'Хочу все знать'", "Москва");
    arr[2] = new Magazine("Огонек", "Ленинград", 10);

    Sort *sort = new Sort(3);

    //выполняем сортировку по названию
    sort->sortByName(arr);

    cout << "\nМассив после сортировки по имени \n";

    for (int i = 0; i < 3; ++i)
    {
        info = arr[i]->getInfo();

        cout << info;
    }

    //выполняем сортировку по издательству
    sort->sortByPublisher(arr);

    cout << "\nМассив после сортировки по издательству\n";

    for (int i = 0; i < 3; ++i)
    {
        info = arr[i]->getInfo();

        cout << info;
    }

}
