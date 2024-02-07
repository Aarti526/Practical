#include<iostream>
#include<string>
using namespace std;
struct student
{
    string id,name,sub[3];
    int sem,i;
    float tm[3],pm[3],gr,sum=0,si=0,sgpa=0,sam=0;
    string ch[3],ch1[3];
int putinput()
    {
    cout<<"Student ID:";
    cin>>id;
    cout<<"Student Name:";
    cin>>name;
    cout<<"semester(1to8): ";
    cin>>sem;
    for(i=0;i<3;i++)
    {
      cout<<"Name of Subject: ";
      cin>>sub[i];
      cout<<"theory marks: ";
      cin>>tm[i];
      cout<<"practical marks: ";
      cin>>pm[i];
    }

    for(i=0;i<3;i++)
    {
        if(tm[i]>=80&&tm[i]<101)
         ch[i]={'A','A'};
         else if(tm[i]>=73&&tm[i]<80)
         ch[i]={'A','B'};
         else if(tm[i]>=66&&tm[i]<73)
        ch[i]={'B','B'};
         else if(tm[i]>=60&&tm[i]<66)
            ch[i]={'B','C'};
         else if(tm[i]>=55&&tm[i]<60)
        ch[i]={'C','C'};
         else if(tm[i]>=50&&tm[i]<55)
        ch[i]={'C','D'};
         else if(tm[i]>=45&&tm[i]<50)
        ch[i]={'D','D'};
        else
            ch[i]={'F','F'};
    }
    cout<<"pratical:"<<endl;
      for(i=0;i<3;i++)
    {
        if(pm[i]>=80&&pm[i]<101)
            ch1[i]={'A','A'};
         else if(pm[i]>=73&&pm[i]<80)
            ch1[i]={'A','B'};
         else if(pm[i]>=66&&pm[i]<73)
           ch1[i]={'B','B'};
         else if(pm[i]>=60&&pm[i]<66)
             ch1[i]={'B','C'};
         else if(pm[i]>=55&&pm[i]<60)
            ch1[i]={'C','C'};
         else if(pm[i]>=50&&pm[i]<55)
            ch1[i]={'C','D'};
         else if(pm[i]>=45&&pm[i]<50)
            ch1[i]={'D','D'};
        else
            ch1[i]={'F','F'};
    }
    for(i=0;i<3;i++)
    {
     sum=tm[i]+pm[i];
     si=sum/2;
     if(si>=80)
        gr=10;
     else if(si>=73&&si<80)
            gr=9;
         else if(si>=66&&si<73)
            gr=8;
         else if(si>=60&&si<66)
            gr=7;
         else if(si>=55&&si<60)
            gr=6;
         else if(si>=50&&si<55)
            gr=5;
         else if(si>=45&&si<50)
            gr=4;
        else
            cout<<"FF"<<endl;
             sam=sam+(3*gr);
    }
   sgpa=sam/9;
   system("cls");
    cout<<"Student Id: "<<id<<endl<<"Student Name: "<<name<<endl<<"Semester: "<<sem<<endl;
    cout<<"\t"<<"\t"<<"theory"<<"\t"<<"\t"<<"Practical"<<endl;
    cout<<sub[0]<<"\t"<<"\t"<<ch[0]<<"\t"<<"\t"<<ch1[0]<<endl;
     cout<<sub[1]<<"\t"<<"\t"<<ch[1]<<"\t"<<"\t"<<ch1[1]<<endl;
      cout<<sub[2]<<"\t"<<"\t"<<ch[2]<<"\t"<<"\t"<<ch1[2]<<endl;
   cout<<"SGPA: "<<sgpa<<endl;
    return 0;
    }
};
int main()
{
    struct student a1;
    a1.putinput();
}


