#include <iostream>

int factorial(int n){
    if (n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}

int combination(int n, int r){
    if ( r != 0){
        int numerator = factorial(n);
        int denominator = factorial(r) * factorial(n-r);
        return numerator / denominator;
    }
}

int main(){
    int num, r;
    do
    {
        std::cout << "Enter the number: ";
        std::cin >> num;
        std::cout << "Enter the combination: ";
        std::cin >> r;
    } while (num <= r);
    
    int resutl = combination(num, r);
    std::cout << "The resutl is: " << resutl;

    return 0;
}