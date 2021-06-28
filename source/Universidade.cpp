#include "Universidade.h"

Universidade::Universidade (){
    //Aterra o ponteiro inicialmente na construtora
    pDeptoPri = NULL;
    pDeptoAtual = NULL;
}
Universidade::~Universidade(){
    //Aterra o ponteiro na destrutora
    pDeptoPri = NULL;
    pDeptoAtual = NULL;
}

void Universidade::setNome(string n){
    nome = n;
}
void Universidade::incluiDepto(Departamento* pd){
    if (pDeptoPri == NULL){
        pDeptoPri = pd;
        pDeptoAtual = pd;
    }
    else {
        pDeptoAtual->pDptoProx = pd;
        pd->pDptoAnte = pDeptoAtual;
        pDeptoAtual = pd;
    }

}
string Universidade::getNome(){
    return nome;
}
void Universidade::listaDeptos(){

    Departamento* pDepAux = pDeptoPri;

    while (pDepAux != NULL){
        cout << "O " 
             << pDepAux->getNome() << " pertence a "
             << nome << ".\n";
        pDepAux = pDepAux->pDptoProx;
    }
}
void Universidade::listaDeptos2(){

    Departamento* pDepAux = pDeptoAtual;

    while (pDepAux != NULL){
        cout << "O " 
             << pDepAux->getNome() << " pertence a "
             << nome << ".\n";
        pDepAux = pDepAux->pDptoAnte;
    }
}


