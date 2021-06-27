/*Overload insertion and extraction operator in your program and show the results.*/

#include<iostream>
using namespace std;

class Emp{
    int age;
    char name[20];
    float sal;
public:
    friend istream& operator>>(istream& ,Emp& );
    friend ostream& operator<<(ostream& ,Emp& );
};

istream& operator>>(istream& in, Emp& E){
    in>>E.age>>E.name>>E.sal;
    return in;
}

ostream& operator<<(ostream& out, Emp& E){
    out<<E.age<<"  "<<E.name<<"  "<<E.sal<<endl;
    return out;
}

int main(){
    Emp E1,E2;
    cout<<"\n\n\t\tEnter the age ,name and sal:";
    cin>>E1;
    cout<<"\n\n\t\tEnter the age ,name and sal:";
    cin>>E2;
    cout<<"\n\n\t\t--details of 1st Emp--\n\t\t";
    cout<<E1;
    cout<<"\n\n\t\t--details of 2nd Emp--\n\t\t";
    cout<<E2;
return 0;
}
