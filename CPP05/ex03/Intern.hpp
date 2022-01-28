/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:42:42 by oronda            #+#    #+#             */
/*   Updated: 2022/01/26 13:24:35 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <exception>

class Form;
class Intern
{
	public:
		Intern();
		Intern(Intern const &src);
		virtual ~Intern();
		Intern& operator=(Intern const &src);
		
		Form *makeForm(std::string const &formName, std::string const &target);

		static Form* createPresidentialPardonForm(std::string const & target);
		static Form* createRobotomyRequestForm(std::string const & target);
		static Form* createShrubberyCreationForm(std::string const & target);


	class FormDontExistException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("\033[1;31mException\033[0m : Class does not exist");
			}
	};
};

std::ostream &operator<<(std::ostream &os, Intern const &src);
#endif