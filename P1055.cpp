#include<iostream>
using namespace std;

int main()
{
    string s;
    int a = 0;
    cin >> s;
    int x = 1;
    for (int i = 0; i < 11; i++)
    {
        if (s[i] == '-')
        {
            x--;
        }
        else
        {
            a = a + (s[i] - '0') * (i + x);
        }
    }
    a %= 11;
    if (a == 10)
    {
        if (s[12] == 'X')
        {
            cout << "Right";
        }
        else
        {
            s.erase(12, 1);
            cout << s + 'X';
        }
    }
    else
    {
        if (s[12] - '0' == a)
        {
            cout << "Right";
        }
        else
        {
            s.erase(12, 1);
            cout << s << a;
        }
    }
    return 0;
}