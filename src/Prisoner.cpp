class Prisoner {

public:
    string name;
    string surname;

    bool czyMoglbyEwentualnieBycPodejrzany() {}


    string getName()  {
        return name;
    }

    string setName(string name ) {
        Prisoner::name = name;
    }

    string getSurname() {
        return surname;
    }

    string setSurname(string Surname) {
        Prisoner::surname = surname;
    }
};
