#include "Departamento.h"
#include "Universidade.h"

Departamento::Departamento(){
    pUnivAssociada = NULL;
    pDptoProx = NULL;
    pDptoAnte = NULL;
    pDiscPrim = NULL;
    pDiscAtual = NULL;
}
Departamento::~Departamento(){
    pUnivAssociada = NULL;
    pDptoProx = NULL;
    pDptoAnte = NULL;
    pDiscPrim = NULL;
    pDiscAtual = NULL;
}

void Departamento::setNome(string n){
    nome = n;
}
string Departamento::getNome(){
    return nome;
}
void Departamento::setUniv (Universidade *pu){
    pUnivAssociada = pu;

    pu->incluiDepto(this);
};
Universidade* Departamento::getUnv (){
    return pUnivAssociada;
};

void Departamento::incluirDisc(Disciplina* pd){
    if (pDiscPrim == NULL){
        pDiscPrim = pd;
        pDiscAtual = pd;
    }
    else {
        pDiscAtual->pDiscProx = pd;
        pd->pDiscAnte = pDiscAtual;
        pDiscAtual = pd; //pProx
    }
}

void Departamento::listarDisc (){
    Disciplina* pAux;

    pAux = pDiscPrim;

    while (pAux != NULL){
        cout << "A disciplina "
             << pAux->getNome() << " pertence ao "
             << nome << ".\n";
        pAux = pAux->pDiscProx;
    }
}
void Departamento::listarDisc2 (){
    Disciplina* pAux;

    pAux = pDiscAtual;

    while (pAux != NULL){
        cout << "A disciplina "
             << pAux->getNome() << " pertence ao "
             << nome << ".\n";
        pAux = pAux->pDiscAnte;
    }
}
