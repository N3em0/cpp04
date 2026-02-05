#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain {
  public:
  Brain();
  Brain(Brain const &src);
  ~Brain();

  Brain &operator=(Brain const &rhs);

  std::string ideas[100];
  int sharedptr;
   
};

#endif
