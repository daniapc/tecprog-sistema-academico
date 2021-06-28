#include "Pessoa.h"

//Method de atribuição inicial do objeto
Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, string nome){
    //Chama a variável inicializadora para realizar as attributes
    Inicializa(diaNa, mesNa, anoNa, nome);
}
Pessoa::Pessoa(){
    Inicializa(0, 0, 0, "");
}
Pessoa::~Pessoa(){
}

void Pessoa::Inicializa(int diaNa, int mesNa, int anoNa, string nome){
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    idadeP = -1;
    nomeP = nome;
}
//Method que calcula a idade dada a data atual
void Pessoa::CalcIdade(int diaAt, int mesAt, int anoAt){
    //No geral, a idade é calculada pelo ano atual menos o de nascimento. 
    idadeP = anoAt - anoP;
    //A idade é incrementada: caso o mês atual for menor, ou o mês atual for igual com dia atual menor.
    if (mesP > mesAt || (mesP == mesAt && diaP > diaAt)) //Incluí parenteses em 25/06)
        idadeP--;
}
//Method que imprime o nome do objeto e a idade calculada anteriormente.
void Pessoa::printIdade(){
    cout << nomeP << " teria " 
         << idadeP << " anos de idade.\n";
}
//Chama os dois methods separadamente para evitar aclopamento
void Pessoa::CalcPrintIdade(int diaAt, int mesAt, int anoAt){
    CalcIdade(diaAt, mesAt, anoAt);
    printIdade();
}
