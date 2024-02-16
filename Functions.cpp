#include <iostream>
using namespace std;

    int addTwoV1(int x) {
        x += 2;
        cout << "addTwoV1: " << x<< endl;
        return x;
    }

 

    int addTwoV2(int* x) {
        *x += 2;
        cout << "addTwoV2: " << x<< endl;
        return *x;
    }

int main()
{
    int x=2;
    int* n= &x;;
  addTwoV1(2); // call the function
  addTwoV2(n);    
  return 0;
}


