
#include <iostream>
using namespace std;
#include <locale.h>
#include "A.h"

struct pessoal{
  int cel, ID;
  long int CPF;
  string nome;
};

struct comercial{
  int ID, tel;
  long int CNPJ;
  string nome_emp;
};

int main(){
  agenda<pessoal,100> ag1;
  agenda<comercial,100> ag2;
  int opcao;

  cout<<"Vc quer qual agenda ?";
  cout<<"";
  while(opcao != 6){
    switch(opcao) {
      case 1:
        
    }
  }
  /*agenda<pessoal,100> ag1;
  int dado;
  
  //inicializa_agenda(ag1);

  cout<<"Digite uma função:\n";
  cin>>dado;

  cout<<"Digite uma CPF:\n";
  cin>>ag1.itens[0].CPF;

  cout<<endl<<ag1.itens[0].CPF;

    //insere(ag1);*/
  
}
