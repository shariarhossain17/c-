#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    int age;
    char section;

};
int main()
{

    Student rahim;
    Student karim;

    rahim.age= 19;
    rahim.roll=12;
    rahim.section='A';
    char n[100] = "Rahim udddin viya";
    strcpy(rahim.name,n);


    karim.age=20;
    karim.roll=100;
    karim.section ='C';
    char n2[100] = "Karim vaya";
    cout<<karim.age;
    return 0;
}