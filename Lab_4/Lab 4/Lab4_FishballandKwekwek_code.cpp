#include <iostream>
using namespace std;

int dummy(int x){
    int ret = x * 19;
    return ret;
}

int multiply(int x, int y) {
    //Assign product to be 0 initially
    int product = 0;
    //Check if y is negative first, this is the provision for a negative case
    if (y < 0) {
        y = -y;
    }
    if (x < 0) {
        x = -x;
    }
    if (x < 0 && y < 0) {
        x = -x;
        y = -y;
    }
    while (y != 0) {
        //Checking if the number is odd using bitwise AND (1)
        if (y & 1) {
            product += x;
        }
        //shift y to the right to discard and equate it to itself, it gets divided by 2; same with x but to the left, multiples x by 2
        y >>= 1;
        x <<= 1;
    }
    return product;
}


int main() {
    int x, y;
    cout << "2 * 19 =";
    x = 2; 
    y = 19;
    int product = multiply(x, y);
    cout << product << endl;

    cout << "2 * 45 =";
    y = 45;
    product = multiply(x, y);
    cout << product << endl;

    cout << "2 * (-2) =";
    y = -2;
    product = multiply(x, y);
    cout << product << endl;

    cout << "2 * 0 =";
    y = 0;
    product = multiply(x, y);
    cout << product << endl;

    cout << "Please input a number and press Enter:";
    cin >> x; 
    cout << "Please input a number and press Enter:";
    cin >> y;
    cout << x<< "*"<<y<< "=";
    product = multiply(x, y);
    cout << product << endl;
    return 0;
}