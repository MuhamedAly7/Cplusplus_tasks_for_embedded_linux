#include <cctype>
#include <iostream>

bool IsVowl(char chr)
{
    // convert to character to lower case to dicrease the number of cases
    chr = std::tolower(chr);

    // check if character is vowel or not
    return (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u');
}

int main()
{
    char input_char;
    std::cout << "Enter a character : ";
    std::cin >> input_char;

    if(IsVowl(input_char))
    {
        std::cout << input_char << " is a vowel." << std::endl;
    }
    else
    {
        std::cout << input_char << " is not a vowel." << std::endl;
    }

    return 0;
}