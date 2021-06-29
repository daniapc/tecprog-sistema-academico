#include "Disciplina.h"
#include "Departamento.h"

Disciplina::Disciplina(int na){
    pDptoAssociado = NULL;
    pDiscProx = NULL;
    pDiscAnte = NULL;
    pElAlunAtual = NULL;
    pElAlunPrim = NULL;
    contaAluno = 0;
    tamAluno = na;
}
Disciplina::~Disciplina(){
    ElAluno *paux1, *paux2;
    paux1 = pElAlunPrim;
    while (paux1 != NULL){
        paux2 = paux1->pAlunProx;
        delete(paux1);
        paux1 = paux2;
    }   
    /* //Outra solução: acessa-se diretamente pElAlunoPrim substituindo por paux2 sem necessidade de criar
    while (paux1 != NULL){
        pElAlunPrim = pElAlunPrim->pAlunProx;
        delete(paux1);
        paux1 = pElAlunPrim;
    }*/

    pDptoAssociado = NULL;
    pDiscProx = NULL;
    pDiscAnte = NULL;
    pElAlunAtual = NULL;
    pElAlunPrim = NULL;
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
    //Importantíssimo criar esse ponteiro auxiliar do tipo ElAluno, alocá-lo e fazê-lo receber uma cópia do objeto
    ElAluno *paux = NULL;
    paux = new ElAluno();
    paux->setAluno(pa);
    
    if ((contaAluno < tamAluno) && (pa != NULL)){
        if (pElAlunPrim == NULL){
            pElAlunPrim = paux;
            pElAlunAtual = paux;
        }
        else{
            pElAlunAtual->pAlunProx = paux;
            paux->pAlunAnte = pElAlunAtual;
            pElAlunAtual = paux; 
        }
        contaAluno++;
    }
    else {
        cout << "Turma cheia!\n";
    }
}
void Disciplina::listarAluno(){
    ElAluno* pAux;
    pAux = pElAlunPrim;

    while (pAux != NULL){
        cout << "Estudante "
             << pAux->getNome() << " de RA "
             << pAux->getRa() << " se matriculou em "
             << nome << ".\n";
        pAux = pAux->pAlunProx;
    }
}
void Disciplina::listarAluno2(){
    ElAluno* pAux;
    pAux = pElAlunAtual;

    while (pAux != NULL){
        cout << "Estudante "
             << pAux->getNome() << " de RA "
             << pAux->getRa() << " se matriculou em "
             << nome << ".\n";
        pAux = pAux->pAlunAnte;
    }
}