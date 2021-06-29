#include "ElAluno.h"
#include "Disciplina.h"

ElAluno::ElAluno(){
    pAlunProx = NULL;
    pAlunAnte = NULL;
}
ElAluno::~ElAluno(){
    pAlunProx = NULL;
    pAlunAnte = NULL;
}
void ElAluno::setAluno(Aluno* pa){
    pAluno = pa;
}
Aluno* ElAluno::getAluno(){
    return pAluno;
}
string ElAluno::getNome(){
    return pAluno->getNome();
}
int ElAluno::getRa(){
    return pAluno->getRa();
}
void ElAluno::getBoletim(){
    pAluno->imprimeBoletim();
}