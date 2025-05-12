/*WAP to check whether a given number is palindrome or not using C++*/

#include<iostream>
using namespace std;

int main()
{
    int num, digit, rev=0,temp;
    cout<<"Enter a number:";
    cin>>num;

    temp=num;

    while(temp)
    {
        digit=temp%10;
        rev=rev*10+digit;
        temp/=10;
    }

    if(num==rev)
        cout<<num<<" is palindrome.";
    else
        cout<<num<<" is not palindrome.";
    
    return 0;
}