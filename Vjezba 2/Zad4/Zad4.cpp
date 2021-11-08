#include <iostream>
using namespace std;

struct MyVector
{
    int* elements;
    int logicSize = 0;
    int physicalSize = 0;

    void vector_new()
    {
        int* temp;
      
        if (physicalSize == 0) 
        {
            elements = new int[1];
            logicSize = 1;
        }
        else 
        {
            temp = new int[logicSize];

            for (int i = 0; i < logicSize; i++)
            {
                temp[i] = elements[i];
            }
            
            logicSize = logicSize * 2;
            elements = new int[logicSize];

            for (int i = 0; i < logicSize; i++)
            {
                elements[i] = temp[i];
            }

            delete[] temp;
        }
    }

    void vector_push_back(int m)
    {
        if (logicSize == physicalSize)
            vector_new();
        elements[physicalSize] = m;
        physicalSize++;
    }

    void vector_pop_back()
    {
        physicalSize--;
    }

    int& vector_front()
    {
        return elements[0];
    }
    int& vector_back()
    {
        return elements[physicalSize - 1];
    }

    int& vector_size()
    {
        return physicalSize;
    }

    void print_vector()
    {
        for (int i = 0; i < vector_size(); ++i)
            cout << elements[i] << " ";
    }

    void vector_delete()
    {
        delete[] elements;
    }

    int& capacity()
    {
        return logicSize;
    }
};

int main()
{
    MyVector mv;
    mv.vector_new();

    int m;
    cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
    while (cin >> m)
        mv.vector_push_back(m);

    cout << "first element " << mv.vector_front() << endl;
    cout << "last element " << mv.vector_back() << endl;
    mv.print_vector();

    cout << "removing last element" << endl;
    mv.vector_pop_back();
    mv.print_vector();

    cout << "size " << mv.vector_size() << endl;
    cout << "capacity " << mv.capacity() << endl;

    mv.vector_delete();
}
