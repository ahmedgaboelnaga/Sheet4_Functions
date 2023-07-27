#include <iostream>

void swap_float(float *x, float *y){
    float z = *x;
    *x = *y;
    *y = z;
}

int main(){
    float x, y;
    std::cout << "Enter the first float number: ";
    std::cin >> x;
    std::cout << "Enetr the second float number: ";
    std::cin >> y;
    swap_float(&x, &y);
    std::cout << "\nThe first number after chnage is: " << x;
    std::cout << "\nThe second number after change is: " << y;
}