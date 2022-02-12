#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;

int doFileStuff(vector<int> numbers)
{
    int a, temp = 0;
    fstream myfile("Numbers.txt", std::ios_base::in);
    
    //1. baci iznimku ako ne postoji datoteka
    if (myfile.fail())
    {
        cout << "File does not exist";
        exit(EXIT_FAILURE);
    }
    
    //2. napuni vektor brojevima iz datoteke
    while (myfile >> a)
    {
        numbers.push_back(a);
    }
    myfile.close();
    
    //3. prebroji sve brojeve vece od 500
    for (auto i : numbers)
    {
        if (i > 500)
        {
            temp += i;
        }
    }
    cout << temp << endl;
    
    //4. nadi minimalni i maximalni element
    cout << "Min Element = "<< *min_element(numbers.begin(), numbers.end()) << endl;
    cout << "Max Element = " << *max_element(numbers.begin(), numbers.end()) << endl;
    
    //5. iz vektora izbaci brojeve manje od 300
    numbers.erase(remove_if(numbers.begin(), numbers.end(), [](int n) { return n < 300; }), numbers.end());
    cout << "Vektor nakon sta izbacimo brojeve manje od 300 : ";
    for (auto i : numbers)
    {
        cout << i << " ";
    }
    cout << endl;
   
    //6. preostale brojeve sortiraj silazno
    cout << "Vektor sortiran silazno : ";
    sort(numbers.begin(), numbers.end(), greater<int>());
    for (auto i : numbers)
    {
        cout << i << " ";
    }
    return 0;
}

int main()
{
    vector<int> numbers;
    doFileStuff(numbers);
}