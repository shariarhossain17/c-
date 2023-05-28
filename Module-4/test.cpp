#include <bits/stdc++.h>
using namespace std;
class Number
{
public:
    static int getStaticNumber()
    {
        static int staticNum = 42;
        return staticNum;
    }
};

int main()
{
    int staticNumber = Number::getStaticNumber();
    cout << "Static Number: " << staticNumber << endl;

    return 0;
}
