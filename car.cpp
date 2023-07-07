#include <iostream>
#include <string>

class Car{
    virtual void type() const = 0;

    
};

class Mycar: public Car{
    public:
        Mycar(const std::strin  enum class Color {
        red,
        green,
        purple,
        orange,
        blue,
        white,
        yellow,
        black
    };

    static std::string colorToString(Color color) {
        switch (color) {
            case Color::red:
                return "Red";
            case Color::green:
                return "Green";
            case Color::purple:
                return "Purple";
            case Color::orange:
                return "Orange";
            case Color::blue:
                return "Blue";
            case Color::white:
                return "White";
            case Color::yellow:
                return "Yellow";
            case Color::black:
                return "Black";
            default:
                return "Unknown";
        }
    }
};
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
