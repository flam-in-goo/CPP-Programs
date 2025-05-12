/*WAP to check whether a given number is armstrong or not using C++.*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num, digit, digitCount=0, sum=0, temp;
    cout<<"Enter a number:";
    cin>>num;

    temp=num;

    while(temp)
    {
        temp/=10;
        digitCount++;
    }

    temp=num;

    while (temp)
    {
        digit=temp%10;
        sum+=pow(digit,digitCount);
        temp/=10;
    }

    if(num==sum)
        cout<<num<<" is Armstrong.";
    else
        cout<<num<<" is not Armstrong.";

    return 0;
}