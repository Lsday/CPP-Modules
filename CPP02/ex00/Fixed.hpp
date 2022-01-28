#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed (Fixed const & src);
		~Fixed();
		Fixed & operator=(Fixed const & src);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int _value;
		static const int _fbits = 8;
		

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif