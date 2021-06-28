#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "stdafx.h"
#include "Pessoa.h"
#include "Universidade.h"

class Professor: public Pessoa
{
private:
    //Atributtes.
    Universidade *pUnivFiliado;
    Departamento *pDptoFiliado;

public:
    Professor(int diaNa, int mesNa, int anoNa, string nome = "");
    Professor();
    ~Professor();

    //Associações com a classe Universidade e Departamento
    void setUnivFiliado(Universidade* pu);
    void setDepFiliado(Departamento* pd);
    void qualUniTrabalho();
    void qualDepTrabalho();
};

#endif