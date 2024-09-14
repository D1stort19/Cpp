#include<iostream>
using namespace std;

int main()
{
    int x, ans = 100000000;
    cin >> x;

    for (int i = 0; i < 3; i++)
    {
        int n, p, sum;
        cin >> n >> p;
        sum = x / n;
        if (x % n != 0)
        {
            sum++;
        }
        sum *= p;
        if (sum < ans)
        {
            ans = sum;
        }
    }
    cout << ans;
    return 0;
}