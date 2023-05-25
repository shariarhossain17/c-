#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, c;
    char b;

    cin >> a >> b >> c;

    if (b == '>')
    {
        if (a > c)
        {
            cout << "Right";
        }

        else
        {
            cout << "Wrong";
        }
    }

    else if (b == '<')
    {

        if (a > c)
        {
            cout << "Wrong";
        }
        else if (a == c)
        {
            cout << "Wrong";
        }
        else
        {
            cout << "Right";
        }
    }

    else
    {
        if (a == c)
        {
            cout << "Right";
        }

        else
        {
            cout << "Wrong";
        }
    }
    return 0;
}