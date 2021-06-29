#ifndef _LISTAALUNOS_H
#define _LISTAALUNOS_H

#include "stdafx.h"

#include "Aluno.h"
#include "ElAluno.h"

class ListaAlunos{
private:
    ElAluno *pElAlunPrim,
            *pElAlunAtual;    
    int tamAluno,
        contaAluno;
    string nome;
    
public:
    ListaAlunos(string n = "", int na = 45);
    ~ListaAlunos();

    void incluirAluno (Aluno* pa);
    void listarAluno ();
    void listarAluno2();
};

#endif