/*Write a program to illustrate the concept of hybrid inheritance.*/



#include<iostream>
using namespace std;
class Base
{
	public:
		int a;
};
class drv1 : virtual public Base
{
	public:
			int b;
};
class drv2: virtual public Base
{
	public:
		int c;
};
class drv3 : public drv1, public drv2
{
	public:
		int d;
};
int main()
{
	drv3 obj;
	obj.a =10;
	obj.b =20;
	obj.c =30;
	obj.d= obj.a + obj.b + obj.c;
	cout<<"\t\t Total Sum ="<<obj.d;
return 0;
}

