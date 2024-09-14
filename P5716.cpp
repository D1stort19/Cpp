#include<iostream>
using namespace std;
int day[] = {
    31,28,31,30,31,30,31,31,30,31,30,31
};

int main()
{
    int y, m;
    cin >> y >> m;
    if (((y % 4 == 0) && (y % 100 != 0)) || ((y % 100 == 0) && (y % 400 == 0)))
    {
        day[1]++;
    }
    cout << day[m - 1];
    return 0;
}