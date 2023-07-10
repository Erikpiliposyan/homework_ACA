#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    int age;

public:
    Animal(const std::string& name, int age)
        : name(name), age(age) {
    }

    Animal(const Animal& other)
        : name(other.name), age(other.age) {
    }

    Animal& operator=(const Animal& other) {
        if (this != &other) {
            name = other.name;
            age = other.age;
        }
        return *this;
    }

    Animal(Animal&& other)
        : name(std::move(other.name)), age(other.age) {
        std::cout << "Call move constructor" << std::endl;
    }

    Animal&& operator=(Animal&& other){
        if(this != &other){
            age = 0; 
        }
        return std::move(*this);
    }
    
    ~Animal() {
    }
};

int main() {
    Animal c = Animal("string",5);
    Animal b = std::move(c);

    return 0;
}
