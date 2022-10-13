template <typename TIPO, int MAX>
  struct agenda {
    TIPO itens[MAX];
    int quantidade;
};

// Inicializa a agenda. Inicializações: Define que agenda está sem nenhum item
template <typename TIPO, int MAX>
void inicializa_agenda(agenda <TIPO,MAX> &ag) {
  ag.quantidade = 0;
}

// insere o item na agenda (protótipo)
// Retorna true caso consiga inserir o dado na agenda, false caso contrário
template <typename TIPO, int MAX>
bool insere(agenda <TIPO,MAX> &ag, TIPO dado) {
    ag.itens[ag.quantidade]=dado;
    ag.quantidade++;
    return true;
}

void remover(agenda <TIPO,MAX> &ag,int ID_pesquisa){
    for(int i=0;i<ag.quantidade;i++){
        cout<<"\n\n"<<ag.itens[i].CPF;
        cout<<"\n"<<ag.itens[i].nome;
        cout<<"\n"<<ag.itens[i].ID;
        cout<<"\n"<<ag.itens[i].cel
    }
}

template <typename TIPO, int MAX>
void imprime(agenda <TIPO,MAX> &ag) {
  int i=0;
  for(i=0;i<ag.quantidade;i++){
    cout<<"\n\n"<<ag.itens[i].CPF;
    cout<<"\n"<<ag.itens[i].nome;
    cout<<"\n"<<ag.itens[i].ID;
    cout<<"\n"<<ag.itens[i].cel<<"\n\n";
  }
}

#endif
