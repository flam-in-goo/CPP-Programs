/*WAP to get number of series from the user and display fibonacci series in C++.*/

#include<iostream>
using namespace std;

int main()
{
    int num, a=0, b=1, c, i;
    cout<<"Enter a number of series:";
    cin>>num;
    cout<<a<<" "<<b<<" ";
    for(i=1; i<num-1; i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}