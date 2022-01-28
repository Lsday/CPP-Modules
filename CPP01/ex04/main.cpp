/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 13:57:56 by oronda            #+#    #+#             */
/*   Updated: 2021/12/13 21:24:03 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>


void replace(std::ifstream & ifs, std::string fileName, std::string s1, std::string s2)
{	
	for (size_t i = 0; i < fileName.length(); i++)
		fileName[i] = std::toupper(fileName[i]);
	std::ofstream ofs(fileName + ".replace");
	std::string line;
	
	while(std::getline(ifs,line))
	{
		
		size_t pos = 0; 
		while(pos != std::string::npos)
		{
			pos = line.find(s1);
			if(pos != std::string::npos)
			{
				line.erase(pos,s1.length());
				line.insert(pos,s2);
			}
		}
		if (!ifs.eof())
			line.push_back('\n');
		ofs << line;
	}

	ifs.close();
	ofs.close();
}

int main(int argc, char *argv[])
{
	if(argc != 4)
		return 0;
	
	if (argv[2] == "" || argv[3] == "")
	{
		std::cout << "s1 or s2 cannot be empty";
		return 1;
	}
	
	
	std::string fileName,s1,s2;
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	
	std::ifstream ifs;
	
	ifs.open(fileName);
	if ( ifs.peek() == std::ifstream::traits_type::eof() )
	{
		std::cout << "File empty" << std::endl;
		return 0;
	}
	if(!ifs.good() || !ifs.is_open())
	{
		std::cout << "File error" << std::endl;
		return 0;
	}
	replace(ifs, fileName, s1,s2);
	return 0;
}
