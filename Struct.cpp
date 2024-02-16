#include <iostream>
#include "Point3D.hpp"
using namespace std;

int main(void){
    Point3D p;
    Point3D* q;
    p.x = 5;
    p.y = -2;
    p.z = 999;
    cout << p.x << endl;
    cout << p.y << endl;
    cout << p.z << endl;
    q = &p;
    q->x = 1000; //same as (*q).x
    cout << q << endl;

    Point3D point{1, 2, 3};
    cout << point.x << " " << point.y;
    cout << " " << point.z << endl;
    Point3D orig;
    cout << orig.x << " " << orig.y;
    cout << " " << orig.z << endl;
}