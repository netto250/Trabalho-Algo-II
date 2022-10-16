#define _Bagenda_

template <typename TIPO, int MAX>
  struct agenda {
    TIPO itens[MAX];
    int qtde;
};

// Inicializa a agenda. Inicializações: Define que agenda está sem nenhum item
template <typename TIPO, int MAX>
void inicializa_agenda(agenda <TIPO,MAX> &ag) {
  ag.qtde = 0;
}

// insere o item na agenda (protótipo)
// Retorna true caso consiga inserir o dado na agenda, false caso contrário
template <typename TIPO, int MAX>
bool insere(agenda <TIPO,MAX> &ag, TIPO dado) {
    ag.itens[ag.qtde]=dado;
    ag.qtde++;
    return true;
}

template <typename TIPO, int MAX>
void remove(agenda <TIPO,MAX> &ag,int ID_pesquisa, TIPO dado){
    for(int i=0;i<ag.qtde;i++){
      if(ag.itens[i].ID==ID_pesquisa){
        ag.itens[i]=dado;
      }
    }
}

template <typename TIPO, int MAX>
void imprime(agenda <TIPO,MAX> &ag) {
  for(int i=0;i<ag.qtde;i++){
    cout<<ag.itens[i];
    }
}

template <typename TIPO, int MAX>
void pesquisa(agenda <TIPO,MAX> &ag,int id,string nome){
  for(int i=0;i<ag.qtde;i++){
    if(id==0){
      if(ag.itens[i].nome==nome){
        cout<<ag.itens[i];
      }
    }
    else{
      if(ag.itens[i].ID==id){
        cout<<ag.itens[i];
      }
    }
  }   
}
