#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
};
int main()
{
    int n;
    cin >> n;
    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name;
        cin >> ar[i].cls;
        cin >> ar[i].s;
        cin >> ar[i].math_marks;
        cin >> ar[i].eng_marks;
        cin.ignore();
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << ar[i].name << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].math_marks << " " << ar[i].eng_marks << endl;
    };
    return 0;
}