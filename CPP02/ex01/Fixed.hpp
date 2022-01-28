#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _bits = 8;
		
	public:
		Fixed();
		Fixed (Fixed const & src);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();
		Fixed & operator=(Fixed const & src);
		
		int toInt( void ) const;
		float toFloat( void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif