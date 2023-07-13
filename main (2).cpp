/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class weather
    {
        public:
        
    void reports()
    {
        string name,college,location;
        int day;
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter the college:"<<endl;
        cin>>college;
        cout<<"Enter location:"<<endl;
        cin>>location;
        cout<<"1.Yesterday report"<<endl;
        cout<<"2.Today report"<<endl;
        cout<<"3.Tomorrow report"<<endl;
        cout<<"4.daily report"<<endl;
        cout<<"5.weekly report"<<endl;
        cout<<"6.monthly report"<<endl;
        
        cout<<"Enter the report day(1 to 6):"<<endl;
        cin>>day;
        switch(day)
        {
           case 1:
           cout<<"yesterday report"<<endl;
           break;
           case 2:
           cout<<"today report"<<endl;
           break;
           case 3:
           cout<<"tomorrow report"<<endl;
           break;
           case 4:
           cout<<"daily report"<<endl;
           break;
           case 5:
           cout<<"weekly report"<<endl;
           break;
           case 6:
           cout<<"monthly report"<<endl;
           break;
           default:"No input";
    }
    }
    void temp()
    {
        int temp;
        cout<<"enter the temperature:"<<endl;
        cin>>temp;
        if((temp>=50) && (temp<=100))
        {
            cout<<"The weather is heatwaves moment"<<endl;
        }
        else if((temp>30) && (temp<50))
        {
            cout<<"the weather is cloudy moment"<<endl;
        }
        else if((temp>=20)&&(temp<=30))
        {
            cout<<"The weather is thunder moment"<<endl;
        }
        else
        {
            cout<<"the weather is rainy moment"<<endl;
        }
        
    }
    };
    int main()
    {
        weather sara;
        sara.reports();
        sara.temp();
        
    }
