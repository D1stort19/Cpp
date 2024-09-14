#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if (a[0] + a[1] <= a[2])
    {
        cout << "Not triangle";
        return 0;
    }
    if (a[0] * a[0] + a[1] * a[1] > a[2] * a[2])
    {
        cout << "Acute triangle";
    }
    else if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
    {
        cout << "Right triangle";
        
    }
    else if (a[0] * a[0] + a[1] * a[1] < a[2] * a[2])
    {
        cout << "Obtuse triangle";
    }
    if (a[0] == a[1] || a[1] == a[2])
    {
        cout << endl << "Isosceles triangle";
    }
    if (a[0] == a[1] && a[1] == a[2])
    {
        cout << endl << "Equilateral triangle";
    }

    return 0;
}