// Write a program to reverse the lines of a text file.

#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>

void reverse_lines(const std::string& file_name)
{
    std::fstream file;
    std::ofstream new_file;
    file.open(file_name);
    new_file.open("./files/new_file.txt", std::ios::out);

    if (file.is_open() && new_file.is_open())
    {
        std::string data;
        while (std::getline(file, data))
        {
            std::reverse(data.begin(), data.end());
            new_file << data << std::endl;
        }

        file.close();
        new_file.close();
        
        if (std::remove(file_name.c_str()) != 0)
        {
            std::cerr << "Error deleting original file." << std::endl;
        }
        else if (std::rename("./files/new_file.txt", file_name.c_str()) != 0)
        {
            std::cerr << "Error renaming temporary file." << std::endl;
        }
    }
    else
    {
        std::cerr << "Error!";
    }
}