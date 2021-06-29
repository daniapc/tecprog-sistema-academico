#include "Disciplina.h"
#include "Departamento.h"

Disciplina::Disciplina(int na){
    pDptoAssociado = NULL;
    pDiscProx = NULL;
    pDiscAnte = NULL;
    pAlunAtual = NULL;
    pAlunPrim = NULL;
    contaAluno = 0;
    tamAluno = na;
}
Disciplina::~Disciplina(){
    pDptoAssociado = NULL;
    pDiscProx = NULL;
    pDiscAnte = NULL;
    pAlunAtual = NULL;
    pAlunPrim = NULL;
}

void Disciplina::setNome (string n){
    nome = n;
}
string Disciplina::getNome (){
    return nome;
}

void Disciplina::setDpto (Departamento* pdpto){
    pDptoAssociado = pdpto;

    pdpto->incluirDisc(this);
}

Departamento* Disciplina::getDpto (){
    return pDptoAssociado;
}

void Disciplina::incluirAluno(Aluno* pa){
    if ((contaAluno < tamAluno) && (pa != NULL)){
        if (pAlunPrim == NULL){
            pAlunPrim = pa;
            pAlunAtual = pa;
        }
        else{
            pAlunAtual->pAlunProx = pa;
            pa->pAlunAnte = pAlunAtual;
            pAlunAtual = pa; 
        }
        contaAluno++;
    }
    else {
        cout << "Turma cheia!\n";
    }
}
void Disciplina::listarAluno(){
    Aluno* pAux;
    pAux = pAlunPrim;

    while (pAux != NULL){
        cout << "Estudante "
             << pAux->getNome() << " de RA "
             << pAux->getRa() << " se matriculou em "
             << nome << ".\n";
        pAux = pAux->pAlunProx;
    }
}
void Disciplina::listarAluno2(){
    Aluno* pAux;
    pAux = pAlunAtual;

    while (pAux != NULL){
        cout << "Estudante "
             << pAux->getNome() << " de RA "
             << pAux->getRa() << " se matriculou em "
             << nome << ".\n";
        pAux = pAux->pAlunAnte;
    }
}