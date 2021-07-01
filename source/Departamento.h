#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_

#include "stdafx.h"

#include "ListaDisciplinas.h"

class Universidade;

class Departamento
{
private:
    string nome;
    Universidade *pUnivAssociada;
    
    ListaDisciplinas *pObjDisciplinas;

public:
    Departamento();
    ~Departamento();
    
    void setNome (string n = "");
    string getNome ();
    //Atualizado só agora (24/06) para poder referenciar universidade
    void setUniv (Universidade *pu);
    Universidade* getUnv ();

    void incluirDisc (Disciplina *pd);
    void listarDisc  ();
    void listarDisc2 ();
    
};

#endif