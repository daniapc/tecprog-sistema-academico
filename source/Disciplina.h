#ifndef _DISCIPLINA_H
#define _DISCIPLINA_H

#include "stdafx.h"
#include "ElAluno.h"

class Departamento;

class Disciplina
{
private:
    string nome;
    Departamento* pDptoAssociado;
    ElAluno *pAlunPrim,
            *pAlunAtual;
    int tamAluno,
        contaAluno;
    
public:
    Disciplina(int na = 45);
    ~Disciplina();
    
    Disciplina *pDiscProx, //fica público para poder acessar
               *pDiscAnte;

    void setNome (string n = "");
    string getNome ();
    void setDpto (Departamento* pdpto);
    Departamento* getDpto ();

    void incluirAluno (Aluno* pa);
    void listarAluno ();
    void listarAluno2();

};

#endif