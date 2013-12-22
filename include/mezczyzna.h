#ifndef MEZCZYZNA_H
#define MEZCZYZNA_H

#include "observator.h"
#include "observable.h"
#include <string>
#include <list>

class Mezczyzna : public Observator, public Observable
{
    public:
        Mezczyzna(std::string name);
        virtual ~Mezczyzna();
        void changeBlouseToShirt();
        void addObservator(Observator &object);
        void removeObservator(Observator &object);
    protected:
        void notifyObservators();
    private:
        void update();
        std::string name;
        std::list<Observator*> observators;
};

#endif // MEZCZYZNA_H
