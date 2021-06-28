//#pragma once
#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_

#include "stdafx.h"
#include "Departamento.h"

class Universidade
{
private:
    string nome;
    Departamento *pDeptoPri,
                 *pDeptoAtual;

public:
    Universidade();
    ~Universidade();

    void setNome (string n = "");
    string getNome ();
    void incluiDepto(Departamento* pd);
    void listaDeptos();
    void listaDeptos2();
};

#endif