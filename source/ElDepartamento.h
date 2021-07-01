#ifndef _ELDEPARTAMENTO_H
#define _ELDEPARTAMENTO_H

#include "stdafx.h"
#include "Departamento.h"

class Universidade;

class ElDepartamento{
private:
    Departamento *pDepto;

public:
    ElDepartamento();
    ~ElDepartamento();

    ElDepartamento *pDeptoProx,
                   *pDeptoAnte;

    void setDepto(Departamento* pd);
    Departamento* getDepto();
    string getNome();   

};

#endif