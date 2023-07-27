#include <iostream>
#include <cmath>

double area(int edge1, int edge2, int edge3){
    int s = (edge1 + edge2 + edge3) / 2;
    return sqrt(s * (s - edge1) * (s - edge2) * (s - edge3));
}

int main(){
    int edge1, edge2, edge3;
    std::cout << "Enter the first edge: ";
    std::cin >> edge1;
    std::cout << "Enter the second edge: ";
    std::cin >> edge2;
    std::cout << "Enter the third edge: ";
    std::cin >> edge3;

    std::cout << "The area of the traiangle is: " << area(edge1, edge2, edge3) << " cm^2\n";

    return 0;
}