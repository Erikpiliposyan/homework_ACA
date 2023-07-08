#include <iostream>

class A{
public:
    A() {}

    void printLValue(const A& obj) const {
        std::cout << "Printing lvalue: " << obj.data << std::endl;
    }

    void printLValueReference(A& obj) const {
        std::cout << "Printing lvalue reference: " << obj.data << std::endl;
    }


    void printConstLValueReference(const A& obj) const {
        std::cout << "Printing const lvalue reference: " << obj.data << std::endl;
    }

    void printRValueReference(A&& obj) const {
        std::cout << "Printing rvalue reference: " << obj.data << std::endl;
    }

    void printConstRValueReference(const A&& obj) const {
        std::cout << "Printing const rvalue reference: " << obj.data << std::endl;
    }

    int data = 0; 

    ~A{}
};
int main() {
    A obj;
    
    obj.printLValue(obj); 
    obj.printLValueReference(obj);  
    obj.printConstLValueReference(obj); 
    obj.printRValueReference(std::move(obj)); 
    obj.printConstRValueReference(std::move(obj)); 

    return 0;
}

