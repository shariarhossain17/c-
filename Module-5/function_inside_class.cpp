#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int roll;
    int marks1;
    int marks2;

    Student(string nm, int a, int r, int m1, int m2)
    {
        name = nm;
        age = a;
        roll = r;
        marks1 = m1;
        marks2 = m2;
    }
    // void Hello()
    // {
    //     cout << name << " " << age;
    // }

    // int total_marks()
    // {
    //     return marks1 + marks2;
    // }
};
int main()
{
    Student Karim("Karim", 20, 17, 30, 40);

    Student *rahim = new Student("rahim", 12, 23, 23, 12);

    cout << Karim.name << endl;

    cout << rahim->name << endl;
    return 0;
}