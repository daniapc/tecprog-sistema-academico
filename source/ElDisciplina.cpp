#include "ElDisciplina.h"
#include "Departamento.h"

ElDisciplina::ElDisciplina(){
    pAlunProx = NULL;
    pAlunAnte = NULL;
}
ElDisciplina::~ElDisciplina(){
    pAlunProx = NULL;
    pAlunAnte = NULL;
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
