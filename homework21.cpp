#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& name)
        : name(name) {
    }

    Animal(const Animal& other)
        : name(other.name) {
    }

    Animal& operator=(const Animal& other) {
        if (this != &other) {
            name = other.name;
        }
        return *this;
    }

    virtual void sound() const = 0;

    virtual ~Animal() {
    }
};

class Dog : public Animal {
public:
    Dog(const std::string& name)
        : Animal(name) {
    }

    Dog(const Dog& other)
        : Animal(other.name) {
    }


    virtual void sound() const  {
        std::cout << name << " says Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat(const std::string& name)
        : Animal(name) {
    }

    Cat(const Cat& other)
        : Animal(other.name) {
    }


    virtual void sound() const {
        std::cout << name << " says Meow!" << std::endl;
    }
};
class Ishxan : public Animal {
public:
    Ishxan(const std::string& name)
        : Animal(name) {
    }

    Ishxan(const    Ishxan& other)
        : Animal(other.name) {
    }


    virtual void sound() const {
        std::cout << name << " says BLT!" << std::endl;
    }
};
int main() {
    Dog dog1("Sharik");
   
    dog1.sound();

    Cat cat1("Kot");
 
    cat1.sound();
    
    Ishxan Ishxan1("Ishxan");
    Ishxan1.sound();
    return 0;
}
