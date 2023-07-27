#include <iostream>

int first_digit(int n) {
  while (n >= 10) {
    n /= 10;
  }
  return n;
}

int main(){
    int num;
    std::cout << "Enter the fisrt number: ";
    std::cin >> num;
    int firstDigit = first_digit(num);
    std::cout << "The first digit is: " << firstDigit;

    return 0;
}