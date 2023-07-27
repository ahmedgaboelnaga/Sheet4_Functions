#include <iostream>

void sum_factorial(int n1, int n2){
    int factorial = 1;
    for (int i = 1; i <= n1; i++){
        factorial *= i;
    }
    std::cout << "The factorial is: " << factorial;
    std::cout << "\nThe sum is: " << n1 + n2;
}

int main(){
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    sum_factorial(num1, num2);

    return 0;
}