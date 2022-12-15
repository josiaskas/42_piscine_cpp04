#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{

	//official test
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);


	// more test
	//	Character josias;
	//	josias.equip(new Ice());
	//	josias.equip(new Cure);
	//	josias.use(0, *bob);
	//	josias.unequip(0);
	//	josias.use(0, *bob); // empty now

	delete bob;
	delete me;
	delete src;
	return 0;
}
