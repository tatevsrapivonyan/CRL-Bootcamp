// Write a program to create a text file and write some text to it.

#include <iostream>
#include <fstream>

int main()
{
    std::ofstream output_file;
    output_file.open("./files/first.txt");

    if (output_file.is_open())
    {
        output_file << "Hello world!";
        output_file.close();
    }
    else
    {
        std::cout << "Error!" << std::endl;
    }

    return 0;
}