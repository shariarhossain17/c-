#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *sakib = new Person("sakib", 12);
    Person *rakib = new Person("rakib", 15);

    // sakib->name = rakib->name;

    *sakib = *rakib;
    delete rakib;

    cout << sakib->name << " " << sakib->age << endl;
    return 0;
}