#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int h, r;
    cin >> h >> r;
    double v;
    v = h * 3.14 * r * r;
    int n;
    n = ceil(20000 / v);
    cout << n;
    return 0;
}