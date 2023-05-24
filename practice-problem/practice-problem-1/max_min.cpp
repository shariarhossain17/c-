#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int min_num;
    int max_num;

    if (a >= b && a >= c)
    {
        max_num = a;
    }
    else if (b >= a && b >= c)
    {
        max_num = b;
    }

    else
    {
        max_num = c;
    }
    if (a <= b && a <= c)
    {
        min_num = a;
    }
    else if (b <= a && b <= c)
    {
        min_num = b;
    }

    else
    {
        min_num = c;
    }

    cout << min_num << " " << max_num;

    return 0;
}