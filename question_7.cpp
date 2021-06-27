/*Declare a class Time having its members as hour, minute and second. Define
functions to read and display the data and add the contents of two objects into third
object like T3 = T1 + T2 where T1, T2 and T3 are objects of class Time.*/

#include<iostream>
using namespace std;

class _time{
    int hour,minute,second;
public:
    _time(int=0 ,int=0 ,int=0);
    void show__time();
    _time operator+(const _time&);
};
_time::_time(int h,int m,int s):hour(h),minute(m),second(s){
}
void _time::show__time(){
    cout<<"\t\t"<<hour<<" : "<<minute<<" : "<<second<<endl;
}
_time _time::operator+(const _time& _t1){
    _time temp;
    temp.second=second+_t1.second;
    temp.minute=minute+_t1.minute+(temp.second/60);
    temp.hour=hour+_t1.hour+(temp.minute/60);
    temp.second=temp.second%60;
    temp.minute=temp.minute%60;
    return temp;
}

int main(){
    int hh,mm,ss;
    cout<<"enter the Time-1 detail:";
    cin>>hh>>mm>>ss;
    _time T1(hh,mm,ss);
    cout<<"enter the Time-2 detail:";
    cin>>hh>>mm>>ss;
    _time T2(hh,mm,ss);
    _time T3;
    T3=T1+T2;
    cout<<"\n\t\t Time-1\n";
    T1.show__time();
    cout<<"\n\t\t Time-2\n";
    T2.show__time();
    cout<<"\n\n\t\t---Total Time---\n\n";
    T3.show__time();
return 0;
}
