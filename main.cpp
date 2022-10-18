#include <iostream>
using namespace std;
#include <locale.h>
#include "Bagenda.h"
#define MAX 100

struct pessoal {
    int ID;
    long long cel,CPF;
    string nome;
};

struct comercial {
    int ID;
    long int tel, CNPJ;
    string nome;
};

int tipo_contato(string tipo_operacao){ //SELECIONA QUAL AGENDA INSERIR O CONTATO
  int tipo_contato;

  while(true){
    cout<< "_________________________________________________________________";
    cout << "\n|\t\Qual tipo de contato você deseja "<<tipo_operacao<<"?  \t\t|";
    cout<< "\n|\t\t\t1 - Pessoal\t\t\t\t|";
    cout<< "\n|\t\t\t2 - Comercial\t\t\t\t|";
    cout<< "\n|_______________________________________________________________|\n";
    cin >> tipo_contato;
    if(tipo_contato==1){
      return 1;
    }
    if(tipo_contato==2){
      return 2;
    }
  }
}

int tipo_pesquisa(){ //SELECIONA QUAL DADO A SER PESQUISADO
  int tipo_pesquisa;

  while(true){
    cout<< "__________________________________________";
    cout << "\n|   Qual tipo de pesquisa você deseja ? |";
    cout<< " \n|\t\t1 - ID     \t\t |";
    cout<< " \n|\t\t2 - Nome      \t\t |\n";
    cout<< "|________________________________________|\n";
    cin >> tipo_pesquisa;
    if(tipo_pesquisa==1){
      return 1;
    }
    if(tipo_pesquisa==2){
      return 2;
    }
  }
}

istream & operator >> (istream & in,pessoal &ag){//SOBRECARGA PARA INSERIR PESSOAL
  cout << "Insira o ID: ";
  in >> ag.ID;
  cout << "Insira o CPF: ";
  in >> ag.CPF;
  cout << "Insira o nome: ";
  in >> ag.nome;
  cout << "Insira o celular: ";
  in >> ag.cel;
  return in;
}

istream & operator >> (istream & in,comercial &ag){//SOBRECARGA PARA IMPRIMIR COMERCIAL
  cout << "Insira o ID: ";
  in >> ag.ID;
  cout << "Insira o CNPJ: ";
  in >> ag.CNPJ;
  cout << "Insira o nome: ";
  in >> ag.nome;
  cout << "Insira o telefone: ";
  in >> ag.tel;
  return in;
}

ostream & operator << (ostream & out,pessoal &ag){//SOBRECARGA PARA IMPRIMIR PESSOAL
  cout << "\nID: ";
  out << ag.ID;
  cout << "\nCPF: ";
  out << ag.CPF;
  cout << "\nnome: ";
  out << ag.nome;
  cout << "\ncelular: ";
  out << ag.cel;
  cout<<endl;
  return out;
}

ostream & operator << (ostream & out,comercial &ag){//SOBRECARGA PARA IMPRIMIR COMERCIAL
  cout << "\nID: ";
  out << ag.ID;
  cout << "\nCNPJ: ";
  out << ag.CNPJ;
  cout << "\nNome: ";
  out << ag.nome;
  cout << "\nTelefone: ";
  out << ag.tel;
  cout<<endl;
  return out;
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    agenda<pessoal,MAX> ag1;
    agenda<comercial,MAX> ag2;
    int max_pessoal, max_comercial;
    int operacao;
    inicializa_agenda(ag1);
    inicializa_agenda(ag2);
    string tipo_operacao;

    do {
      //system("cls");
      cout<< " ________________________________________";
      cout<< "\n|\t\t\t\t\t|";
      cout << "\n|\tSelecione uma operação:\t|";
      cout<< "\n|\t1 - Inserir item\t\t|";
      cout<< "\n|\t2 - Remover item\t\t|";
      cout<< "\n|\t3 - Pesquisar\t\t\t|";
      cout<< "\n|\t4 - Ordenar agenda\t\t|";
      cout<< "\n|\t5 - Mostrar todos os itens\t|";
      cout<< "\n|\t6 - Encerrar\t\t\t|";
      cout<< "\n|_______________________________________|\n";
      cin >> operacao;

      switch(operacao) {  //ESCOLHE A OPERAÇÃO A SER REALIZADA

      case 1:  //OPERAÇÃO DE INSERÇÃO
        tipo_operacao="inserir";

        if(tipo_contato(tipo_operacao)==1){  //INSERIR TIPO PESSOAL
          pessoal ag_temp1;
          cin>>ag_temp1;
          insere(ag1, ag_temp1);
        }
        else{ // INSERE TIPO COMERCIAL
          comercial ag_temp2;
          cin>>ag_temp2;
          insere(ag2, ag_temp2);
        }
        break;
//-----------------------------------------------------------------------------------
        case 2: //OPERAÇÃO DE REMOÇÃO
          int ID_pesquisa;
          tipo_operacao="remover";

          if(tipo_contato(tipo_operacao)==1){  //REMOVE TIPO PESSOAL
            pessoal ag_temp1;

            cout<<"Digite o ID a ser removido: ";
            cin>>ID_pesquisa;
          }
          else{ // REMOVE TIPO COMERCIAL
            comercial ag_temp2;

            cout<<"Digite o ID a ser excluído: ";
            cin>>ID_pesquisa;

            ag_temp2.ID=0;
            ag_temp2.CNPJ=0;
            ag_temp2.nome="";
            ag_temp2.tel=0;
            remove(ag2,ID_pesquisa,ag_temp2);
          }
        break;
//-------------------------------------------------------------------------------------------
        case 3:  //OPERAÇÃO DE PESQUISA
        {
        tipo_operacao="pesquisar";
        int id=0;
        string nome="";

        if(tipo_contato(tipo_operacao)==1){  //PESQUISA TIPO PESSOAL
          if(tipo_pesquisa()==1){
            cout<<"Digite o ID: ";
            cin>>id;
            pesquisa(ag1,id,nome);
          }
          else{
            cout<<"Digite o nome: ";
            cin>>nome;
            pesquisa(ag1,id,nome);
          }
        }
        else{ //PESQUISA TIPO COMERCIAL
          if(tipo_pesquisa()==1){
            cout<<"Digite o ID: ";
            cin>>id;
            pesquisa(ag2,id,nome);
          }
          else{
            cout<<"Digite o nome: ";
            cin>>nome;
            pesquisa(ag2,id,nome);
          }
        }
        break;
        }
//--------------------------------------------------------------------------------------------
        case 4:

        break;

        case 5:
          tipo_operacao="imprimir";
          if(tipo_contato(tipo_operacao)==1){  //IMPRIMI TIPO PESSOAL
            cout<<"\nAgenda Pessoal:\n";
            imprime(ag1);
          }
          else{
            cout<<"\nAgenda Comercial:\n";
            imprime(ag2);
          }
        break;
        }
    }
   while(operacao != 6);

    return 0;
}
