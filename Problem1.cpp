#include <iostream>

void play(int* n1, int* n2){
    *n1 += 2;
    *n2 *= 2;
}

int main(){
    int n1, n2;
    std::cout << "Enter the fist number: ";
    std::cin >> n1;
    std::cout << "Enter the second number: ";
    std::cin >> n2;

    play(&n1, &n2);
    std::cout << "The first number after: " << n1;
    std::cout << "\nThe second number after: " << n2;

    return 0;
}