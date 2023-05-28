#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char o, e;

    cin >> a >> o >> b >> e >> c;
    if (o == '+')
    {
        if ((a + b) == c)
        {
            cout << "Yes";
        }
        else if ((a + b) != -c)
        {
            cout << a + b;
        }
        else
        {
            cout << 0;
        }
    }

    else if (o == '-')
    {
        if ((a - b) == c)
        {
            cout << "Yes";
        }
        else if ((a - b) != c)
        {
            cout << a - b;
        }
        else
        {
            cout << 0;
        }
    }
    else
    {
        if ((a * b) != c)
        {
            cout << a * b;
        }
        else
        {
            cout << "Yes";
        }
    }
    return 0;
}