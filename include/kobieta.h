
#ifndef KOBIETA_H
#define KOBIETA_H
#include  "observable.h"
#include  "observator.h"
#include <list>
#include <string>

class Kobieta : public Observable, public Observator
{
    public:
        Kobieta(std::string name);
        virtual ~Kobieta();
        void changeTrousersToSkirt();
        void addObservator(Observator &object);
        void removeObservator(Observator &object);
        void update();
    protected:
        void notifyObservators();
    private:
        std::string name;
        std::list<Observator*> observators;
};

#endif // KOBIETA_H
