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
void ElAluno::setBoletim(float n1, float n2, float f){
    notaPri = n1;
    notaSeg = n2;
    medFinal = (n1 + n2)/2;
    faltas = f;
}
void ElAluno::getBoletim(){
    cout << "Nota 1: " << notaPri
         << "\tNota 2: " << notaSeg
         << "\tMedia Final: " << medFinal
         << "\tFaltas: " << faltas
         << "\n";
}