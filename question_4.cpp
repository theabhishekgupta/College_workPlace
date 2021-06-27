/*Write a program to swap private data of two classes.*/


#include <iostream>
using namespace std;

class B;

class A{
private:
    int x;
public:
    A(int _x ):x(_x){

    }
    void show(){
    cout<<"value of obj1="<<x<<endl;
    }
    friend  void data_swap(A& , B&);
};

class B{

private:
    int y;
public:
    B(int _y ):y(_y){
    }
    void show(){
    cout<<"value of obj2="<<y<<endl;
    }
    friend  void data_swap(A& , B&);
};

void data_swap(A& O1 , B& O2){
    int temp;
    temp=O1.x;
    O1.x=O2.y;
    O2.y=temp;
}

int main(){
    int z;
    cout<<"Enter the obj1 value :";
    cin>>z;
    A obj1(z);
    cout<<"Enter the obj2 value :";
    cin>>z;
    B obj2(z);
    cout<<"\n--- Before Swap ---"<<endl;
    obj1.show();
    obj2.show();

    data_swap(obj1,obj2);

    cout<<"\n--- After Swap ---"<<endl;
    obj1.show();
    obj2.show();
    return 0;
}
