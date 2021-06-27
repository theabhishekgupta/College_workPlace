/*Write a program to find the size of a file*/


#include <bits/stdc++.h>
using namespace std;
long int findSize(char file_name[])
{
    FILE* fp = fopen(file_name, "r");

      if (fp == NULL) {
        printf("File Not Found!\n");
        return -1;
    }

    fseek(fp,0L,SEEK_END);

     long int res = ftell(fp);

     fclose(fp);
     return res;
}

int main()
{
   char text[100];
   fstream file;
   file.open("abhi.txt",ios::out);
   if(!file)
   {
       cout<<"Error in creating file!!!";
       return 0;
   }
   cout<<"File created successfully."<<endl;
   cout << "\n\n\t\t---Write text to be written on file---\n\n" << endl;
   cin.getline(text, sizeof(text));
   file << text << endl;
   file.close();
   char file_name[] = {"abhi.txt" };
   long int res = findSize(file_name);
    if (res != -1)
        printf("\n\n\n\n\n\t\t----Size of the file is %ld bytes---\n", res);
   return 0;
}
