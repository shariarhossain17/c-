#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

// bool cmp(Student a, Student b)
// {
//     int total_marks = a.eng_marks + a.math_marks;
// }
int main()
{
    int n;
    cin >> n;
    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].nm;
        cin >> ar[i].cls;
        cin >> ar[i].s;
        cin >> ar[i].id;
        cin >> ar[i].math_marks;
        cin >> ar[i].eng_marks;
        cin.ignore();
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            int first_marks = ar[i].math_marks + ar[i].eng_marks;

            int second_marks = ar[j].math_marks + ar[j].eng_marks;

            if (first_marks < second_marks)
            {
                Student tmp = ar[i];
                ar[i] = ar[j];
                ar[j] = tmp;
            }
            else if (first_marks == second_marks)
            {
                if (ar[i].id > ar[j].id)
                {
                    Student tmp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = tmp;
                }
            }
        };
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].nm << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].id << " " << ar[i].math_marks << " " << ar[i].eng_marks << endl;
    }
    return 0;
}