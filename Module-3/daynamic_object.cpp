#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int age;

    Student(char *n, int r, int a)
    {
        strcpy(name, n);
        roll = r;
        age = a;
    }
};

int main()
{
    Student *rahim = new Student("Rahim", 11, 20);

    cout << (*rahim).age << endl;
    cout << (*rahim).roll << endl;
    cout << (*rahim).name << endl;

    delete rahim;

    cout << rahim->age << endl;
    cout << rahim->roll << endl;
    cout << rahim->name << endl;
    return 0;
}