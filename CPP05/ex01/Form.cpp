#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default form"), _isSigned(false), _signGrade(Form::lowestGrade), _execGrade(Form::lowestGrade)
{
	std::cout << "Form name " << _name <<" Default constructor" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) :_name(name), _isSigned(false), _signGrade(signGrade),_execGrade(execGrade)
{
	std::cout << "Form name " << _name <<" Parameter constructor" << std::endl;
	checkSignGrade();
}

Form::Form(Form const &src) :_name(src._name), _isSigned(false), _signGrade(src._signGrade),_execGrade(src._execGrade)
{
	std::cout << "Form name " << _name <<" Copy constructor" << std::endl;
	checkSignGrade();
}
Form::~Form()
{
	std::cout << "Form name " << _name <<" Destructor" << std::endl;;
}
Form& Form::operator=(Form const &src)
{
	this->_isSigned = src._isSigned;
	return *this;
}

int Form::getSignGrade() const
{
	return this->_signGrade;
}

bool Form::getSignedStatus() const
{
	return this->_isSigned;
}
int Form::getExecGrade() const
{
	return this->_execGrade;
}


const std::string &Form::getName() const
{
	return this->_name;
}

void Form::beSigned(Bureaucrat const & brt)
{
	if(brt.getGrade() <= this->getSignGrade())
	{
		_isSigned = true;
		std::cout << brt << " signed " << *this << std::endl;
	}
	else
	{
		std::cout << brt << " coundn't sign " << *this << " because SignGrade is too low" << std::endl;
		throw Form::GradeTooLowException();
	}
}

void Form::checkSignGrade()
{
	if(this->_signGrade > Form::lowestGrade)
		throw Form::GradeTooLowException();
	if(this->_signGrade < Form::highestGrade)
		throw Form::GradeTooHighException();
}

void Form::checkExecGrade()
{
	if(this->_execGrade > Form::lowestGrade)
		throw Form::GradeTooLowException();
	if(this->_execGrade < Form::highestGrade)
		throw Form::GradeTooHighException();
}
std::ostream & operator<<(std::ostream & os, Form const & form)
{
	os << "form named : "<<form.getName() << ", SignGrade = "<< form.getSignGrade() << ", ExecGrade = "<< form.getExecGrade() << ", is signed = " << 
	(form.getSignedStatus() ? "true" : "false");
	return os;
}
