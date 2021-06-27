/*Write a program to read records of students with attributes Roll_No, Name, Branch,
Semester and 5 theory marks in M1, M2, M3, M4 and M5. Calculate the percentage
of each student and store in its record. Use array of objects to store data and display
them record-wise.*/


#include<iostream>
#include<cstring>
using namespace std;

class student{
 private:
 int Roll_No;
 char *Name;
 char *Branch;
 int Semester;
 int  theory_marks[5]={0};
 int total;
 float per;
 public:

     void get();
     void show();
        ~student(){
         delete []Name;
         delete []Branch;
     }
};

void student::get(){
    cout<<"\n\tEnter the student ROLL_NO:";
    cin>>Roll_No;
    char temp[30];
    cout<<"\tEnter the student Name:";
    {
    cin.ignore();
    cin.getline(temp,30);
    int x=strlen(temp);
    Name=new char[x+1];
    strcpy(Name,temp);
    }
    cout<<"\tEnter the student Branch:";
    {
    cin.getline(temp,30);
    int x=strlen(temp);
    Branch=new char[x+1];
    strcpy(Branch,temp);
    }
    cout<<"\tEnter the student Semester:";
    cin>>Semester;
    int temp_sum=0;
    for(int i=0;i<5;i++){
        cout<<"\tEnter the M-"<<i+1<<"marks:";
        cin>>theory_marks[i];
        cout<<"\n";
        temp_sum=temp_sum+theory_marks[i];
    }
    total=temp_sum;
    per=total/5;
}
void student::show(){

    cout<<"\n\t\t -----------------------------------------------------------\n";
    cout<<"\t\t Branch:"<<Branch<<"\t\t\t\t"<<"Semester:"<<Semester;
    cout<<"\n\n\t\t Rollno:"<<Roll_No<<"\t\t\t"<<"student Name:"<<Name;
    cout<<"\n\t\t \t\t--Theory Marks--\n";
    for(int i=0;i<5;i++){
    cout<<"\n\t\t\t M"<<"-"<<i+1<<":   "<<theory_marks[i];
}
    cout<<"\n\n\t\t Total marks:"<<total<<"\t\t\t"<<"percentage:"<<per<<"%";
    cout<<"\n\t\t -----------------------------------------------------------\n";
}

int main(){
    int n;
    student *ptr;
    cout<<"Enter the total Student:";
    cin>>n;
    ptr=new student[n];
    if(ptr==0){
        cout<<"insuff. memory !";
        return 1;
    }
    for(int i=0;i<n;i++){
        (ptr+i)->get();
        cout<<"\n-----------------------------------------------------------------------------";
    }
    cout<<"\n\t\t+-----------------------------------------------------------+\n";
    cout<<"\t\t|                   LNCT STUDENT RECORDS                   |\n";
    cout<<"\t\t+-----------------------------------------------------------+\n";
    for(int i=0;i<n;i++){
        (ptr+i)->show();
        cout<<"\n";
    }
    delete []ptr;
return 0;
}
