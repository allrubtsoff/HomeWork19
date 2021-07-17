#include <iostream>
#include <cstdlib>

class Animal
{
public:
    virtual void Voice() const = 0;
    virtual ~Animal() 
    {
        std::cout << "ClearA\n";
    }
};

class Cat : public Animal
{
public:
    void Voice() const override
    {
        std::cout << "Meow\n";
    }
    ~Cat()
    {
        std::cout << "ClearC\n";
    }    
};


class Dog : public Animal
{
public:
    void Voice() const override
    {
        std::cout << "Woof\n";
    }
    ~Dog() 
    {
        std::cout << "ClearD\n";
    }
};

class Pig : public Animal
{
public:
    void Voice() const override
    {
        std::cout << "Oink\n";
    }
    ~Pig() 
    {
        std::cout << "ClearP\n";
    }
};

int main()
{
    Animal *animals[3] = { new Cat, new Dog, new Pig };
    
    for (Animal* a : animals)
        a->Voice();

    delete animals[0];
    delete animals[1];
    delete animals[2];
}
