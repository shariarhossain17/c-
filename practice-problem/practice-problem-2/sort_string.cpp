#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ar[n];

    cin >> ar;

    sort(ar, ar + n);

    cout << ar << endl;
    return 0;
}