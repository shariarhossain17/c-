#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int min_num = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int result = ar[i] + ar[j] + j - i;

                min_num = min(min_num, result);
            }
        }

        cout << min_num << endl;
    }
    return 0;
}