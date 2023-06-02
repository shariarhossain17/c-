#include <bits/stdc++.h>
using namespace std;

class CustomSort
{
public:
    char ch;
    int cnt;
};

bool cmp(CustomSort a, CustomSort b)
{
    if (a.cnt > b.cnt)
        return true;
    else
        return false;
}
int main()
{
    CustomSort ar[26];
    for (int i = 0; i < 26; i++)
    {
        ar[i].ch = (i + 'a');
        ar[i].cnt = 0;
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        ar[c - 'a'].cnt++;
    }

    sort(ar, ar + 26, cmp);
    for (int i = 0; i < 26; i++)
    {

        if (ar[i].cnt > 0)
        {

            for (int j = 0; j < ar[i].cnt; j++)
            {
                cout << ar[i].ch;
            }
        }
    }

    return 0;
}