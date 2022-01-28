/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:21:16 by oronda            #+#    #+#             */
/*   Updated: 2022/01/25 18:31:41 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FORM_HPP
# define FORM_HPP


# include <string>
# include <exception>
# include <iostream>
# include "Bureaucrat.hpp"
 

class Bureaucrat;

class Form
{
	private:
		Form();
		const std::string	_name;
		bool				_isSigned;
		const int 			_signGrade;
		const int 			_execGrade;

		static const int 	highestGrade = 1;
		static const int 	lowestGrade = 150;

		void checkSignGrade();
		void checkExecGrade();


	public:
	
		Form(std::string name, int signGrade, int execGrade);
		Form(Form const &src);
		~Form();
		Form& operator=(Form const &src);

		int getSignGrade() const;
		int getExecGrade() const;
		bool getSignedStatus() const;
		const std::string &getName() const;
		void beSigned( Bureaucrat const & brt);

public:
	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Exception : form grade too high");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Exception : form grade too low");
			}
	};
};

std::ostream & operator<<(std::ostream & os, Form const & form);

#endif