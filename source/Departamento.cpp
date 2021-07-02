#include "Departamento.h"
#include "Universidade.h"

Departamento::Departamento(){
    pObjDisciplinas = new ListaDisciplinas(10);
    pUnivAssociada = NULL;

}
Departamento::~Departamento(){
    pUnivAssociada = NULL;
}

void Departamento::setNome(string n){
    nome = n;
}
string Departamento::getNome(){
    return nome;
}
void Departamento::setUniv (Universidade *pu){
    pUnivAssociada = pu;

    //pu->incluiDepto(this);
};
Universidade* Departamento::getUnv (){
    return pUnivAssociada;
};

void Departamento::incluirDisc(Disciplina* pd){
    pObjDisciplinas->incluirDisc(pd);
}

void Departamento::listarDisc (){
    pObjDisciplinas->listarDisc(nome);   
}
void Departamento::listarDisc2 (){
     pObjDisciplinas->listarDisc2(nome); 
}
