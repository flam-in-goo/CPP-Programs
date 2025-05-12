//WAP to show the concept of namespace.

#include<iostream>
using namespace std;

namespace province
{
    char a[]="Bagmati";
    char b[]="Gandaki";
}

namespace districtNo
{
    int da=13, db=11;
}

int main()
{
    using namespace province;
    cout<<a<<" Province has "<<districtNo::da<<" districts."<<endl;
    cout<<b<<" Province has "<<districtNo::db<<" districts."<<endl;
    return 0;
}

