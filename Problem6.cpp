#include <iostream>

int smallest(int n1, int n2){
    if (n1 < n2){
        return n1;
    } else {
        return n2;
    }
}

int main(){
    int n1, n2;
    std::cout << "Enter teh fisrt number: ";
    std::cin >> n1;
    std::cout << "Enter the second number: ";
    std::cin >> n2;
    
    std::cout << "The smallest number is: " << smallest(n1, n2);

    return 0;
}