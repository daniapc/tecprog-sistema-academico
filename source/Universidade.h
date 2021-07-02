//#pragma once
#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_

#include "stdafx.h"
#include "ListaDepartamentos.h"

class Universidade
{
private:
    string nome;

    ListaDepartamentos ObjDepartamento;

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