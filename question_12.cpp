/*Using the generic programming approach, write a program to sort data of different
data types.*/


#include <iostream>
#include<string>
using namespace std;

template <class T>
void sortArray(T a[], int n)
{
    bool b = true;
    while (b) {
        b = false;
        for (size_t i=0; i<n-1; i++) {
            if (a[i] > a[i + 1]) {
                T temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                b = true;
            }
        }
    }
}

template <class T>
void printArray(T a[], int n)
{
    cout<<"\n\t\tSorted Order =";
    for (size_t i = 0; i < n; ++i)
        cout << a[i] << "   ";
    cout << endl;
}

int main()
{
    int n,choice;
    cout<<"\n\tEnter the number of element: ";
    cin>>n;
    do
    {
    cout<<"\n\t\t1.Int\n\t\t2.float\n\t\t3.string\n\t\t4.Exit";
    cout<<"\n\t\tSelect the data type:";
    cin>>choice;
    switch(choice)
    {
    case 1:
        {

        int* ptr_arr=new int[n];
        cout<<"\n\t\tEnter the int values:";
        for(int i=0;i<n;i++){
            cin>>ptr_arr[i];
        }
        sortArray(ptr_arr, n);
        printArray(ptr_arr, n);
        delete []ptr_arr;
        break;
        }
        case 2:
        {
        float* ptr_arr=new float[n];
        cout<<"\n\t\tEnter the float values=";
        for(int i=0;i<n;i++){
            cin>>ptr_arr[i];
        }
        sortArray(ptr_arr, n);
        printArray(ptr_arr, n);
        delete []ptr_arr;
        break;
            }
    case 3:
        {
        string* ptr_arr=new string[n];
        cout<<"\n\t\tEnter the string values=";
        for(int i=0;i<n;i++){
            cin>>ptr_arr[i];
        }
        sortArray(ptr_arr, n);
        printArray(ptr_arr, n);
        delete []ptr_arr;
        break;
        }
    case 4:
        exit(0);
}

}while(1);
return 0;
}
