/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:00:09 by oronda            #+#    #+#             */
/*   Updated: 2022/01/25 19:00:09 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCCREATIONFORM_HPP
# define SHRUBBERYCCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
#include <stdlib.h>

class ShrubberyCreationForm : public Form
{
	std::string	_target;
	static const int _signGrade = 145;
	static const int _execGrade = 137;
	static std::string const trees[3];

	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		virtual ~ShrubberyCreationForm();

		static std::string const &_name;

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

		void execute(Bureaucrat const &executor) const;

		class FileOpenException : std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Exception : Can't open File");
				}
		};

		class WriteException : std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Exception : Can't write to File");
				}
		};

		
};


#endif