
#include "Animal.hpp" 

#ifndef CAT_HPP
#define CAT_HPP


class Cat : public Animal {
public:
  Cat();
  Cat(Cat const &src);
  ~Cat();

  Cat &operator=(Cat const &rhs);
};

#endif
