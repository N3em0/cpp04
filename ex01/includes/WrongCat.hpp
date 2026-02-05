
#include "WrongAnimal.hpp" 
#include "Brain.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP


class WrongCat : public WrongAnimal {
private:
  Brain* _brain;
public:
  WrongCat();
  WrongCat(WrongCat const &src);
  ~WrongCat();

  WrongCat &operator=(WrongCat const &rhs);

  std::string getType(void) const;
  Brain  *getBrain(void) const;

  void makeSound() const;
};

#endif
