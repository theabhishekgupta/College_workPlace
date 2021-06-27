/*Write a program to read a string with the help of constructor using dynamic memory
allocation. Then overload < operator to compare their length and display the smaller
string first and larger string second. For eg. If obj1 and obj2 are two objects having a
string then compare by if(obj1<obj2). If condition is true then print string of object
obj1 “is less than” followed by string of object obj2 otherwise vice versa.*/

#include<iostream>
using namespace std;

char* name_copy(char*,const char*);
int name_length(const char*);

class Name{
    char* name=NULL;
public:
    Name();
    bool operator<(const Name&);
    void show(){
    cout<<name<<" ";
    }
    ~Name(){
    delete[]name;
    }
};

Name::Name(){
    char temp[30];
    cout<<"Enter the first Name :";
    cin.getline(temp,30);
    int x=name_length(temp);
    name=new char[x+1];
    name_copy(name,temp);
}

bool Name::operator<(const Name& _obj){
    int l1,l2;
    l1=name_length(name);
    l2=name_length(_obj.name);
    if(l1 < l2)
        return true;
    else
        return false;
}

char* name_copy(char* str1, const char* str2){
    int i;
    for(i=0;str2[i]!='\0';i++){
        str1[i]=str2[i];
    }
    str1[i]='\0';
    return str1;
}

int name_length(const char* ptr){
    int i;
    for(i=0;*(ptr+i)!='\0';i++);
    return i;
}


int main(){
    Name str1;
    Name str2;

    cout<<"\n\n\t----compare---- \n\n"<<endl;
    if(str1 < str2){
        cout<<"' ";
        str1.show();
        cout<<"'";
        cout<<" "<<"is less than "<<" ";
        cout<<"' ";
        str2.show();
        cout<<"' ";
        }
    else if(str2 < str1){
        cout<<"' ";
        str2.show();
        cout<<"'";cout<<" "<<"is less than "<<" ";
         cout<<"' ";
        str1.show();
        cout<<"'";
        }
    else{
         cout<<"' ";
        str1.show();
        cout<<"'";cout<<" equal "<<" ";
         cout<<"' ";
        str2.show();
        cout<<"'"<<"\n\n\n";
        }
return 0;
}

