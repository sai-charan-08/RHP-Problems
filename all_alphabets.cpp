#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int flaglow = 0;
    int flagup = 0;

    for (char ch : s)
    {
        if (islower(ch))
        {
            flaglow |= (1 << (ch - 'a'));
        }
        else if (isupper(ch))
        {
            flagup |= (1 << (ch - 'A'));
        }
    }

    if (flaglow == (1 << 26) - 1 &&
        flagup == (1 << 26) - 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
} 
