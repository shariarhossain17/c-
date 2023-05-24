#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int max_num = ar[0];
    for (int i = 0; i < n; i++)
    {

        if (max_num < ar[i])
        {
            max_num = max(max_num, ar[i]);
        }
    }

    cout << max_num;
    return 0;
}