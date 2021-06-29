#include "Principal.h"

Principal::Principal()
//Aloca a memória desses objetos para que o compilador não faça isso automaticamente.
{
    DataSistema();

    Inicializa();

    Executar();
}

Principal::~Principal(){
    //Destrutora. Fica em branco mesmo pois é desalocado o espaço.
}

void Principal::DataSistema(){
    //Variável para guardar o tempo de calendário, e geralmente corresponde ao número de segundos decorridos desde as 00 horas do dia 1 de Janeiro de 1970 
    time_t currentTime;
    //Pega a data atual, em segundos de acordo com o relógio Unix, a partir do relógio do sistema. Guarda esse valor no parametro passado
    time(&currentTime);
    //Ponteiro "local" é do tipo struct tm, que contem data e hora. A função converte um valor time t para uma estrutura tm, igual ao relógio local.
    struct tm *local = localtime(&currentTime);
    //Retornando datas
    diaAT = local->tm_mday;
    mesAT = local->tm_mon + 1;     //Necessário acrescentar 1
    anoAT = local->tm_year + 1900; //Necessário acrescentar 1900
}

void Principal::Inicializa(){
    InicializaAlunos();
    InicializaProfessores();

    InicializaUniversidades();
    InicializaDepartamentos();
    InicializaDisciplinas();
}
void Principal::InicializaAlunos(){
    //Inicializa Alunos
    Daniel.Inicializa (8, 11, 2002, "Daniel");
    Lucas.Inicializa  (17, 12, 2002, "Lucas");
    Mint.Inicializa   (10, 06, 2002, "Anna Julia");
    //Atribui RAs
    Daniel.setRa (2240246);
    Lucas.setRa  (2131231);
    Mint.setRa   (5252341);

    /*Problema inicial devidamente corrigido implementando-se a classe Elemento Aluno*/
    Mint.setDisc (&Fisica_1);
    Lucas.setDisc (&Fisica_1);  //Lucas não será mais apagado sz
    Daniel.setDisc (&Fisica_1);
    Mint.setDisc (&Est_Dados_1);  
    Daniel.setDisc (&Est_Dados_1);
    Daniel.setDisc (&Tec_Prog);
    Lucas.setDisc  (&Fund_Prog);
}
void Principal::InicializaProfessores(){
    //Inicializa Professores
    Einstein.Inicializa (14, 3, 1879, "Einstein");
    Newton.Inicializa   (4, 1, 1643, "Newton");
    Simao.Inicializa    (5, 12, 1965, "Simao");
    Robocop.Inicializa  (1, 1, 1975, "Robopoc");
    //Sempre adicionar endereço de memória na hora de setar.
    Einstein.setUnivFiliado (&Princeton);
    Newton.setUnivFiliado   (&Cambridge);
    Simao.setUnivFiliado    (&Utfpr); 
    Robocop.setUnivFiliado  (&Utfpr);
    //Associa as pessoas aos departamentos
    Einstein.setDepFiliado  (&Fisica_Princeton);
    Newton.setDepFiliado    (&Fisica_Cambridge);
    Simao.setDepFiliado     (&Informatica);   
    Robocop.setDepFiliado   (&Eletronica);   
}
void Principal::InicializaUniversidades(){
    //Atribuir nomes para tais Universidades.
    Utfpr.setNome       ("UTFPR");
    Cambridge.setNome   ("Cambridge University");
    Princeton.setNome   ("Princeton University");
    //Agrega os departamentos às universidades, não mais necessário por conta do uso do this

}
void Principal::InicializaDepartamentos(){
    //Atribuir nomes para tais Departamentos.
    Fisica_Princeton.setNome    ("Departamento de Fisica de Princeton");
    Fisica_Cambridge.setNome    ("Departamento de Fisica de Cambridge");
    Informatica.setNome         ("Departamento de Informatica");
    Eletronica.setNome          ("Departamento de Eletronica");

    Fisica_Princeton.setUniv (&Princeton);
    Informatica.setUniv      (&Utfpr);
    Eletronica.setUniv       (&Utfpr);
}
void Principal::InicializaDisciplinas(){
    //Atribui nomes para tais Disciplinas
    Fisica_1.setNome("Fisica Teorica 1");
    Tec_Prog.setNome("Tecnicas de Programacao");
    Est_Dados_1.setNome("Estrutura de Dados 1");
    Fund_Prog.setNome("Fundamentos da Programacao");    
    Circ_Elet.setNome("Circuitos Eletricos");

    //Cada disciplina irá reconhecer seu respectivo departamento
    /*Fisica_1.setDpto(&Fisica);*/
    Tec_Prog.setDpto   (&Informatica);
    Est_Dados_1.setDpto(&Informatica);
    Fund_Prog.setDpto  (&Informatica);
    Circ_Elet.setDpto  (&Eletronica);
}

void Principal::ListaIdades(){
    Einstein.CalcPrintIdade (diaAT, mesAT, anoAT);
    Newton.CalcPrintIdade   (diaAT, mesAT, anoAT);
    Simao.CalcPrintIdade    (diaAT, mesAT, anoAT);
    Robocop.CalcPrintIdade  (diaAT, mesAT, anoAT);
    
    Lucas.CalcPrintIdade    (diaAT, mesAT, anoAT);
    Mint.CalcPrintIdade     (diaAT, mesAT, anoAT);
    Daniel.CalcPrintIdade   (diaAT, mesAT, anoAT);
}
void Principal::ListaUnivs(){
    Einstein.qualUniTrabalho();
    Newton.qualUniTrabalho();
    Simao.qualUniTrabalho();
    Robocop.qualUniTrabalho();
}
void Principal::ListaDptos(){
    Einstein.qualDepTrabalho();
    Newton.qualDepTrabalho();
    Simao.qualDepTrabalho();
    Robocop.qualDepTrabalho();

    Utfpr.listaDeptos();
    Princeton.listaDeptos();
}
void Principal::ListaDisc(){
    Informatica.listarDisc();
    //Informatica.listarDisc2();
    Eletronica.listarDisc();

    //Fund_Prog.listarAluno();
    //Tec_Prog.listarAluno();
    Fisica_1.listarAluno();
    Est_Dados_1.listarAluno();
    /*
    Output:
    Estudante Anna Julia de RA 5252341 se matriculou em Fisica Teorica 1.
    Estudante Lucas de RA 2131231 se matriculou em Fisica Teorica 1.
    Estudante Daniel de RA 2240246 se matriculou em Fisica Teorica 1.
    Estudante Anna Julia de RA 5252341 se matriculou em Estrutura de Dados 1.
    Estudante Daniel de RA 2240246 se matriculou em Estrutura de Dados 1.
    */
}

void Principal::Executar(){
    /*ListaIdades();
    cout << "\n";
    ListaUnivs();
    cout << "\n";
    ListaDptos();
    cout << "\n";*/
    ListaDisc();
}