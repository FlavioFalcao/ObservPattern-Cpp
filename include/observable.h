#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include "observator.h"

class Observable
{
    public:
        virtual void addObservator(Observator &object)=0;
        virtual void removeObservator(Observator &object)=0;
    protected:
        virtual void notifyObservators()=0;
    private:
};

#endif // OBSERVABLE_H
