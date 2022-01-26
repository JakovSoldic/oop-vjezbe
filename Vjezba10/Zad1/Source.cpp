#include <iostream>
#include <string>
using namespace std;


template <class SortArray>
void sortA(SortArray* array, int  n)
{
    bool check = false;
    int counter = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {   
            if (isalpha(array[i]))
            {
                char temp1 = toupper(array[i]);
                char temp2 = toupper(array[j]);
                if (temp1 > temp2)
                {
                    SortArray item;
                    item = array[i];
                    array[i] = array[j];
                    array[j] = item;
                }
            }
            else
            {
                if (array[i] > array[j])
                {
                    SortArray item;
                    item = array[i];
                    array[i] = array[j];
                    array[j] = item;
                }
            }
        }
    }
}


int main()
{
    int arrayNumbers[] = { 8, 2, 1, 3, 6, 7, 5, 4, 9, 10 };
    char arrayLetters[] = { 'a', 'B', 'c', 'D', 'C', 'A', 'd', 'b' };
    
    int N = 10;
    int L = 8;
    
    sortA(arrayNumbers, N);
    for (int i = 0; i < N; i++)
        cout << arrayNumbers[i] << " ";
   
    cout << endl;
    
    sortA(arrayLetters, L);
    for (int j = 0; j < L; j++)
        cout << arrayLetters[j] << " ";
    
    return 0;
}