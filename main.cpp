#include <iostream>
using namespace std;
#include <locale.h>
#include <windows.h>
#include "A.h"

#define MAX 100

struct pessoal {
    int ID;
    long long cel,CPF;
    string nome;
};

struct comercial {
    int ID, tel;
    long int CNPJ;
    string nome_emp;
};

int main() {
    setlocale(LC_ALL,"Portuguese");
    agenda<pessoal,100> ag1;
    agenda<comercial,100> ag2;
    int max_pessoal, max_comercial;
    int operacao;
    inicializa_agenda(ag1);
    inicializa_agenda(ag2);
    /*cout<<"Vc quer qual agenda ?";
    cout<<"";*/
    do {
        //system("cls");
        cout << "Selecione uma operação:\n1 - Inserir item\n2 - Remover item\n3 - Pesquisar\n4 - Ordenar agenda\n5 - Mostrar todos os itens\n6 - Encerrar\n";
        cin >> operacao;

        switch(operacao) {
        case 1:
            int tipo_contato;
            cout << "Qual tipo de contato você deseja inserir? 1 - Pessoal\t2 - Comercial\n";
            cin >> tipo_contato;
            switch(tipo_contato) {
            case 1:

                pessoal ag_temp;
                cout << "Insira o ID: ";
                cin >> ag_temp.ID;
                cout << "Insira o CPF: ";
                cin >> ag_temp.CPF;
                cout << "Insira o nome: ";
                cin >> ag_temp.nome;
                cout << "Insira o celular: ";
                cin >> ag_temp.cel;
                insere(ag1, ag_temp);
                break;
            }
            break;

        case 2:
            int ID_pesquisa;
            cout<<"Digite 1 - Pessoal; 2 - Comercial: ";
            cin>>tipo_delete;
            switch(tipo_delete){
            case 1:
                pessoal ag_temp;
                    cin >> ag_temp.ID=0;
                    cin >> ag_temp.CPF=0;
                    cin >> ag_temp.nome=0;
                    cin >> ag_temp.cel=0;
                remover(ag1,ID_pesquisa);
            break;
            }

        case 5:
            imprime(ag1);
            break;


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
    while(operacao != 6);

    return 0;
}
