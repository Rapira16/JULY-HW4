#ifndef ARRAYINT_H
#define ARRAYINT_H

#include <cassert> 
#include <algorithm>

using namespace std;
class ArrayInt
{
private:
    int m_length;
    int *m_data;

public:
    int length;
    ArrayInt(): m_length(0), m_data(nullptr)
    { }

    ArrayInt(int length):
    m_length(length)
    {
        assert(length >= 0);

        if (length > 0)
            m_data = new int[length];
        else
            m_data = nullptr;
    }

    ~ArrayInt()
    {
        delete [] m_data;
    }
    void DeleteFirst() {
        delete new int[0];
    }

    void DeleteLast() {
        delete new int[length];
    }
    void Sort() {
        sort (new int, new int+length);
        
    }
    void Print() {
        for(int i = 0; i < length; i++) 
            std::cout << new int[i] << " ";
    }
};

#endif
