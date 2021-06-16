#include <vector>
#include "Person.cpp";
using namespace std;

vector<Person> cracovCitizens;
class PersonDataProvider
{
private:
    vector<Person> cracovCitizens;
    void addPerson(Person data)
    {
        Person p = *new Person(data);

        cracovCitizens.push_back(p);
    }

public:
    PersonDataProvider()
    {

        Person p1("Jan", "Kowalski", 30);
        cracovCitizens.push_back(p1);

        Person p2("Janusz", "Krakowski", 30);
        cracovCitizens.push_back(p2);

        Person p3("Janusz", "Mlodociany", 10);
        cracovCitizens.push_back(p3);

        Person p4("Kasia", "Kosinska", 19);
        cracovCitizens.push_back(p4);

        Person p5("Piotr", "Zgredek", 29);
        cracovCitizens.push_back(p5);

        Person p6("Tomek", "Gimbus", 14);
        cracovCitizens.push_back(p6);

        Person p7("Janusz", "Gimbus", 15);
        cracovCitizens.push_back(p7);

        Person p8("Alicja", "Zaczarowana", 22);
        cracovCitizens.push_back(p8);

        Person p9("Janusz", "Programista", 77);
        cracovCitizens.push_back(p9);

        Person p10("Pawel", "Pawlowicz", 32);
        cracovCitizens.push_back(p10);

        Person p11("Krzysztof", "Mendel", 30);
        cracovCitizens.push_back(p11);
    };

    vector<Person> getAllCracovCitizens()
    {
        return cracovCitizens;
    }
};
