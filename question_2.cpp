/*Write a program in C + + that includes a class distance, with data members feet and
inch. It should include a constructor with parameters, member function to display the
distance and a friend function add ( ) that adds distances of two objects.*/


#include <iostream>
 using namespace std;

class Distance{
    int feet;
    int inch;
public:
    Distance(int _feet=0 ,int _inch=0):feet(_feet),inch(_inch){
    }

    void display();
   friend void add_Distance(const Distance& , const Distance& ,Distance& );
};

void Distance::display(){
    cout<<"feet ="<<feet<<endl;
    cout<<"inch ="<<inch<<endl;
}

void add_Distance(const Distance& p ,const Distance& q ,Distance& temp){
    temp.feet=p.feet+q.feet;
    temp.inch=p.inch+q.inch;

    if(temp.inch>=12){
        temp.feet=temp.feet+temp.inch/12;
        temp.inch=temp.inch%12;
    }
}

int main(){
    int _feet,_inch;
    cout<<"Enter 1st  the feet & inch: ";
    cin>>_feet>>_inch;
    Distance D1(_feet,_inch);
    cout<<"Enter 2nd the feet & inch: ";
    cin>>_feet>>_inch;
    Distance D2(_feet,_inch);
    cout<<"---Distance 1---"<<endl;
    D1.display();
    cout<<"---Distance 2---"<<endl;
    D2.display();
    Distance D3;
    add_Distance(D1,D2,D3);
    cout<<"\n---Total Distance---"<<endl;
    D3.display();

return 0;
}
