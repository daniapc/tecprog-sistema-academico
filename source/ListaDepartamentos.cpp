#include "ListaDepartamentos.h"

ListaDepartamentos::ListaDepartamentos(int na){
    pElDeptoAtual = NULL;
    pElDeptoPrim = NULL;    
    cout << na << "\n";
    contaDepto = 0;
    tamDepto = na;
}
ListaDepartamentos::~ListaDepartamentos(){
    ElDepartamento *paux1, 
            *paux2;
    paux1 = pElDeptoPrim;
    paux2 = paux1;
    while (paux1 != NULL){
        paux2 = paux1->pDeptoProx;
        delete(paux1);
        paux1 = paux2;
    }       

    pElDeptoAtual = NULL;
    pElDeptoPrim = NULL;      
}

void ListaDepartamentos::incluirDepto (Departamento* pa){
    //Importantíssimo criar esse ponteiro auxiliar do tipo ElDepartamento, alocá-lo e fazê-lo receber uma cópia do objeto
    //cout << tamDepartamento << "\n";
    if ((contaDepto < tamDepto) && (pa != NULL)){
        ElDepartamento *paux = NULL;
        paux = new ElDepartamento();
        paux->setDepto(pa);
        if (pElDeptoPrim == NULL){
            pElDeptoPrim = paux;
            pElDeptoAtual = paux;
        }
        else{
            pElDeptoAtual->pDeptoProx = paux;
            paux->pDeptoAnte = pElDeptoAtual;
            pElDeptoAtual = paux; 
        }
        contaDepto++;    }
    else {
        cout << "Turma cheia!\n";
    }
}
void ListaDepartamentos::listarDepto (string n){
    ElDepartamento* pAux = NULL;
    pAux = pElDeptoPrim;

    /*while (pAux != NULL){
        cout << "Estudante "
             << pAux->getNome() << " de RA "
             << pAux->getRa() << " se matriculou em "
             << n << ".\n";
        pAux = pAux->pDeptoProx;
    }*/
}
void ListaDepartamentos::listarDepto2(string n){
    ElDepartamento* pAux = NULL;
    pAux = pElDeptoAtual;

    /*while (pAux != NULL){
        cout << "Estudante "
             << pAux->getNome() << " de RA "
             << pAux->getRa() << " se matriculou em "
             << n << ".\n";
        pAux = pAux->pDeptoAnte;
    }*/
}