/*WAP to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. 
    Pass the structure to the function.*/

    #include<iostream>
    using namespace std;

    struct DATE
    {
        int date;
        int month;
        int year;
    };

    void printDate(DATE d )
    {
        cout<<d.date<<"/"<<d.month<<"/"<<d.year<<endl;
    }

    int main()
    {
        struct DATE d;
        cout<<"Enter the date:";
        cin>>d.date;
        cout<<"Enter the month:";
        cin>>d.month;
        cout<<"Enter the year:";
        cin>>d.year;
        printDate(d);

        return 0;

    }
