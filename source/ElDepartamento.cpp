#include "ElDepartamento.h"
#include "Universidade.h"

ElDepartamento::ElDepartamento(){
    pDeptoProx = NULL;
    pDeptoAnte = NULL;
}
ElDepartamento::~ElDepartamento(){
    pDeptoProx = NULL;
    pDeptoAnte = NULL;
}
void ElDepartamento::setDepto(Departamento* pd){
    pDepto = pd;
}
Departamento* ElDepartamento::getDepto(){
    return pDepto;
}
string ElDepartamento::getNome(){
    return pDepto->getNome();
}
