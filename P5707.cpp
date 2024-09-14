#include <iostream>
using namespace std;

int main()
{
    int s, v;
    cin >> s >> v;
    int t;
    t = s / v + 10;
    if (s % v > 0)
    {
        t++;
    }
    t = 1920 - t;
    int h, m;
    h = (t / 60) % 24;
    m = t % 60;
    printf("%02d:%02d", h, m);
    return 0;
}