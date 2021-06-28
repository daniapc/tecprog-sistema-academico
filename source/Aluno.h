#ifndef _ALUNO_H
#define _ALUNO_H

#include "stdafx.h"
#include "Pessoa.h"

class Disciplina;

class Aluno: public Pessoa
{
private:
    int ra;

    Disciplina *pDiscAssociada;

public: 
    Aluno(int diaNa, int mesNa, int anoNa, string nome = "");
    Aluno();
    ~Aluno();

    Aluno *pAlunProx,
          *pAlunAnte;

    string getNome();
    void setRa(int n);
    int getRa();
    void setDisc(Disciplina *pd);
    Disciplina* getDisc();
};

#endif