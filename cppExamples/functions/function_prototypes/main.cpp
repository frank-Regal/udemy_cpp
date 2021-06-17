#include <iostream>

using namespace std;

// Function Prototypes
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double);
void area_circle();
void volume_cylinder();


const double pi {3.14159};

int main () {
    
    area_circle();
    volume_cylinder();
    
    cout << endl;
    return 0;
}

double calc_area_circle(double radius) {
    return pi*radius*radius;
}

double calc_volume_cylinder(double radius, double height) {
    //return pi*radius*radius*height;
    return calc_area_circle(radius)*height;
}

void area_circle() {
    double radius {0};
    cout << "\nEnter the radius of a circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is: " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {0};
    double height {0};
    cout << "\nEnter the radius of a cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of a cylinder: ";
    cin >> height;
    
    cout << "The volume of a cylinder with radius " << radius <<  " and height " << height << " is: " << calc_volume_cylinder(radius, height) << endl;
}
