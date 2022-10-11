/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:13:27 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/11 11:39:37 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

bool ft_replace( std::string filename, std::string str1, std::string str2 )
{
    std::ifstream   file;
    std::ofstream   out_file;
    std::string     search;
    size_t          pos;

    (void) str1;
    (void) str2;
    file.open(filename.c_str());
    if (!file.is_open())
        return (0);
    out_file.open((filename + ".replace").c_str());
    if (!out_file.is_open())
    {
        file.close();
        return (false);
    }
    while (getline(file, search))
    {
        while ((pos = search.find(str1)) != std::string::npos)
        {
            search.erase(pos, str1.length());
            search.insert(pos, str2);
        }
        if (!file.eof())
            out_file << search << std::endl;
        else
            out_file << search;
    }
    file.close();
    out_file.close();
    return (true);
}

int main( int argc, char **argv )
{
    if (argc != 4 || !ft_replace(argv[1], argv[2], argv[3]))
    {
        std::cout << "Error\n";
        return (0);
    }
    return (1);
}
