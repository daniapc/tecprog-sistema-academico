#ifndef _DISCIPLINA_H
#define _DISCIPLINA_H

#include "stdafx.h"
#include "ListaAlunos.h"

class Departamento;

class Disciplina
{
private:
    string nome;
    Departamento* pDptoAssociado;
    ListaAlunos ObjAlunos;
    
public:
    Disciplina(int na = 45); //não consigo alterar a quantidade de estudantes possível
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

    //void setTamAlunos(int na);
};

#endif