#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char s;
    int roll;
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
        cin >> ar[i].roll;
        cin.ignore();
    }

    // int tmp = ar[0].roll;
    // ar[0].roll = ar[n - 1].roll;
    // ar[n - 1].roll = tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (ar[i].roll < ar[j].roll)
            {
                int tmp = ar[i].roll;
                ar[i].roll = ar[j].roll;
                ar[j].roll = tmp;
            }
            else
            {
                int tmp = ar[i].roll;
                ar[i].roll = ar[j].roll;
                ar[j].roll = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].roll << endl;
    }

    return 0;
}