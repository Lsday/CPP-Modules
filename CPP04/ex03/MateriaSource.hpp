
#include"IMateriaSource.hpp"

#define MAX_MATERIA_NB 4
class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materias[MAX_MATERIA_NB];

	public:
		MateriaSource();
		MateriaSource(MateriaSource  const & src);
		~MateriaSource();

		MateriaSource& operator=(MateriaSource  const & src);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	private:
};