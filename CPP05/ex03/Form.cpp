#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default form"), _isSigned(false), _signGrade(Form::lowestGrade), _execGrade(Form::lowestGrade)
{
	std::cout << "Form named :" << _name <<", Default constructor" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) :_name(name), _isSigned(false), _signGrade(signGrade),_execGrade(execGrade)
{
	std::cout << "Form named : " << _name <<", Initialization constructor" << std::endl;
	checkSignGrade();
	checkExecGrade();
}

Form::Form(Form const &src) :_name(src._name), _isSigned(false), _signGrade(src._signGrade),_execGrade(src._execGrade)
{
	std::cout << "Form named : " << _name <<", Copy constructor" << std::endl;
	checkSignGrade();
	checkExecGrade();
}
Form::~Form()
{
	std::cout << "Form named : " << _name <<", Destructor" << std::endl;;
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

int Form::getExecGrade() const
{
	return this->_execGrade;
}

bool Form::getSignedStatus() const
{
	return this->_isSigned;
}

const std::string &Form::getName() const
{
	return this->_name;
}

void Form::beSigned(Bureaucrat const & brt)
{
	if (this->getSignedStatus())
		throw Form::AlreadySignedForm();
	
	if(brt.getGrade() <= this->getSignGrade())
	{
		_isSigned = true;
		std::cout << brt << " has signed " << *this << std::endl;
	}
	else
	{
		std::cout << brt << " coundn't sign " << *this << " because SignGrade is too low" << std::endl;
		throw Form::GradeTooLowException();
	}
}

void Form::execute(Bureaucrat const & executor) const
{
	if (!this->_isSigned)
		throw Form::ExecNotSignedForm();
	if (executor.getGrade() > this->_execGrade)
		throw Form::ExecGradeTooLowException();
	std::cout << executor << " has executed " << *this << " succesfully" << std::endl;
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
	os << "form named : "<< form.getName() << ", SignGrade = "<< form.getSignGrade() << ", ExecGrade = "<< form.getExecGrade() << " [signed = " << 
	(form.getSignedStatus() ? "true" : "false") << "]";
	return os;
}
