// Write a program to sort the lines of a text file alphabetically.

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

void sort_lines(const std::string& file_name)
{
    std::ifstream file;
    std::ofstream new_file;

    file.open(file_name);
    new_file.open("./files/new_file.txt", std::ios::out);

    if (file.is_open() && new_file.is_open())
    {
        std::vector<std::string> lines;
        std::string str;
        while (std::getline(file, str))
        {
            lines.push_back(str);
        }
        std::sort(lines.begin(), lines.end());

        for (auto vec : lines)
        {
            new_file << vec << std::endl;
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