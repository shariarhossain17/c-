#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *ar = new int[5];

  for(int i = 0;i<5;i++){
    cin >>ar[i];
  }

  int b[7];
  for(int i = 0;i<5;i++){
     b[i]=ar[i];
  }

  b[5] = 60;
  b[6] = 70;

  for(int i = 0;i<7;i++){
     cout<<b[i]<<" ";
  }

  delete[] ar;
 for(int i = 0;i<5;i++){
     cout<<ar[i]<<" ";
  }
  
    return 0;
}