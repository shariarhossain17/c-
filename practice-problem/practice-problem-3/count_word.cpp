#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    stringstream ss(str);

    string word;
    int cnt = 0;
    while (ss >> word)
    {

        if (word != "...")
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}