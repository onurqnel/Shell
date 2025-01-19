#include <iostream>

int main()
{
    // Flush after every std::cout / std:cerr
    std::cout << std::unitbuf;
    std::cerr << std::unitbuf;

    std::string input;
    while (true)
    {
        std::cout << "$ ";
        std::getline(std::cin, input);
        if (input == "exit")
        {
            return 0;
        }
        std::cout << input << ": command not found" << std::endl;
    }
}


