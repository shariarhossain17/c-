#include <bits/stdc++.h>

using namespace std;

int get_array(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    get_array(ar, n);

    return 0;
}