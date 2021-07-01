#ifndef _ELALUNO_H
#define _ELALUNO_H

#include "stdafx.h"
#include "Aluno.h"

class Disciplina;

class ElAluno{
private:
    Aluno *pAluno;

public:
    ElAluno();
    ~ElAluno();

    ElAluno *pAlunProx,
            *pAlunAnte;

    void setAluno(Aluno* pa);
    Aluno* getAluno();
    string getNome();
    int getRa();

};

#endif