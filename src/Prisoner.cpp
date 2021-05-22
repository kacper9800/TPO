#include <iostream>
#include <string>
#include <ctime>

using namespace std;
typedef chrono::system_clock Clock;
class Prisoner
{

private:
    string name;
    string surname;
    string pesel;
    int judgementYear;
    int senteceDuration;

public:
    Prisoner(string name, string surname, string pesel, int judgementYear, int sentenceDuration)
    {
        this->name = name;
        this->surname = surname;
        this->pesel = pesel;
        this->judgementYear = judgementYear;
        this->senteceDuration = sentenceDuration;
    }

    bool czyMoglbyEwentualnieBycPodejrzany()
    {

        return judgementYear + senteceDuration >= getCurrentYear();
    }

    int getCurrentYear()
    {

        time_t now = time(0);
        tm *ltm = localtime(&now);

        return 1900 + ltm->tm_year;
    }

    string getName()
    {
        return this->name;
    }

    string getSurname()
    {
        return this->surname;
    }

    string getPesel()
    {
        return this->pesel;
    }

    int getJudgementYear()
    {
        return this->judgementYear;
    }

    int getSenteceDuration()
    {
        return this->senteceDuration;
    }
};
