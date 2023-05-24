#include <bits/stdc++.h>
using namespace std;


int *fun (){
    int *ar = new int[5];
    for(int i = 0;i<5;i++){
        cin>>ar[i];
    }

    return ar;
}
int main()
{
    int *a = fun();

    for(int i = 0;i<5;i++){
        cout<<a[i]<<" ";
    }

    delete[] a;
     for(int i = 0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}