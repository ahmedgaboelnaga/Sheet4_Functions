#include <iostream>

int Even_count = 0;
int Odd_count = 0;

void count(int num){
    if (num >= 1){
        if (num % 2 == 0){
            Even_count++;
        } else {
            Odd_count++;
        }
    }
}

int main(){
    int size;
    std::cout << "Enter the size of the sequence: ";
    std::cin >> size;
    int input;
    for (int i = 0; i < size; i++){
        std::cout << "Enetr the #" << i + 1 << " number: ";
        std::cin >> input;
        count(input);
    }
    
    std::cout << "The number of evens is: " << Even_count;
    std::cout << "\nThe number of odds is: " << Odd_count;

    return 0;
}