#include <iostream>

int g_c_d(int n1, int n2){
    if (n1 <= 0 || n2 <= 0){
        return 0;
    }

    while (n2!= 0){
        int temp = n1;
        n1 = n2;
        n2 = temp % n2;
    }
    return n1;
}

int main(){
    int num1, num2;
    std::cout << "Enter two positive integers: \n";
    std::cin >> num1 >> num2;

    std::cout << "The greatest common divisor between " << num1  << " and " << num2 << " is: " << g_c_d(num1, num2); 

    return 0;
}