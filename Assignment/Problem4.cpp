#include <iostream>

void check(int n){
    if (n % 2 == 0){
        std::cout << "The number is even!";
    } else {
        std::cout << "The number is odd!";
    }
}

int main(){
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    check(n);

    return 0;
}