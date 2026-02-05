#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
const Animal* array[100];

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

Cat deep_cat1;
Cat deep_cat2(deep_cat1);

std::cout << "deep_cat1               : " << deep_cat1.getBrain()->ideas[0] << std::endl;
std::cout << "deep_cat1 brain address : " << deep_cat1.getBrain() << std::endl;
std::cout << "deep_cat2               : " << deep_cat2.getBrain()->ideas[0] << std::endl;
std::cout << "deep_cat2 brain address : " << deep_cat2.getBrain() << std::endl;
deep_cat2.getBrain()->ideas[0] = "I'm not hungry anymore";
std::cout << "deep_cat1 : " << deep_cat1.getBrain()->ideas[0] << std::endl;
std::cout << "deep_cat2 : " << deep_cat2.getBrain()->ideas[0] << std::endl;

WrongCat shallow_cat1;
WrongCat shallow_cat2(shallow_cat1);

std::cout << "shallow_cat1               : " << shallow_cat1.getBrain()->ideas[0] << std::endl;
std::cout << "shallow_cat1 brain address : " << shallow_cat1.getBrain() << std::endl;
std::cout << "shallow_cat2               : " << shallow_cat2.getBrain()->ideas[0] << std::endl;
std::cout << "shallow_cat2 brain address : " << shallow_cat2.getBrain() << std::endl;
shallow_cat2.getBrain()->ideas[0] = "I'm not hungry anymore";
std::cout << "shallow_cat1 : " << shallow_cat1.getBrain()->ideas[0] << std::endl;
std::cout << "shallow_cat2 : " << shallow_cat2.getBrain()->ideas[0] << std::endl;
for (size_t i = 0; i < 100; i++)
    delete array[i];
return 0;
}
