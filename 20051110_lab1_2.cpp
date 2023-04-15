#include<iostream>
using namespace std;
struct student{
    int roll,marks[5];
    string name;
};
float calculate(student& n)
{
    int total=0;float per=0.0;
    for(int i=0;i<5;i++)
    {
        total=total+n.marks[i];
    }
    per=((float)total)/5;
    return per;
}
int displayroll(student& n,int rollnumber,int p,int m)
{
        if(rollnumber==n.roll)
        {
           cout<<"Student details for Roll Number"<<n.roll<<":"<<endl<<"Name:"<<n.name<<endl<<"Percentage obtained:"<<p<<endl<<"Total marks obtained:"<<m<<endl; 
           return 1;
        }
        else
        {
        return 0;
        }
}
int display(student& n,float up,float down,int p,int m)
{
        if(p>=down && p<=up)
        {
            cout<<"Name:"<<n.name<<endl<<"Roll No:"<<n.roll<<endl<<"Percentage obtained:"<<p<<endl<<"Total marks obtained:"<<m<<endl;
            return 1;
        }
        else
        return 0;
}
void sort(int total[],int n)
{
for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
            {
               if(total[i]>total[j])
                {
                    int t=total[i];
                    total[i]=total[j];
                    total[j]=t;
                }
            }
    }
    cout<<"Total marks in ascending order:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<total[i]<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    int total[n];
    float percentage[n];
    struct student p[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name of student"<<(i+1)<<endl;
        cin>>p[i].name;
        cout<<"Enter roll no of student"<<(i+1)<<endl;
        cin>>p[i].roll;
        for(int j=0;j<5;j++)
        {
        cout<<"Enter marks of subject"<<(j+1)<<endl;
        cin>>p[i].marks[j];
        }
    }
    for(int i=0;i<n;i++)
    {
    percentage[i]=calculate(p[i]);
    total[i]=percentage[i]*5;
    }
    int rollnumber;
    cout<<"Enter the Roll Number"<<endl;
    cin>>rollnumber;
    for(int i=0;i<n;i++)
    {
    int g=displayroll(p[i],rollnumber,percentage[i],total[i]);
    if(g==1)
    break;
    }
    float up,down;
    cout<<"Enter the upper limit and lower limit of percentage:"<<endl;
    cin>>up>>down;
    cout<<"Student details for the given range of percentage:"<<endl;
    int z,count=0;
    for(int i=0;i<n;i++)
    {
    z=display(p[i],up,down,percentage[i],total[i]);
    count=count+z;
    }
    if(count==0)
    {
        cout<<"Nothing to show"<<endl;
    }
    sort(total,n);
     return 0;
}