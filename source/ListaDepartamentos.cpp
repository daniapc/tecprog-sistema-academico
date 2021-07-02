#include "ListaDepartamentos.h"

ListaDepartamentos::ListaDepartamentos(int na){
    pElDeptoAtual = NULL;
    pElDeptoPrim = NULL;    
    contaDepto = 0;
    tamDepto = na;
    //cout << tamDepto << "\n";
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

void ListaDepartamentos::incluirDepto (Departamento* pd){
    //Importantíssimo criar esse ponteiro auxiliar do tipo ElDepartamento, alocá-lo e fazê-lo receber uma cópia do objeto
    //
    //tamDepto = 45;
    //contaDepto = 0;
    
    if ((contaDepto < tamDepto) && (pd != NULL)){
        ElDepartamento *paux = NULL;
        paux = new ElDepartamento();
        paux->setDepto(pd);
        if (pElDeptoPrim == NULL){
            pElDeptoPrim = paux;
            pElDeptoAtual = paux;
        }
        else{
            pElDeptoAtual->pDeptoProx = paux;
            paux->pDeptoAnte = pElDeptoAtual;
            pElDeptoAtual = paux; 
        }
        contaDepto++;  
    }
    else {
        cout << "Lista de Departamentos Cheia!\n";
    }
}
void ListaDepartamentos::listarDepto (string n){
    ElDepartamento* pAux = NULL;
    pAux = pElDeptoPrim;

    while (pAux != NULL){
        cout << "O " 
             << pAux->getNome() << " pertence a "
             << n << ".\n";
        pAux = pAux->pDeptoProx;
    }
}
void ListaDepartamentos::listarDepto2(string n){
    ElDepartamento* pAux = NULL;
    pAux = pElDeptoAtual;

    while (pAux != NULL){
        cout << "O " 
             << pAux->getNome() << " pertence a "
             << n << ".\n";
        pAux = pAux->pDeptoAnte;
    }
}