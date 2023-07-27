#include <iostream>
#include<cmath>
using namespace std;

const float PI = 3.14159;

double sphere_volume(double r)
{
	return (4 / 3) * PI * r * r * r;
}
double sphere_surface(double r)
{
	return 4 * PI * r * r;
}
double cylinder_volume(double r ,double h)
{
	return PI * r * r * h;
}
double cylinder_surface(double r, double h)
{
	return  2 * PI * r * h + 2 * PI * r * r;
}
double cone_volume(double r, double h)
{
	return  (PI / 3) * r * r * h;
}
double cone_surface(double r, double h)
{
	return PI * r * (r + sqrt(h * h + r * r));
}

int main() 
{
	double r, h;
	cout << "Enter the radius of the sphere: ";
    std::cin >> r;
    std::cout << "Enter the height of the sphere: ";
    std::cin >> h;

	cout << "sphere volume = " << sphere_volume(r) << endl;
	cout << "sphere surface = " << sphere_surface(r) << endl;
	cout << "cylinder volume = " << cylinder_volume(r, h) << endl;
	cout << "cylinder surface = " << cylinder_surface(r, h) << endl;
	cout << "cone volume = " << cone_volume(r, h) << endl;
	cout << "cone surface = " << cone_surface(r, h) << endl;
}
