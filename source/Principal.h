#ifndef _PRINCIPAL_H
#define _PRINCIPAL_H

#include "stdafx.h"

#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"
#include "Professor.h"
#include "Aluno.h"
#include "Disciplina.h"

class Principal
{
private:
    Professor Newton, 
              Einstein, 
              Simao,
              Robocop;
    Aluno Daniel,
          Lucas,
          Mint;
    Universidade Utfpr, 
                 Princeton, 
                 Cambridge;
    Departamento Fisica_Princeton, 
                 Fisica_Cambridge,
                 Informatica,
                 Eletronica;
    Disciplina Fisica_1,
               Tec_Prog,
               Fund_Prog,
               Est_Dados_1,
               Circ_Elet;

    int diaAT, mesAT, anoAT;

public:
    Principal();
    ~Principal();

    void Inicializa();
    void InicializaAlunos();
    void InicializaProfessores();
    void InicializaUniversidades();
    void InicializaDepartamentos();
    void InicializaDisciplinas();

    void ListaIdades();
    void ListaUnivs();
    void ListaDptos();
    void ListaDisc();

    void DataSistema();
    void Executar();
};

#endif
