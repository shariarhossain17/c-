#include <bits/stdc++.h>
using namespace std;

void fun(stringstream &ss)
{
    string word;
    ss << word;

    cout << word;
}
int main()
{
    string str;
    getline(cin, str);

    stringstream ss(str);
    string word;
    ss << word;
    cout << word;
    return 0;
}