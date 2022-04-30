// cpp program to chech the pangram of the given string
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    // namma oru string input kudukurom
    char str[] = "The quick brown fox jumps over a lazy dog";
    // oru character a declare pandrom
    char s;

    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] = ' ')
        {
            char s = tolower(str[i]);
            int index = s - 'a';
            freq[index] = freq[index] + 1;
        }
    }

    int flag = true;
    for (int i = 0; i < 26; i++)
        if (freq[i] == 0)
            flag = false;

    if (flag == true)
        cout << "THe given string is a pangram";
    else
        cout << "The given string is not a pangram";

    return 0;
}
