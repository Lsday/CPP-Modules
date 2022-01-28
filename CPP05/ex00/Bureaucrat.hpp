#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
#include <iostream>

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




	public :
		class GradeTooHighException : public  std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("exception : grade too high");
				}
		};

		class GradeTooLowException : public  std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("exception : grade too low");
				}
		};

};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & src);


#endif