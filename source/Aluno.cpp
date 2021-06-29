#include "Aluno.h"
#include "ElAluno.h"
#include "Disciplina.h"

Aluno::Aluno(int diaNa, int mesNa, int anoNa, string nome):
Pessoa (diaNa, mesNa, anoNa, nome) {
    pDiscAssociada = NULL;
}
Aluno::Aluno(){
    pDiscAssociada = NULL;
}
Aluno::~Aluno(){
    pDiscAssociada = NULL;
}
string Aluno::getNome(){
    return nomeP;
}
void Aluno::setRa(int n){
    ra = n;
}
int Aluno::getRa(){
    return ra;
}
void Aluno::setDisc(Disciplina *pd, float n1, float n2, float f){
    pDiscAssociada = pd;

    notaPri = n1;
    notaSeg = n2;
    faltas = f;
    medFinal = (n1 + n2)/2;

    pd->incluirAluno(this);
}
Disciplina* Aluno::getDisc(){
    return pDiscAssociada;
}
void Aluno::imprimeBoletim(){
    cout << "Nota 1: " << notaPri
         << "\tNota 2: " << notaSeg
         << "\tMedia Final: " << medFinal
         << "\tFaltas: " << faltas
         << "\n";
}
