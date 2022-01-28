/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:20:30 by oronda            #+#    #+#             */
/*   Updated: 2022/01/25 19:14:21 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


	Bureaucrat::Bureaucrat() : _name("default Name"), _grade(Bureaucrat::lowestGrade)
	{
		std::cout << "Bureaucrat named : " << _name <<", Default constructor" << std::endl;;
	}

	Bureaucrat::Bureaucrat(const std::string & name,  int grade) : _name(name), _grade(grade)
	{
		std::cout << "Bureaucrat named : " << _name <<", Parameter constructor" << std::endl;
		checkGrade();
	}

	Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name), _grade(src._grade)
	{
		std::cout << "Bureaucrat named : " << _name <<", Copy constructor" << std::endl;
		
	}
	Bureaucrat::~Bureaucrat()
	{
		std::cout <<  "Bureaucrat named : " << _name <<", Destructor" << std::endl;
	}

	Bureaucrat& Bureaucrat::operator=(Bureaucrat const & src)
	{
		this->_grade = src.getGrade();
		return *this;
	}

	void Bureaucrat::checkGrade()
	{
		if(this->_grade > Bureaucrat::lowestGrade)
			throw Bureaucrat::GradeTooLowException();
		if(this->_grade < Bureaucrat::highestGrade)
			throw Bureaucrat::GradeTooHighException();
	}
	
	int Bureaucrat::getGrade() const
	{
		return _grade;
	}
	
	const std::string& Bureaucrat::getName() const
	{
		return _name;
	}

	void Bureaucrat::promote()
	{
		this->_grade--;
		std::cout << "Promote " << _name << std::endl;
		checkGrade();
	}

	void Bureaucrat::demote()
	{
		this->_grade++;
		std::cout << "Demoting " << _name << std::endl;
		checkGrade();
	}

	void Bureaucrat::signForm(Form &form)
	{
		form.beSigned(*this);
	}

	void Bureaucrat::executeForm(Form const & form)
	{
		form.execute(*this);
	}

	std::ostream& operator<<(std::ostream & os, Bureaucrat const & src)
	{
		os << src.getName() << ", bureaucrat grade " << src.getGrade();
		return os;
	}