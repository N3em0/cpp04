#ifndef FLOOR_HPP
#define FLOOR_HPP

#include <iostream>

class AMateria;

class Floor
{
private:
  AMateria *_floor[100];
  Floor();
  Floor(Floor const &src);
  Floor &operator=(Floor const &rhs);
  static Floor *_instance;

public:
  ~Floor();

  static Floor *getInstance();
  AMateria const *getFloorMateria(size_t i) const;
  bool dropMateria(AMateria *m);
  void equipFloorMateria(AMateria *m);
};

#endif
