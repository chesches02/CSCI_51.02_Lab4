#include <iostream>
using namespace std;

int main(void){

//integer pointers
int i;
int *p;
p = &i;
i=5;

//float pointers
float x; // "regular" variable
float *o; // pointer to an int variable
o = &x; // & = "address of"
x = 0.78928373763;

//string pointers
string test="test";
string *t;
t=&test;


// * = "follow" pointer
                    // before anything else



cout << "int i = " << i << endl;
cout << "pointer p:" << p << endl;
cout << "address of i: " << &i << endl;
cout << "deference p: " << *p << endl;

cout << "float x = " << x << endl;
cout << "pointer o:" << o << endl;
cout << "address of x: " << &x << endl;
cout << "deference o: " << *o << endl;

cout << "string test = "<< test << endl;
cout << "pointer t:" << t << endl;
cout <<"address of test: "<< &test << endl;
cout << "deference t:" << *t << endl;

}
