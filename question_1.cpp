/* Q-Write a program that defines an inline function containing two arguments first is for
salary of an employee and second is the percent value by which salary is to be
increased. Main program passes these two values to the function and receives
increased salary for printing*/


#include <iostream>

using namespace std;

class emp{
float sal ,per;

public:
    int cal(float,float);
};
 inline int emp::cal(float _sal , float _per)
    {

        sal=_sal;
        per=_per;
        return (sal+(sal*per/100));
    }
int main()
{
    emp e1;
    float salary,percent;
    cout<<"Enter the EMP salary :";
    cin>>salary;
    cout<<"inc. salary in per :";
    cin>>percent;
    cout<<"\nincreased salary ="<<e1.cal(salary,percent);
    return 0;
}
