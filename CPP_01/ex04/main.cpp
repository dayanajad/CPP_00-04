/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 20:48:15 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/10 20:58:45 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string replaceAll(std::string line, const std::string &s1, const std::string &s2)
{
	std::string	result;
	size_t		pos = 0;
	size_t		found;

	if (s1.empty())
		return (line);
	while ((found = line.find(s1,pos)) != std::string::npos)
	{
		result += line.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	result += line.substr(pos);
	return (result);
}

int main(int ac, char **av)
{
	if (ac !=4)
	{
		std::cerr << "Usage: ./sed_is_for_losers <file> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string	filename(av[1]);
	std::string	s1(av[2]);
	std::string s2(av[3]);
	std::ifstream in(filename.c_str());
	if (!in.is_open())
	{
		std::cerr << "Error: cannot open file: " << filename << std::endl;
		return (1);
	}
	std::ofstream out((filename + ".replace").c_str());
	if (!out.is_open())
	{
		std::cerr << "Error: cannot create output file" << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(in, line))
	{
		out << replaceAll(line, s1, s2);
		if (!in.eof())
			out << std::endl;
	}
	in.close();
	out.close();
	return (0);
}
