#ifndef _PESSOA_H
#define _PESSOA_H

#include "stdafx.h"

class Pessoa
{
protected:
    //Attributes
    int diaP, mesP, anoP, idadeP;
    string nomeP;

public:
    /*(19/07) String recebe um valor "" default (só pode na assinatura, não na implementação).
    Isso só é possível caso todos os parâmetros da direita recebam default (no caso não há param direita)*/
    Pessoa(int diaNa, int mesNa, int anoNa, string nome = ""); 
    Pessoa();
    ~Pessoa();

    void Inicializa(int diaNa, int mesNa, int anoNa, string nome = "");
    void CalcIdade(int diaAt, int mesAt, int anoAt);      
    void printIdade();
    void CalcPrintIdade(int diaAt, int mesAt, int anoAt);
};

#endif