#include <iostream>

int sum_from_to(int n1, int n2){
    int sum = 0;
    if (n1 < n2){
        for (int i = n1; i <= n2; i++){
            sum += i;
        }
    } else if (n2 < n1){
        for (int i = n2; i <= n1; i++){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "The sum between the two numbers is: " << sum_from_to(num1, num2) << "\n";

    return 0;
}