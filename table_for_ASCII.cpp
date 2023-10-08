#include <iostream>


int main()
{
    std::cout << "+" << "------" << "+" << "------" << "+" << std::endl;
    std::cout << "|" << " char " << "|" << "ASCII" << " |" << std::endl;
    std::cout << "+" << "------" << "+" << "------" << "+" << std::endl;

    // printing ASCII
    for(int i = 0; i <= 127; i++)
    {
        if(isprint(i))
        {
            std::cout << "|  " << static_cast<char>(i) << "  " << " |  " << i << "  " << " |" << std::endl;
        }
        else
        {
            std::cout << "|  " << " " << "  " << " |  " << i << "  " << " |" << std::endl;
        }
    }

    return 0;
}