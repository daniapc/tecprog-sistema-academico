#include "Disciplina.h"
#include "Departamento.h"

Disciplina::Disciplina(int na):
ObjAlunos(na){
    pDptoAssociado = NULL;
}
Disciplina::~Disciplina(){
    pDptoAssociado = NULL;
}

void Disciplina::setNome (string n){
    nome = n;
}
string Disciplina::getNome (){
    return nome;
}

void Disciplina::setDpto (Departamento* pdpto){
    pDptoAssociado = pdpto;

    //pdpto->incluirDisc(this);
}

Departamento* Disciplina::getDpto (){
    return pDptoAssociado;
}

void Disciplina::incluirAluno(Aluno* pa){
    ObjAlunos.incluirAluno(pa);
}
void Disciplina::listarAluno(){
    //Burda colocou no dele um cout préveo com o nome da disciplina incluído aqui.
    ObjAlunos.listarAluno(nome);
}
void Disciplina::listarAluno2(){
    ObjAlunos.listarAluno2(nome);
}
/*void Disciplina::setTamAlunos(int na){
    ObjAlunos.setTamAluno(na);
}*/