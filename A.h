#ifndef _A_H_
#define _A_H_

template <typename TIPO, int MAX>
  struct agenda {
    TIPO itens[MAX];
    int quantidade;
};

// Inicializa a agenda. Inicializações: Define que agenda está sem nenhum item
template <typename TIPO, int MAX>
bool inicializa_agenda(agenda <TIPO,MAX> &ag) {
  ag.quantidade = 0;
  return true;
};

// insere o item na agenda (protótipo)
// Retorna true caso consiga inserir o dado na agenda, false caso contrário
template <typename TIPO, int MAX>
void insere(agenda <TIPO,MAX> &ag1){
  
  if(ag1.itens[0].verif==true){
    insere_COM(ag1);
  }
  
  if(ag1.itens[0].verif==false){
    insere_COM(ag1);
  }
}

template <typename TIPO, int MAX>
void insere_COM(agenda <TIPO,MAX> &ag){
  {
    cout<<"digite o CNPJ";
    cin>>ag.itens[0].CNPJ;
    cout<<"digite o NOME";
    cin>>ag.itens[0].nome;
    cout<<"digite o TEL";
    cin>>ag.itens[0].tel;
    cout<<"digite o ID";
    cin>>ag.itens[0].ID;
  }
}

template <typename TIPO, int MAX>
void insere_PES(agenda <TIPO,MAX> &ag){
    cout<<"digite o CPF";
    cin>>ag.itens[0].CPF;
    cout<<"digite o NOME";
    cin>>ag.itens[0].nome;
    cout<<"digite o CEL";
    cin>>ag.itens[0].cel;
    cout<<"digite o ID";
    cin>>ag.itens[0].ID;
}

#endif
