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
void Aluno::setDisc(Disciplina *pd){
    pDiscAssociada = pd;
}
Disciplina* Aluno::getDisc(){
    return pDiscAssociada;
}
