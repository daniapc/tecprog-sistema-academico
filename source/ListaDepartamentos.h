#ifndef _LISTADEPARTAMENTOS_H
#define _LISTADEPARTAMENTOS_H

#include "stdafx.h"

#include "Departamento.h"
#include "ElDepartamento.h"

class ListaDepartamentos{
private:
    ElDepartamento *pElDeptoPrim,
                   *pElDeptoAtual;    
    int tamDepto,
        contaDepto;
    
public:
    ListaDepartamentos(int na = 45); //não consigo alterar a quantidade de estudantes possível
    ~ListaDepartamentos();

    void incluirDepto (Departamento* pd);
    void listarDepto (string n); //queria evitar de passar parâmetro mas somente assim que consegui
    void listarDepto2(string n);
    
};

#endif