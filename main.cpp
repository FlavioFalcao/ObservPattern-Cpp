#include <iostream>
#include "include/kobieta.h"
#include "include/mezczyzna.h"
using namespace std;

int main()
{
    Mezczyzna* ob = new Mezczyzna("Mateusz");
    Mezczyzna* ob1 = new Mezczyzna("Lukasz");
    Kobieta* ob2 = new Kobieta("Aga");
    ob2->addObservator(dynamic_cast<Observator&>(*ob));
    ob2->addObservator(dynamic_cast<Observator&>(*ob1));
    ob2->changeTrousersToSkirt();
    //=====================
    ob->addObservator(dynamic_cast<Observator&>(*ob2));
    ob->changeBlouseToShirt();

    delete ob;
    delete ob1;
    delete ob2;
    return 0;
}
