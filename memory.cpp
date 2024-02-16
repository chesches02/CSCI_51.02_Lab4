#include <iostream>
#include "Point3D.hpp"
using namespace std;

int main(void){
    Point3D* p = new Point3D {7, 7, 7};
    cout << p->x << " " << p->y;
    cout << " " << p->z << endl;
    delete p;
        cout << p->x << " " << p->y;
    cout << " " << p->z << endl;
    delete p;
    cout << p->x << " " << p->y;
    cout << " " << p->z << endl;
    return 0;
}