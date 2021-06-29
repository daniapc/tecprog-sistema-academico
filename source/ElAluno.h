#ifndef _ELALUNO_H
#define _ELALUNO_H

#include "stdafx.h"
#include "Aluno.h"

/*Está solução é apropriada, pois cada vez que um aluno é
inserido em uma lista de disciplina, é também criado um
elemento_aluno para tratá-lo naquela lista em específico.*/

class Disciplina;

class ElAluno{
private:
    Aluno *pAluno;

    int   faltas;
    float notaPri,
          notaSeg,
          medFinal;

public:
    ElAluno();
    ~ElAluno();

    ElAluno *pAlunProx,
            *pAlunAnte;

    void setAluno(Aluno* pa);
    Aluno* getAluno();
    string getNome();
    int getRa();
    void setBoletim(float n1, float n2, float f);
    void getBoletim();
};

#endif