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
    //Importantíssimo criar esse ponteiro auxiliar do tipo ElAluno, alocá-lo e fazê-lo receber uma cópia do objeto
    ElAluno *paux = NULL;
    paux = new ElAluno();
    paux->setAluno(pa);
    
    if ((contaAluno < tamAluno) && (pa != NULL)){
        if (pAlunPrim == NULL){
            pAlunPrim = paux;
            pAlunAtual = paux;
        }
        else{
            pAlunAtual->pAlunProx = paux;
            paux->pAlunAnte = pAlunAtual;
            pAlunAtual = paux; 
        }
        contaAluno++;
    }
    else {
        cout << "Turma cheia!\n";
    }
}
void Disciplina::listarAluno(){
    ElAluno* pAux;
    pAux = pAlunPrim;

    while (pAux != NULL){
        cout << "Estudante "
             << pAux->getNome() << " de RA "
             << pAux->getRa() << " se matriculou em "
             << nome << " com o seguinte boletim:\n";
        pAux->getBoletim();
        pAux = pAux->pAlunProx;
    }
}
void Disciplina::listarAluno2(){
    ElAluno* pAux;
    pAux = pAlunAtual;

    while (pAux != NULL){
        cout << "Estudante "
             << pAux->getNome() << " de RA "
             << pAux->getRa() << " se matriculou em "
             << nome << " com o seguinte boletim:\n";
        pAux->getBoletim();
        pAux = pAux->pAlunAnte;
    }
}