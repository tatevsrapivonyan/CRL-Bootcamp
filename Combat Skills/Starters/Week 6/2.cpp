// Write a program to read the contents of a text file and display them on the screen.

#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream file;
    file.open("./files/first.txt");
    std::string data;

    if (file.is_open())
    {
        while (file >> data)
        {
            std::cout << data << " ";
        }
        file.close();
    }
    else
    {
        std::cout << "Error!";
    }

    return 0;
}