#include "../include/kobieta.h"
#include <list>
#include <iostream>
using namespace std;
Kobieta::Kobieta(string name)
{
    this->name=name;
}
Kobieta::~Kobieta()
{
    //dtor
}
void Kobieta::changeTrousersToSkirt(){

    std::cout << name<<" zmienia spodnie na spodniczke." << std::endl;
    this->notifyObservators();

}

void Kobieta::notifyObservators(){

    list<Observator*>::iterator iter;
    for(iter=observators.begin(); iter != observators.end(); iter++ )
        (*iter)->update();

}
void Kobieta::addObservator(Observator &object){

    observators.push_back(&object);

}

void Kobieta::removeObservator(Observator &object){

    observators.remove(&object);

}

void Kobieta::update(){
    cout<<"Kobietka zauwazyla, ze Mezczyzna, ktorego obserwuje zmienil bluzke na koszule :)"<<endl;
}
