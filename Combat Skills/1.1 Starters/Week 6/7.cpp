// Write a program to find and display the longest line in a text file.

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream file;

    file.open("./files/first.txt");

    if (file.is_open())
    {
        std::string str;
        std::string longest {};
        while (file >> str)
        {
            if (str.size() > longest.size())
            {
                longest = str;
            }
        }

        file.close();
        std::cout << "The longest word in the file was: " << longest << std::endl;
    }
    else
    {
        std::cout << "Error!" << std::endl;
    }

    return 0;
}