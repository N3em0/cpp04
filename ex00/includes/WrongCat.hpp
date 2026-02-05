
#include "WrongAnimal.hpp" 

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP


class WrongCat : public WrongAnimal {
public:
  WrongCat();
  WrongCat(WrongCat const &src);
  ~WrongCat();

  WrongCat &operator=(WrongCat const &rhs);

  std::string getType(void) const;

  void makeSound() const;
};

#endif
