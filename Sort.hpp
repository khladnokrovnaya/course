#pragma once

#include "Literature.hpp"

class Sort
{
private:
    int len = 0;

public:
    Sort(int len);

    int getLen() const;

    void setLen(int len);

    virtual void sortByName(Literature** arr);

    virtual void sortByPublisher(Literature** arr);
};