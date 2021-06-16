#include <string>
#include <list>
#include "PrisonersDatabase.cpp"
#include "PersonDataProvider.cpp"


using namespace std;

class Finder {
private:
    vector <Person> allPersons;
    map <string, Prisoner> allPrisoners;

public:

    Finder(vector <Person> allPersons, map <string, Prisoner> allPrisoners) {
        this->allPersons = allPersons;
        this->allPrisoners = allPrisoners;
    }

    Finder(PersonDataProvider personDataProvider, PrisonersDatabase prisonersDatabase) {
        this->allPersons = personDataProvider.getAllCracovCitizens();
        this->allPrisoners = prisonersDatabase.findAll();
    }

    void displayAllSuspectsWithName(string name) {
        list <Prisoner> suspectedPrisoners;
        list <Person> suspectedPersons;


        map<string, Prisoner>::iterator itr;

        for (itr = allPrisoners.begin(); itr != allPrisoners.end(); ++itr) {

            if (itr->second.czyMoglbyEwentualnieBycPodejrzany() == 0 && itr->second.getName() == name) {
                suspectedPrisoners.push_back(itr->second);
            }
            if (suspectedPrisoners.size() >= 10) {
                break;
            }
        }

        vector<Person>::iterator person;

        if (suspectedPrisoners.size() < 10) {
            for (person = allPersons.begin(); person < allPersons.end(); person++) {

                if (person->getAge() > 18 && person->getFirstName() == name) {
                    Person p(person->getFirstName(), person->getMiddleName(), person->getAge());
                    suspectedPersons.push_back(p);
                }
                if (suspectedPrisoners.size() + suspectedPersons.size() >= 10) {
                    break;
                }
            }
        }


        int t = (int) suspectedPrisoners.size() + (int) suspectedPersons.size();
        cout << "Znalazlem " << t << " pasujacych podejrzanych!" << "\n";


        list<Prisoner>::iterator it1;
        for (it1 = suspectedPrisoners.begin(); it1 != suspectedPrisoners.end(); ++it1) {
            it1->display();
            cout << "\n";
        }


        list<Person>::iterator it2;
        for (it2 = suspectedPersons.begin(); it2 != suspectedPersons.end(); ++it2) {
            it2->display();
            cout << "\n";
        }

    }

};
