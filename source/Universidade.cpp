#include "Universidade.h"

Universidade::Universidade():
ObjDepartamento(5){

}
Universidade::~Universidade(){

}

void Universidade::setNome(string n){
    nome = n;
}
string Universidade::getNome(){
    return nome;
}
void Universidade::incluiDepto(Departamento* pd){
    ObjDepartamento.incluirDepto(pd);
}

void Universidade::listaDeptos(){
    ObjDepartamento.listarDepto(nome);
}
void Universidade::listaDeptos2(){
    ObjDepartamento.listarDepto2(nome);
}


