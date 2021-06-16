#include <iostream>
#include "Finder.cpp"

using namespace std;

int main()
{
    PersonDataProvider personDataProvider;
    PrisonersDatabase prisonersDatabase;

    Finder suspects(personDataProvider, prisonersDatabase);
    suspects.displayAllSuspectsWithName("Janusz");

    return 0;
}
