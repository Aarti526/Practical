#include<iostream>
#include<string.h>
using namespace std;
struct employee
{
    string name,qualification;
    string experience;
    int number,id;
   };
int main()
{
    int n,i=0;
    cout<<"enter no. of employee: ";
    cin>>n;
    employee emp[n];
for(i=0;i<n;i++)
   {
    cout<<"Enter an employee id(4 digit) of employee "<<i+1<<":";
    cin>>emp[i].id;
    while(emp[i].id<1000||emp[i].id>9999)
    {
        cout<<"invalid id so enter 4 digit id:"<<emp[i].id<<endl;
    }
         cout<<"Enter Employee Name :";
         cin>>emp[i].name;
         cout<<"Enter Qualification:";
         cin>>emp[i].qualification;
         cout<<"Enter Experience:";
         cin>>emp[i].experience;
         cout<<"Enter Number:";
         cin>>emp[i].number;
         while(emp[i].number<1000000000 || emp[i].number>9999999999)
    {
        cout<<"no is not valid.please enter 10 digit no:";
        cin>>emp[i].number;
    }
   }
   system("cls");
 char option;
    do{
    int id1;
    cout<<"  "<<endl;
    cout<<"Enter employee id to search:";
    cin>>id1;
    bool ch=false;
    for(int i=0;i<n;i++)
    {
        if(emp[i].id==id1)
        {
    cout<<"------------------------------------"<<endl;
    cout<<"  "<<endl;
    cout<<"Employee Name  : "<<emp[i].name<<endl;
    cout<<"  "<<endl;
    cout<<"Qualification  : "<<emp[i].qualification<<endl;
    cout<<"  "<<endl;
    cout<<"Experience     : "<<emp[i].experience<<endl;
    cout<<"  "<<endl;
    cout<<"Contact Number : "<<emp[i].number<<endl;
    cout<<"  "<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"  "<<endl;
    ch=true;
    break;
        }
    }
     if(!ch)
     {
         cout<<""<<endl;
         cout<<"  "<<endl;
         cout << "ERROR:ENTERD EMPLOYEE ID DOES NOT EXIST" << endl;
         cout<<"  "<<endl;
         cout<<""<<endl;
         cout<<"  "<<endl;
     }
     cout<<"Press Y to get another employee details or Press N to exit:";
     cin>>option;
    }while(option=='y' || option=='Y');
    cout<<"exit";
return 0;
}
