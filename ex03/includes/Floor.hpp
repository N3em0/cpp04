#ifndef FLOOR_HPP
#define FLOOR_HPP

#include <iostream>

class AMateria;

class Floor
{
private:
  AMateria *_floor[10];
  Floor();
  Floor(Floor const &src);
  Floor &operator=(Floor const &rhs);
  static Floor *_instance;
  size_t _oldest;

public:
  ~Floor();

  static Floor *getInstance();
  void destroyInstance();
  AMateria *getFloorMateria(size_t i) const;
  bool dropMateria(AMateria *m);
  void equipFloorMateria(AMateria *m);
};

#endif
