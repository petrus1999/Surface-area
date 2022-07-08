// Surface area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double Rightprism(double base, double height) {
    return base * height;
}
double  circularCylinder(double radius, double height) {
    return 2 * 3.142 * radius * height;
}
double rightpyramid(double base, double height) {
    return (base * height) / 2;
}


int main(){
    double base, height, radius;
    

    cout << "Enter your base of perimeter" << endl;
    cin >> base;
    cout << "Enter your height" << endl;
    cin >> height;
    cout << "Enter your radius" << endl;
    cin >> radius;

    cout << "The surface area of right prism is :" << Rightprism(base, height) << endl;
    cout << "The surface area of circular cylinder is :" << circularCylinder(radius, height) << endl;
    cout << "The surface area of right pyramid is :" << rightpyramid(base, height) << endl;


    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
