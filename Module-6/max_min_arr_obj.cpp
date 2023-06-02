#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int marks;
};
int main()
{

    Student a[2];
    for (int i = 0; i < 2; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].age;
        cin >> a[i].marks;
        cin.ignore();
    }

    Student mx;
    mx.marks = INT_MIN;

    for (int i = 0; i < 2; i++)
    {

        if (a[i].marks > mx.marks)
        {
            mx = a[i];
        }
    }

    cout << mx.name << " " << mx.age << " " << mx.marks << endl;

    Student sx;
    sx.marks = INT_MAX;

    for (int i = 0; i < 2; i++)
    {

        if (a[i].marks < sx.marks)
        {
            sx = a[i];
        }
    }

    cout << sx.name << " " << sx.age << " " << sx.marks << endl;

    return 0;
}