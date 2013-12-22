#include "../include/mezczyzna.h"
#include <iostream>
#include <string>
using namespace std;
Mezczyzna::Mezczyzna(string name)
{
   this->name=name;
}

Mezczyzna::~Mezczyzna()
{
    //nothing to fo here
}
void Mezczyzna::update(){
    cout<<name<<" zauwazyl ze Kobieta zmienila spodnie na spodniczke."<<endl;
}

void Mezczyzna::addObservator(Observator &object)
{
    observators.push_back(&object);
}

void Mezczyzna::changeBlouseToShirt(){
    cout<<name<<" zmienil bluzke na koszule."<<endl;
    this->notifyObservators();
}

void Mezczyzna::removeObservator(Observator &object){
    observators.remove(&object);
}

void Mezczyzna::notifyObservators(){
    list<Observator*>::iterator iter;
    for(iter=observators.begin(); iter != observators.end(); iter++ )
        (*iter)->update();
}

