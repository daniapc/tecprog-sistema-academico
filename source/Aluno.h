#ifndef _ALUNO_H
#define _ALUNO_H

#include "stdafx.h"
#include "Pessoa.h"
//#include "Disciplina.h"

class Disciplina;
class ElAluno;

class Aluno: public Pessoa
{
private:
    int ra;
    Disciplina *pDiscAssociada;

public: 
    Aluno(int diaNa, int mesNa, int anoNa, string nome = "");
    Aluno();
    ~Aluno();

    string getNome();
    void setRa(int n);
    int getRa();
    void setDisc(Disciplina *pd);
    Disciplina* getDisc();
};

#endif