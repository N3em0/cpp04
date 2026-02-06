#include "AAnimal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public AAnimal
{
private:
  Brain *_brain;

public:
  Cat();
  Cat(Cat const &src);
  ~Cat();

  Cat &operator=(Cat const &rhs);

  std::string getType(void) const;
  Brain *getBrain(void) const;

  void makeSound() const;
};

#endif
