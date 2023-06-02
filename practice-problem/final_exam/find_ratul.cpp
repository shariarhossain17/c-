#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    int present = 0;
    while (ss >> word)
    {
        if (word == "Ratul")
        {
            present = 1;
            break;
        }

        else
            present = 0;
    }

    if (present == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}