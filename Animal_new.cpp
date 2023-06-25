#include <iostream>
#include <string>

class Animal {
public:
    Animal(const std::string& name)
        : name(name)
    {}

    virtual void sound() const = 0;

protected:
    std::string name;
};

class Mammal : public Animal {
public:
    Mammal(const std::string& name, const std::string& type)
        : Animal(name), type(type)
    {}

    void sound() const override
    {
        std::cout << name << " is a " << type << " mammal making a sound." << std::endl;
    }

private:
    std::string type;
};

class Panda : public Mammal {
public:
    Panda(const std::string& name)
        : Mammal(name, "Panda")
    {}

    void sound() const override
    {
         std::cout << name << " the Panda bleats!" << std::endl;
    }
};

int main() {
    Panda panda("Hua Mei");
    panda.sound();
    return 0;
}
