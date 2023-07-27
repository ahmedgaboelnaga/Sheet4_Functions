#include <iostream>

void digits(int n){
    std::cout << "The first digit is: " << n % 10;
    int digit_count = 0;
    while (n >= 10){
        n /= 10;
        digit_count++;
    }
    std::cout << "\nThe last digit is: " << n;
    std::cout << "\nThe number of digits is: " << digit_count + 1 << "\n";

}

int main(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    digits(n);

    return 0;
}