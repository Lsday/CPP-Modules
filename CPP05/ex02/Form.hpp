/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:21:16 by oronda            #+#    #+#             */
/*   Updated: 2022/01/26 09:50:27 by oronda           ###   ########.fr       */
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
		std::string const _name;
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
		virtual ~Form();
		Form& operator=(Form const &src);

		int getSignGrade() const;
		int getExecGrade() const;
		bool getSignedStatus() const;
		const std::string &getName() const;
		void beSigned( Bureaucrat const & brt);
		virtual void execute(Bureaucrat const & executor) const = 0;

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
	class ExecGradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Exception : Bureaucrat execution grade is too low to execute this form");
			}
	};
	class ExecNotSignedForm : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Exception : Bureaucrat try to execute a Form that is not signed");
			}
	};
	class AlreadySignedForm : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Exception : Form is already signed");
			}
	};
};

std::ostream & operator<<(std::ostream & os, Form const & form);

#endif