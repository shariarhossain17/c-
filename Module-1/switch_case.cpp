#include <iostream>

#include <iomanip>

using namespace std;



int main(){


    int a;
    cin >>a;

   switch(a%2)
   {
    case 0:
    cout<< "yes" <<endl;
    break;
    default:
    cout<<"NO"<<endl;
   }
    return 0;
}