/*Let class item is having code, qty and rate as data members which are read by the
appropriate functions. Another class product is having code and price as its data
members and its values are obtained by the object of class item like obj1 = obj2;
where obj2 is the object of class item and obj1 is the object of class product.*/

#include<iostream>
using namespace std;
class product;

class Items{
    int code;
    int qty;
    int rate;
public:
    Items(int c, int q ,int r):code(c),qty(q),rate(r){
    }
     void show()
      {
          cout<<"\n\t\tCode "<<code<<"\t\tQuantity "<<qty<<"\t\t Rate is "<<rate;
      }
      friend product;
};
class product{
    int code;
    int price;
public:
    product(int c=0,int p=0):code(c),price(p){
    }
    void operator=(const Items &temp ){
         code = temp.code;
         price = temp.qty*temp.rate;
      }
      void show()
      {
          cout<<"\n\t\tCode "<<code<<"\t\t Price "<<price<<"\n\n";
      }
};

int main()
{
     int _code,_qty,_rate;
     cout<<"\t\tEnter the code: ";
     cin>>_code;
     cout<<"\n\t\tEnter the quantity of item: ";
     cin>>_qty;
     cout<<"\n\t\tEnter the rate: ";
     cin>>_rate;
     Items obj_Item(_code,_qty,_rate);
     obj_Item.show();
     product obj_product;
     obj_product=obj_Item;
     obj_product.show();
     return 0;
}
