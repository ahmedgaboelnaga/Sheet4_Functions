#include <iostream>
#include <cmath>

double distance(double x1, double x2, double y1, double y2){
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt((dx * dx) + (dy * dy));
}
void midpoint(double x1, double x2, double y1, double y2){
    double xmid = (x1 + x2) / 2.0;
    double ymid = (y1 + y2) / 2.0;
    std::cout << "\nThe midpoint of the line segment is (" << xmid << ", " << ymid << ")";
}
void slope(double x1, double x2, double y1, double y2){
    if (x1 == x2){
        std::cout << "\nThe line is vertical.";
    } else  {
        std::cout << "\nThe slope is: " << (y2 - y1) / (x2 - x1);
    }
}



int main(){
    double x1, x2, y1, y2;

    // Reading the points
    std::cout << "Enter the first point (x1, y1)\n";
    std::cout << "x1: ";
    std::cin >> x1;
    std::cout << "y1: ";
    std::cin >> y1;
    std::cout << "Enter the second point (x2, y2)\n";
    std::cout << "x2: ";
    std::cin >> x2;
    std::cout << "y2: ";
    std::cin >> y2;

    // Printing the values
    double d = distance(x1, x2, y1, y2);
    std::cout << "\nThe distance between the two points: " << d;
    midpoint (x1, x2, y1, y2);
    slope (x1, x2, y1, y2);

    return 0;
}