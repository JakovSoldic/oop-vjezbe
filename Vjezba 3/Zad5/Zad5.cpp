#include <iostream>
#include <string>
using namespace std;

int countString(string& str1, string& str2)
{
    int len2 = str2.length();
    int len1 = str1.length();
    int temp = 0;

    for (int i = 0; i <= len1 - len2; i++)
    {
        int j;
        for (j = 0; j < len2; j++)
        {
            if (str1[i + j] != str2[j])
            {
                break;
            }
        }
        if (j == len2)
        {
            temp++;
            j = 0;
        }
    }
    return temp;
}

int main()
{
    string str1 = "BananaAutoZrakoplovAutoKosarkaBalunAutoZemljaCrkvaAuto";
    string str2 = "Auto";

    cout << "Number of occurrences : " << countString(str1, str2) << endl;
    return 0;
}