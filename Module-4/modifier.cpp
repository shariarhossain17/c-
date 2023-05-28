#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello";
    string j = "world";

    // append another string.
    // s += j;
    // cout << s.append(j);

    //  add character to the last of the string.

    s.push_back('s');

    // remove the last character of the string.
    s.pop_back();
    // assign string.

    s = "gello";

    s.assign("hellogello");

    // erase characters from the string.

    s.erase(4, 1);

    // replace a portion of the string. take 3 parameter

    s.replace(4, 0, "hi");

    // insert a portion to a specific position.

    s.insert(4, "ge");
    cout
        << s;

    return 0;
}