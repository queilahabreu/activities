#include <iostream>
using namespace std;
int main() {
  int horainicial, minutoinicial, horafinal, minutofinal;
  int contagemhora=0, contagemminuto=0;
cout<<"Digite a hora inicial: \n";
cin>>horainicial;

cout<<"Digite o minuto inicial: \n";
cin>>minutoinicial;

cout<<"Digite a hora final: \n";
cin>>horafinal;

cout<<"Digite o minuto final: \n";
cin>>minutofinal;


for(int x = horainicial; x < horafinal; x++){
  contagemhora++;
}

for(int y = minutoinicial; y < minutofinal; y++){
  contagemminuto++;
}

if(horainicial == horafinal){
  contagemhora=24;
}

if(minutoinicial == minutofinal){
contagemminuto=0;

}

if(horainicial == horafinal - 1 && minutoinicial == minutofinal + 1 ){
  contagemhora= 0;
  contagemminuto=59;

}

cout<<"O JOGO DUROU "<<contagemhora<< " HORA(S) E "<<contagemminuto<<" MINUTO(S).";


}