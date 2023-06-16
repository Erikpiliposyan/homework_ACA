#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;

public:
    Car(const std::string& brand, const std::string& model)
        : brand(brand), model(model) {}

    void display() const {
        std::cout << "Brand: " << brand << ", Model: " << model << std::endl;
    }
};

class Parking {
private:
    Car* parkedCar;

public:
    Parking()
        : parkedCar(nullptr) {}

    void parkCar(Car* car) {
        parkedCar = car;
    }

    void displayCar() const {
        if (parkedCar != nullptr) {
            std::cout << "Car in the parking :" << std::endl;
            parkedCar->display();
        }
        else {
            std::cout << "No car parked in the parking." << std::endl;
        }
    }
};

int main() {
    Car car1("BMW", "Camry");
    Car car2("Honda", "Toyota");

    Parking parking;
    parking.parkCar(&car1);
    parking.displayCar();

    parking.parkCar(&car2);
    parking.displayCar();

    return 0;
}
