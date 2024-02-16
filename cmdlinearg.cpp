#include <iostream>
#include <algorithm> 
#include<iostream>
#include<string.h>
using namespace std;

//number 1
//  ./cmdlinearg CSCI 51.02 CS 162B
int main(int argc, char* argv[])
{
    string sz;
    for(int i = 0; i < argc; i++)
    {
        cout << "arg" << i << ": " << argv[i];
        cout << endl; // cout << "\n";
    }
     for(int i = 0; i < argc; i++)
    {
       sz=argv[i];
       reverse(sz.begin(), sz.end()); 
       cout<<"arg"<< i << ":" << sz; 
       cout << endl;
    }
         for(int i = 0; i < argc; i++)
    {
        printf("%c\n", argv[i][0]);
        printf("%s\n", argv[i]+1);

    }





    return 0; // non-zero means an error
}