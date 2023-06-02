#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    bool inside_str = false;
    int cnt = 0;

    for (char c : str)
    {
        if (isalpha(c))
        {
            if (inside_str == false)
                cnt++;
            inside_str = true;
        }

        else
        {
            inside_str = false;
        }
    }

    cout << cnt;
    // stringstream ss(str);

    // string word;
    // int cnt = 0;
    // while (ss >> word)
    // {

    //     if (word != "...")
    //     {
    //         cnt++;
    //     }
    // }

    // cout << cnt << endl;

    return 0;
}
