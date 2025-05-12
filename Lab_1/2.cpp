//WAP to enter the number entered by the user and check whether it is prime or not.

#include<iostream>
using namespace std;

int main()
{
    int num,i,c=0;
    cout<<"Enter a number:";
    cin>>num;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            c++;
    }
    if(!c)
        cout<<num<<" is prime."<<endl;
    else
        cout<<num<< " is composite."<<endl;
    return 0;
}