// Write a program to copy the contents of one text file to another.

#include <fstream>
#include <string>
#include <iostream>

int main()
{
    std::ofstream file;
    std::ifstream copyable;
    
    std::string text_to_copy;

    copyable.open("./files/first.txt");
    file.open("./files/second.txt", std::ios::app);

    if (copyable.is_open() && file.is_open())
    {
        while (std::getline(copyable, text_to_copy))
        {
            file << text_to_copy << std::endl;
        }
    }
    else
    {
        std::cout << "Error!";
    }

    copyable.close();
    file.close();

    return 0;
}