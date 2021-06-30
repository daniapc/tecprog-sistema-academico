/*#ifndef _ELDEPARTAMENTO_H
#define _ELDEPARTAMENTO_H

#include "stdafx.h"
#include "Departamento.h"

class Universidade;

class ElDepartamento{
private:
    Departamento *pDepartamento;

public:
    ElDepartamento();
    ~ElDepartamento();

    ElDepartamento *pAlunProx,
                   *pAlunAnte;

    void setDepartamento(Departamento* pa);
    Departamento* getDepartamento();
    string getNome();
    int getRa();

};

#endif*/