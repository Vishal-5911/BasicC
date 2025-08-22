#include <iostream>
using namespace std;
int main(){
    int i=2,num=0,n;
    cout<<"Enter your number to check Even,Odd = ";
    cin>>n;
    if (n % i == num)
     {
         num++;
     }
    if(num == 1)
            cout<<"Number is Even";
    else
            cout<<"Number is Odd";
return 0;
}