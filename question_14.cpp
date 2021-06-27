/*Write a program to merge two files into third file using command line arguments.*/


#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <process.h>
using namespace std;
int main(int argc, char* argv[] )
{

    char ch;
    ifstream infile;
    infile.open( argv[1] );
    if( !infile )
    {
        cerr << "\nCan't open " << argv[1];
        exit(-1);
    }
    ofstream outfile;
    outfile.open( argv[3] );
    if( !outfile )
    {
        cerr << "\nCan't open " << argv[3];
        exit(-1);
    }
    while( infile )
    {
        infile.get(ch);
        outfile.put(ch);
    }
    infile.close();

    infile.open( argv[2] );
    if( !infile )
    {
        cerr << "\nCan't open " << argv[2];
        exit(-1);
    }

    while( infile )
    {
        infile.get(ch);
        outfile.put(ch);
    }
    infile.close();
    outfile.close();
    return 0;
}
