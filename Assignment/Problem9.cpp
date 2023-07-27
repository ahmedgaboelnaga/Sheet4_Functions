#include <iostream>

bool allTheSame(int x, int y, int z){
    return x == y && y == z;
}

bool allDifferent(int x, int y, int z){
    return x != y && y != z && x != z;
}

bool sorted(int x, int y, int z){
    return x <= y && y <= z;
}

int main(){
    int n1, n2, n3;
    std::cout << "Enter the fist number: ";
    std::cin >> n1;
    std::cout << "Enter the second number: ";
    std::cin >> n2;
    std::cout << "Enter the third number: ";
    std::cin >> n3;

    if (allTheSame(n1, n2, n3)){
        std::cout << "They are all the same, ";
    } else if (allDifferent(n1, n2, n3)){
        std::cout << "They are all different, ";
    } else {
        std::cout << "Some are different, ";
    }

    if (sorted(n1, n2, n3)){
        std::cout << "and are sorted.\n";
    } else {
        std::cout << "and not sorted.\n";
    }

    return 0;
}