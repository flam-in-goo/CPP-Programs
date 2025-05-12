/* WAP that uses functions to swap the values of two variables. Use the functions once with the reference variable and once with the normal variable.
    Check which function swaps the value really.*/

    #include<iostream>
    using namespace std;
    void swap(int a, int b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }

    void swapp(int &a, int &b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }

    int main()
    {
        int a,b;
        cout<<"Enter two numbers:";
        cin>>a>>b;
        swap(a,b);
        cout<<"Value of a and b is: "<<a<<" "<<b<<endl;
        swapp(a,b); 
        cout<<"Value of a and b is: "<<a<<" "<<b<<endl;
        return 0;   

    }