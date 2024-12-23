// ..............................Railway Reservation System.............................

#include <iostream>
#include <string.h>
using namespace std;

class Train
{
   public:
        int trainNumber;
        char trainName[50];
        char source[50];
        char destination[50];
        char trainTime[10];
        int train1;
        //setter
        void setdata()
        {
            cout<<"Enter trainnumber: ";
            cin>>trainNumber;
            cout<<"Enter trainName: ";
            cin>>trainName;
            cout<<"Enter source: ";
            cin>>source;
            cout<<"Enter destination: ";
            cin>>destination;
            cout<<"Enter trainTime: ";
            cin>>trainTime;
        }
          //getter
        void getdata()
        {
            cout<< "trainNumber: "<< trainNumber << endl;
            cout<< "trainName: "<< trainName << endl;
            cout<< "source: "<< source << endl;
            cout<< "destination: "<< destination << endl;
            cout<< "trainTime: "<< trainTime << endl;
        }
};
int main()
{

    int menu,choice,train1;
    int i, flag;
    int traincount = 3;
    
    do
    {
    cout<<"---Railway Reservation System Menu---"<<endl;
    cout<<"1. Add New Train Record"<<endl;
    cout<<"2. Display All Train Records"<<endl;
    cout<<"3. Search Train by Number"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter your choice ";
    cin>>choice;
    
    switch(choice)
    {
        Train t1[100];
        case 1:
            for(i=0;i<traincount;i++)
                {
                     t1[i].setdata();
                }
         break;
        
        case 2:
        for(i=0;i<traincount;i++)
                {
                     t1[i].getdata();
                }
        break;
        
        case 3:
        int search;
        cout<<"enter search train number: ";
        cin>>search;
        
         for(i=0;i<traincount;i++)
                {   
                    if(t1[i].trainNumber == search )
                    {
                     flag=1;
                     t1[i].getdata();
                    }
                }    
           if(flag == 1)
           {
           }
           else
           {
              cout<<"train number"<<search<<"number not found"<<endl;
           }
                cout<<endl;
        break;
        
        case 4:
        cout<<"Exiting the system. Goodbye!";
        break;
    }
    }while(choice < 4);
    
  return 0;
}

output::

---Railway Reservation System Menu---
1. Add New Train Record
2. Display All Train Records
3. Search Train by Number
4. Exit
Enter your choice 1
Enter trainnumber: 101
Enter trainName: okha
Enter source: surat
Enter destination: mumbai
Enter trainTime: 10AM

Enter trainnumber: 102
Enter trainName: rajpal
Enter source: mumbai
Enter destination: rajsthan
Enter trainTime: 12PM

Enter trainnumber: 103
Enter trainName: kolkata
Enter source: delhi
Enter destination: thana
Enter trainTime: 06AM

---Railway Reservation System Menu---
1. Add New Train Record
2. Display All Train Records
3. Search Train by Number
4. Exit
Enter your choice 2
trainNumber: 101
trainName: okha
source: surat
destination: mumbai
trainTime: 10AM

trainNumber: 102
trainName: rajpal
source: mumbai
destination: rajsthan
trainTime: 12PM

trainNumber: 103
trainName: kolkata
source: delhi
destination: thana
trainTime: 06AM

---Railway Reservation System Menu---
1. Add New Train Record
2. Display All Train Records
3. Search Train by Number
4. Exit
Enter your choice 3
enter search train number: 104

train number104number not found

---Railway Reservation System Menu---
1. Add New Train Record
2. Display All Train Records
3. Search Train by Number
4. Exit
Enter your choice 4

Exiting the system. Goodbye!

=== Code Execution Successful ===



