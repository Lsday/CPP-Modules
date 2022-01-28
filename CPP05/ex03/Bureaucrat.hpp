#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{

	private:
		const std::string _name;
		int _grade;
 
		static const int highestGrade = 1;
		static const int lowestGrade = 150;

		void checkGrade();
		Bureaucrat();
		

	public:
		
		Bureaucrat(const std::string &name,  int grade);
		Bureaucrat(Bureaucrat const & src);
		virtual ~Bureaucrat();

		Bureaucrat& operator=(Bureaucrat const & src);
		int getGrade() const;
		const std::string& getName() const;

		void promote();
		void demote();
		void signForm(Form &form);
		void executeForm(Form const & form);


		class GradeTooHighException : std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("\033[1;31mException\033[0m : grade too high");
				}
		};

		class GradeTooLowException : std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("\033[1;31mException\033[0m : grade too low");
				}
		};

};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & src);


#endif