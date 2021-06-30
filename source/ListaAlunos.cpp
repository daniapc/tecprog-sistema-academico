#include "ListaAlunos.h"

ListaAlunos::ListaAlunos(int na){
    pElAlunAtual = NULL;
    pElAlunPrim = NULL;    
    //nome = n;
    contaAluno = 0;
    tamAluno = na;
}
ListaAlunos::~ListaAlunos(){
    ElAluno *paux1, 
            *paux2;
    paux1 = pElAlunPrim;
    paux2 = paux1;
    while (paux1 != NULL){
        paux2 = paux1->pAlunProx;
        delete(paux1);
        paux1 = paux2;
    }       

    pElAlunAtual = NULL;
    pElAlunPrim = NULL;      
}

void ListaAlunos::incluirAluno (Aluno* pa){
    //Importantíssimo criar esse ponteiro auxiliar do tipo ElAluno, alocá-lo e fazê-lo receber uma cópia do objeto
    cout << tamAluno << "\n";
    if ((contaAluno < tamAluno) && (pa != NULL)){
        ElAluno *paux = NULL;
        paux = new ElAluno();
        paux->setAluno(pa);
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
        //cout << nome << " " << tamAluno << " " << contaAluno << "\n";
    }
    else {
        cout << "Turma cheia!\n";
    }
}
void ListaAlunos::listarAluno (string n){
    ElAluno* pAux = NULL;
    pAux = pElAlunPrim;

    while (pAux != NULL){
        cout << "Estudante "
             << pAux->getNome() << " de RA "
             << pAux->getRa() << " se matriculou em "
             << n << ".\n";
        pAux = pAux->pAlunProx;
    }
}
void ListaAlunos::listarAluno2(string n){
    ElAluno* pAux = NULL;
    pAux = pElAlunAtual;

    while (pAux != NULL){
        cout << "Estudante "
             << pAux->getNome() << " de RA "
             << pAux->getRa() << " se matriculou em "
             << n << ".\n";
        pAux = pAux->pAlunAnte;
    }
}
/*void ListaAlunos::setTamAluno(int na){
    tamAluno = na;
}
int ListaAlunos::getTamAluno(){
    return tamAluno;
}*/