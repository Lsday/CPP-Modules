#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>



class Karen
{
	public:

	enum logLevel
	{
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};

		Karen();
		~Karen();
		void complain (std::string lvl);

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void (Karen::*funcPtr[4])(void);
		void setLevelEnum(std::string level);
		
		logLevel lvl;
		std::string levels[4];
};







#endif
