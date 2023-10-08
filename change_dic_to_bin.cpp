#include <bitset>
#include <iostream>
#include <string>



int main()
{
    // Converting decimal to binary
    std:: cout << "Converting decimal to binary" << std::endl; 
    int decimalNum;
    std::cout << "Enter decimal number : ";
    std::cin >> decimalNum;
    std::bitset<8> binaryRepresentation(decimalNum);

    std::cout << "Binary number of " << decimalNum << " is " << binaryRepresentation << "\n\n";

    std::cout << "----------------------------------------------\n" << std::endl;

    std::cout << "Converting binary to decimal" << std::endl;

    int binary_num;
    std::cout << "Enter the binary number : ";
    std::cin >> binary_num;

    std::bitset<8> binary(std::to_string(binary_num));
    int dec_num = static_cast<int>(binary.to_ulong());
    std::cout << "Decimal number of " << binary_num << " is " << dec_num << "\n\n";
    return 0;
}