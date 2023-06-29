#include <iostream>
#include <string>

class Animal {
public:
    Animal(const std::string& name, int age)
        : name(name), age(age)
    {}

    virtual void sound() const = 0;

    bool operator<(const Animal& other) const {
        return age < other.age;
    }

    bool operator>(const Animal& other) const {
        return age > other.age;
    }

protected:
    std::string name;
    int age;
};

class Mammal : public Animal {
public:
    Mammal(const std::string& name, int age, const std::string& type)
        : Animal(name, age)
        , type(type)
    {}

    void sound() const override {
        std::cout << name << " is a " << type << " mammal making a sound." << std::endl;
    }

private:
    std::string type;
};

class Panda : public Mammal {
public:
    Panda(const std::string& name, int age)
        : Mammal(name, age, "Panda")
    {}

    void sound() const override {
        std::cout << name << " the Panda bleats!" << std::endl;
    }
};

int main() {
    Panda panda1("Hua Mei", 5);
    Panda panda2("Mei Mei", 3);

    if (panda1 < panda2) {
        std::cout << panda1.getName() << " is younger than " << panda2.getName() << std::endl;
    } else {
        std::cout << panda1.getName() << " is older than or equal to " << panda2.getName() << std::endl;
    }

    if (panda1 > panda2) {
        std::cout << panda1.getName() << " is older than " << panda2.getName() << std::endl;
    } else {
        std::cout << panda1.getName() << " is younger than or equal to " << panda2.getName() << std::endl;
    }

    return 0;
}
