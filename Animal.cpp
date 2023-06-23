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


    void sound() const override {
        std::cout << name << " says Woof!" << std::endl;
    }

    Dog& operator=(const Dog& other) {
        Animal::operator=(other);
        return *this;
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


    void sound() const override {
        std::cout << name << " says Meow!" << std::endl;
    }

    Cat& operator=(const Cat& other) {
        Animal::operator=(other);
        return *this;
    }

    ~Cat() override {}
};

class Ishxan : public Animal {
public:
    Ishxan(const std::string& name)
        : Animal(name) {
    }

    Ishxan(const Ishxan& other)
        : Animal(other.name) {
    }


    void sound() const override {
        std::cout << name << " says BLT!" << std::endl;
    }

    Ishxan& operator=(const Ishxan& other) {
        Animal::operator=(other);
        return *this;
    }

    ~Ishxan() override {}
};

int main() {
    Dog dog1("Sharik");
    Dog dog2 = dog1;
    dog2.sound();

    Cat cat1("Kot");
    Cat cat2 = cat1;
    cat2.sound();

    Ishxan Ishxan1("Ishxan");
    Ishxan Ishxan2 = Ishxan1;
    Ishxan2.sound();
    return 0;
}
