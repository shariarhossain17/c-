#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int marks;
};

bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
        return true;
    else
        return false;
}
int main()
{

    Student ar[2];

    for (int i = 0; i < 2; i++)
    {
        getline(cin, ar[i].name);
        cin >> ar[i].age;
        cin >> ar[i].marks;
        cin.ignore();
    }

    sort(ar, ar + 2, cmp);
    for (int i = 0; i < 2; i++)
    {
        cout << ar[i].name << " " << ar[i].age << " " << ar[i].marks << endl;
    }

    return 0;
}