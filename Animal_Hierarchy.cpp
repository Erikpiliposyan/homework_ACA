#include <iostream>

class Animal {
public:
    Animal() {
        std::cout << "Animal constructor called." << std::endl;
    }

    void sound() const {
        std::cout << "Animal makes a sound." << std::endl;
    }
};

class Land : virtual public Animal {
public:
    Land() {
        std::cout << "Land constructor called." << std::endl;
    }

    void walk() const {
        std::cout << "Land animal is walking." << std::endl;
    }
};

class Watery : virtual public Animal {
public:
    Watery() {
        std::cout << "Watery constructor called." << std::endl;
    }

    void swim() const {
        std::cout << "Watery animal is swimming." << std::endl;
    }
};

class Binary : public Land, public Watery {
public:
    Binary() {
        std::cout << "Binary constructor called." << std::endl;
    }
};

int main() {
    Binary binary;

    binary.sound(); 
    binary.walk(); 
    binary.swim();  

    return 0;
}
