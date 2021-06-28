#include "Professor.h"

Professor::Professor():
//Especificar que vai adotar os parâmetros da construtora da classe base
Pessoa(){
    pDptoFiliado = NULL;
    pUnivFiliado = NULL;
}
Professor::Professor(int diaNa, int mesNa, int anoNa, string nome): 
//Coletará os valores da construtora da classe base
Pessoa (diaNa, mesNa, anoNa, nome) {
    pDptoFiliado = NULL;
    pUnivFiliado = NULL;
}
Professor::~Professor(){
    pDptoFiliado = NULL;
    pUnivFiliado = NULL;    
}

//Atribui endereços para os respectivos ponteiros das classes associadas.
void Professor::setUnivFiliado(Universidade* pu){
    pUnivFiliado = pu;
}
void Professor::setDepFiliado(Departamento* pd){
    pDptoFiliado = pd;
}
void Professor::qualUniTrabalho(){
    cout << nomeP << " trabalha para a " 
         << pUnivFiliado->getNome() << ".\n"; 
}
void Professor::qualDepTrabalho(){
    cout << nomeP << " trabalha no " 
         << pDptoFiliado->getNome() << ".\n";
}