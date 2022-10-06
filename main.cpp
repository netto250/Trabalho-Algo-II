
#include <iostream>
using namespace std;
#include <locale.h>
#include "A.h"

int main() {
  agenda<comercial,100> ag1;
  int dado;
  
  inicializa_agenda(ag1);

  cout<<"Digite uma função:\n";
  cin>>dado;

    insere(ag1);
  
}