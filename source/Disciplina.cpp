#include "Disciplina.h"
#include "Departamento.h"

Disciplina::Disciplina(int na):
ObjAlunos(na){
    pDptoAssociado = NULL;
    pDiscProx = NULL;
    pDiscAnte = NULL;
}
Disciplina::~Disciplina(){
    pDptoAssociado = NULL;
    pDiscProx = NULL;
    pDiscAnte = NULL;
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
    ObjAlunos.incluirAluno(pa);
}
void Disciplina::listarAluno(){
    ObjAlunos.listarAluno(nome);
}
void Disciplina::listarAluno2(){
    ObjAlunos.listarAluno2(nome);
}