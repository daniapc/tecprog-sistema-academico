#include "ListaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas(int na){
    pElAlunAtual = NULL;
    pElAlunPrim = NULL;    
    cout << na << "\n";
    contaDisc = 0;
    tamDisc = na;
}
ListaDisciplinas::~ListaDisciplinas(){
    ElDisciplina *paux1, 
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

void ListaDisciplinas::incluirDisc (Disciplina* pd){
    //Importantíssimo criar esse ponteiro auxiliar do tipo ElDisc, alocá-lo e fazê-lo receber uma cópia do objeto
    //cout << tamDisc << "\n";
    if ((contaDisc < tamDisc) && (pd != NULL)){
        ElDisciplina *paux = NULL;
        paux = new ElDisciplina();
        paux->setDisc(pd);
        if (pElAlunPrim == NULL){
            pElAlunPrim = paux;
            pElAlunAtual = paux;
        }
        else{
            pElAlunAtual->pAlunProx = paux;
            paux->pAlunAnte = pElAlunAtual;
            pElAlunAtual = paux; 
        }
        contaDisc++;    }
    else {
        cout << "Quantidade de disciplinas lotada.\n";
    }
}
void ListaDisciplinas::listarDisc (string n){
    ElDisciplina* pAux = NULL;
    pAux = pElAlunPrim;
/*
    while (pAux != NULL){
        cout << "Estudante "
             << pAux->getNome() << " de RA "
             << pAux->getRa() << " se matriculou em "
             << n << ".\n";
        pAux = pAux->pAlunProx;
    }*/
}
void ListaDisciplinas::listarDisc2(string n){
    ElDisciplina* pAux = NULL;
    pAux = pElAlunAtual;
/*
    while (pAux != NULL){
        cout << "Estudante "
             << pAux->getNome() << " de RA "
             << pAux->getRa() << " se matriculou em "
             << n << ".\n";
        pAux = pAux->pAlunAnte;
    }*/
}