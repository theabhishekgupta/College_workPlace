/*Write a program for performing division. If divisor is zero then take the appropriate
action at run time using the concept of try/catch block.*/

#include <iostream>
 using namespace std;

float Check_Denominator(float den)
{
    if (den == 0)
        throw "Error";
    else
        return den;
}

int main()
{
    float a, b, result;
    cout<<"\n\t\tEnter the numerator value:";
    cin>>a;
    cout<<"\n\t\tEnter the denominator value:";
    cin>>b;

    try {
        if (Check_Denominator(b)) {

            result = (a / b);
            cout << "\n\t\tThe Result is = "
                 << result << endl;
        }
    }
    catch (...) {
        cout <<"\n\t\t*Exception occurred*" << endl;
    }
 return 0;
}
