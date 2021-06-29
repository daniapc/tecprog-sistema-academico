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
    
public:
    ListaAlunos(int na = 45); //não consigo alterar a quantidade de estudantes possível
    ~ListaAlunos();

    void incluirAluno (Aluno* pa);
    void listarAluno (string n); //queria evitar de passar parâmetro mas somente assim que consegui
    void listarAluno2(string n);
};

#endif