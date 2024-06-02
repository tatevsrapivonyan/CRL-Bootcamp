// Write a program to remove empty lines from a text file.

#include <iostream>
#include <fstream>
#include <string>

void remove_empty_lines(const std::string& file_name)
{
    std::ifstream file;
    std::ofstream new_file;

    file.open(file_name);
    new_file.open("./files/nf.txt", std::ios::out);

    if (file.is_open() && new_file.is_open())
    {
        std::string data;
        while (std::getline(file, data))
        {
            if (!data.empty())
            {
                new_file << data << std::endl;
            }
        }

        file.close();
        new_file.close();

        if (std::remove(file_name.c_str()) != 0)
        {
            std::cerr << "Error while deleting the original file." << std::endl;
        }
        else if (std::rename("./files/nf.txt", file_name.c_str()) != 0)
        {
            std::cerr << "Error while renaming the temporary file." << std::endl;
        }
    }
}