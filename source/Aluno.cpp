#include "Aluno.h"
#include "Disciplina.h"

Aluno::Aluno(): Pessoa(){
    pDiscAssociada = NULL;
    pAlunProx = NULL;
    pAlunAnte = NULL;
}
Aluno::Aluno(int diaNa, int mesNa, int anoNa, string nome):
Pessoa (diaNa, mesNa, anoNa, nome) {
    pDiscAssociada = NULL;
    pAlunProx = NULL;
    pAlunAnte = NULL;
}
Aluno::~Aluno(){
    pDiscAssociada = NULL;
    pAlunProx = NULL;
    pAlunAnte = NULL;
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

    pd->incluirAluno(this);
}
Disciplina* Aluno::getDisc(){
    return pDiscAssociada;
}