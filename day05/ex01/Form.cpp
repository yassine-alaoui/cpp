# include "Form.hpp"

Form::Form(std::string name, bool sign, unsigned int mintosign, unsigned int mintoexecute) : _name(name), _minGradetosign(mintosign), _minGradetoexecute(mintoexecute)
{
	_signed = sign;
	try
	{
		if (mintoexecute < 1 || mintosign < 1)
			throw GradeTooHighException();
		if (mintoexecute > 150 || mintosign > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Form::Form(Form const & val) : _name(val._name), _minGradetosign(val._minGradetosign), _minGradetoexecute(val._minGradetoexecute)
{
	*this = val;
}

Form & Form::operator=(Form const & val)
{
	this->_name = val._name;
	this->_signed = val._signed;
	return *this;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Grade too High!";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Grade too Low!";
}

const char*	Form::AlreadySigned::what() const throw()
{
	return "Form already signed";
}

std::string 	 Form::getName() const
{
	return _name;
}

bool			 Form::getStat() const
{
	return _signed;
}

unsigned int Form::getGradeToSign() const
{
	return _minGradetosign;
}

unsigned int Form::getGradeToExecute() const
{
	return _minGradetoexecute;
}

void	Form::beSigned(Bureaucrat const& val)
{
	try
	{
		if (this->_signed)
			throw AlreadySigned();
		if (val.getgrade() <= this->_minGradetosign)
		{
			this->_signed = 1;
		}
		else
		{
			throw GradeTooLowException();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream	&operator << (std::ostream &output, Form const& val)
{
	output << val.getName() << " is a form with sign status : " << val.getStat()
		<< " , the min grade to sign is : " << val.getGradeToSign() << " and the min grade to execcute is : "
			<< val.getGradeToExecute() << "\n";
	return output;
}
