#include <iostream>
#include <string>

class Car{
    virtual void type() const = 0;
};

class Mycar: public Car{
    public:
        Mycar(const std::string& brand , const std::string& model)
            :brand(brand)
            ,model(model)
        {}
        void type()const  override{
            std::cout << "Type the " << brand << " , " << model << " car." << std::endl;
        }

    private:
        std::string brand;
        std::string model;
};

int main(){
    Mycar mycar("BMW" , "M8");
    mycar.type();
    return 0;
}