#ifndef _ELDISCIPLINA_H
#define _ELDISCIPLINA_H

#include "stdafx.h"
#include "Disciplina.h"

class Departamento;

class ElDisciplina{
private:
    Disciplina *pDisc;

public:
    ElDisciplina();
    ~ElDisciplina();

    ElDisciplina *pAlunProx,
                 *pAlunAnte;

    void setDisc(Disciplina* pd);
    Disciplina* getDisc();
    string getNome();

};

#endif