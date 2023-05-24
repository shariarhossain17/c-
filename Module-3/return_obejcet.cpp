#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;

    Student(char *n, int r, int c)
    {
        strcpy(name, n);
        roll = r,
        cls = c;
    }
};

Student fun()
{
    char n[100] = "rahim bro";
     Student r(n, 100, 12);
      return r;
}

int main()
{
    Student rahim = fun();

    cout<<rahim.roll;
    return 0;
}