#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello world";

    // cout << s.size();
    // cout << s.length();
    // cout << s.max_size();

    // s.resize(15, 'x');
    // s.clear();
    // if (s.empty() == true)
    //     cout
    //         << "Empty";
    // else
    // {
    //     cout << "Not empty";
    // }
    cout << s.capacity();

    return 0;
}