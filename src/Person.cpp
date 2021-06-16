#include <string>

using namespace std;
class Person
{
private:
    int age;
    string firstName;
    string middleName;
    string city;

public:
    Person(string firstName, string middleName, int age)
    {
        this->firstName = firstName;
        this->middleName = middleName;
        this->age = age;
    }

    void setFirstName(string firstName)
    {
        this->firstName = firstName;
    }

    string getFirstName()
    {
        return this->firstName;
    }

    void setMiddleName(string middleName)
    {
        this->middleName = middleName;
    }

    string getMiddleName()
    {
        return this->middleName;
    }

    void setCity(string city)
    {
        this->city = city;
    }

    string getCity()
    {
        return this->city;
    }

    int getAge(){
        return this->age;
    }

    string display()
    {
        return "Wiek:" + to_string(age) + ", Imię: " + firstName + ", Drugie imie: " + middleName;
    }
};
