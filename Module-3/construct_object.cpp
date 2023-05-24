#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    char section;
    char name[100];

    Student(int r, int c, int s, char *n)
    {
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};

int main()
{
    Student rahim(1, 12, 'A', "Rahim");

    cout<<rahim.name;
    return 0;
}