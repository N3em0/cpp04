#ifndef FLOOR_HPP
#define FLOOR_HPP

#include <iostream>

class AMateria;

class Floor
{
private:
  AMateria *_floor[100];

public:
  Floor();
  Floor(Floor const &src);
  ~Floor();

  Floor &operator=(Floor const &rhs);

  AMateria const *getFloorMateria(size_t i) const;
  bool dropMateria(AMateria *m);
  void equipFloorMateria(AMateria *m);
};

#endif
