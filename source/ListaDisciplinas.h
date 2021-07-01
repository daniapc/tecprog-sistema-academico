#ifndef _LISTADISCIPLINAS_H
#define _LISTADISCIPLINAS_H

#include "stdafx.h"

#include "Disciplina.h"
#include "ElDisciplina.h"

class ListaDisciplinas{
private:
    ElDisciplina *pElAlunPrim,
                 *pElAlunAtual;    
    int tamDisc,
        contaDisc;
    
public:
    ListaDisciplinas(int na = 45); 
    ~ListaDisciplinas();

    void incluirDisc (Disciplina* pd);
    void listarDisc (string n); //queria evitar de passar parâmetro mas somente assim que consegui
    void listarDisc2(string n);
    
};

#endif