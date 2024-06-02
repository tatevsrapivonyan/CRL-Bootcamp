// Write a program to count the number of lines in a text file.

#include <fstream>
#include <string>
#include <iostream>

int main()
{
    std::fstream file;
    file.open("./files/first.txt");

    if (file.is_open())
    {
        std::string str;
        int count {};

        while (std::getline(file, str))
        {
            ++count;
        }

        file.close();

        std::cout << "There were " << count << " lines." << std::endl;
    }
    else 
    {
        std::cout << "Error.";
    }

    return 0;
}