#include <iostream>
#include <cstring>
using namespace std;


class Person {
private:
    char* name;
    char* surname;
    int age;
    char* address;
    char* phoneNumber;
    bool married;
    bool employed;

public:
    Person(const char* personName, const char* personSurname, 
           int personAge, const char* personAddress, const char* personPhoneNumber, 
           bool isMarried, bool isEmployed)
        : age(personAge), 
          married(isMarried), 
          employed(isEmployed)
    {
        name = new char[strlen(personName) + 1];
        strcpy(name, personName);

        surname = new char[strlen(personSurname) + 1];
        strcpy(surname, personSurname);

        address = new char[strlen(personAddress) + 1];
        strcpy(address, personAddress);

        phoneNumber = new char[strlen(personPhoneNumber) + 1];
        strcpy(phoneNumber, personPhoneNumber);
    }

    ~Person()
    {
        delete[] name;
        delete[] surname;
        delete[] address;
        delete[] phoneNumber;
    }

    void print() const
    {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Married: " << (married ? "Yes" : "No") << endl;
        cout << "Employed: " << (employed ? "Yes" : "No") << endl;
    }
};

int main()
{
    Person person("Erik", "Piliposyan", 18, "Abovyan city", "+374 99181204", false, false);
    person.print();

    return 0;
}
