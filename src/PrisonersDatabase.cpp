
#include <string>
#include <map>
#include "Prisoner.cpp"

using namespace std;

map<string, Prisoner> prisoners;
class PrisonersDatabase
{
private:
    void addPrisoner(string category, Prisoner prisoner)
    {
        prisoners.insert(pair<string, Prisoner>(category, prisoner));
    }

public:
    PrisonersDatabase()
    {

        Prisoner p1("Jan", "Kowalski", "87080452357", 2005, 7);
        prisoners.insert(pair<string, Prisoner>("Wiezienie krakowskie", p1));

        Prisoner p2("Anita", "Wiercipieta", "84080452357", 2009, 3);
        prisoners.insert(pair<string, Prisoner>("Wiezienie krakowskie", p2));

        Prisoner p3("Janusz", "Zlowieszczy", "92080445657", 2001, 10);
        prisoners.insert(pair<string, Prisoner>("Wiezienie krakowskie", p3));

        Prisoner p4("Janusz", "Zamkniety", "802104543357", 2010, 5);
        prisoners.insert(pair<string, Prisoner>("Wiezienie przedmiejskie", p4));

        Prisoner p5("Adam", "Future", "880216043357", 2020, 5);
        prisoners.insert(pair<string, Prisoner>("Wiezienie przedmiejskie", p5));

        Prisoner p6("Zbigniew", "Nienajedzony", "90051452335", 2011, 1);
        prisoners.insert(pair<string, Prisoner>("Wiezienie przedmiejskie", p6));

        Prisoner p7("Jan", "Przedziwny", "91103145223", 2009, 4);
        prisoners.insert(pair<string, Prisoner>("Wiezienie centralne", p7));

        Prisoner p8("Janusz", "Podejrzany", "85121212456", 2012, 1);
        prisoners.insert(pair<string, Prisoner>("Wiezienie centralne", p8));
    }

    map<string, Prisoner> findAll()
    {

        return prisoners;
    }

    string render(Prisoner prisoner)
    {
        return prisoner.getName() + " " + prisoner.getSurname();
    }
};
