#include "ListaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas(int na){
    pElDiscAtual = NULL;
    pElDiscPrim = NULL;    
    contaDisc = 0;
    tamDisc = na;
}
ListaDisciplinas::~ListaDisciplinas(){
    ElDisciplina *paux1, 
                 *paux2;
    paux1 = pElDiscPrim;
    paux2 = paux1;
    while (paux1 != NULL){
        paux2 = paux1->pDiscProx;
        delete(paux1);
        paux1 = paux2;
    }       

    pElDiscAtual = NULL;
    pElDiscPrim = NULL;      
}

void ListaDisciplinas::incluirDisc (Disciplina* pd){
    //Importantíssimo criar esse ponteiro auxiliar do tipo ElDisc, alocá-lo e fazê-lo receber uma cópia do objeto
    //cout << tamDisc << "\n";
    if ((contaDisc < tamDisc) && (pd != NULL)){
        ElDisciplina *paux = NULL;
        paux = new ElDisciplina();
        paux->setDisc(pd);
        if (pElDiscPrim == NULL){
            pElDiscPrim = paux;
            pElDiscAtual = paux;
        }
        else{
            pElDiscAtual->pDiscProx = paux;
            paux->pDiscAnte = pElDiscAtual;
            pElDiscAtual = paux; 
        }
        contaDisc++;    }
    else {
        cout << "Quantidade de disciplinas lotada.\n";
    }
}
void ListaDisciplinas::listarDisc (string n){
    ElDisciplina* pAux = NULL;
    pAux = pElDiscPrim;

    while (pAux != NULL){
        cout << "A disciplina "
             << pAux->getNome() << " pertence ao "
             << n << ".\n";
        pAux = pAux->pDiscProx;
    }
}
void ListaDisciplinas::listarDisc2(string n){
    ElDisciplina* pAux = NULL;
    pAux = pElDiscAtual;

    while (pAux != NULL){
        cout << "A disciplina "
             << pAux->getNome() << " pertence ao "
             << n << ".\n";
        pAux = pAux->pDiscAnte;
    }
}