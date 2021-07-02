#include "ElDisciplina.h"
#include "Departamento.h"

ElDisciplina::ElDisciplina(){
    pDiscProx = NULL;
    pDiscAnte = NULL;
    pDisc = NULL;
}
ElDisciplina::~ElDisciplina(){
    pDiscProx = NULL;
    pDiscAnte = NULL;
    pDisc = NULL;
}
void ElDisciplina::setDisc(Disciplina* pd){
    pDisc = pd;
}
Disciplina* ElDisciplina::getDisc(){
    return pDisc;
}
string ElDisciplina::getNome(){
    return pDisc->getNome();
}
