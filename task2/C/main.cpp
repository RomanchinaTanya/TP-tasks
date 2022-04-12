#include "main.h"

int main() {
    int number_1 = 22;
    int number_2 = 20;
    int number_3 = 100;
    int number_4 = 99;

    //generated in FOLDER_A
    std::cout << GetHelloWorldMessage();
    // defined in FOLDER_B
    std::cout << "Sum(" << number_1 << "," << number_2 << ") = " << Sum(number_1, number_2) << "\n";
    // defined in FOLDER_C
    std::cout << "Multiply(" << number_1 << "," << number_2 << ") = " << Multiply(number_1, number_2) << "\n";

    return 0;
}