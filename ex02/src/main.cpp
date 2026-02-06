#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
  const AAnimal *array[100];
  // const AAnimal abstract(void);
  const WrongAAnimal abstract(void);

  for (size_t i = 0; i < 100; i++)
  {
    if (i % 2 == 0)
      array[i] = new Dog();
    else
      array[i] = new Cat();
  }
  for (size_t i = 0; i < 100; i++)
  {
    std::cout << "[" << i << "] ";
    array[i]->makeSound();
  }
  for (size_t i = 0; i < 100; i++)
    delete array[i];
  return 0;
}
