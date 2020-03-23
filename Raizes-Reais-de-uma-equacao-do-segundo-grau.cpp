#include <iostream>
#include <iomanip>
#include <math.h>
       
       using namespace std;
       
 	int main() {
     int a, b, c;
     float x1, x2, delta;
  

    cout<<fixed<<setprecision(1);

  	   cout << "Vamos calcular as raízes reais de uma equação do segundo grau!! :) \n   Sendo ax² + bx + c = 0 \n Informe (respectivamente) o valor de a, b e c: \n" << endl;
        cin>>a>>b>>c;

      delta = sqrt((b*b) - (4*a*c)) ;

      x1 = (-b + delta) / (2 * a);

      x2 = (-b - delta) / (2 * a);



 if ( delta > 0 ){
        cout<<"\n Os valores são: \n x1 = "<<x1<<" e x2 = "<<x2;
         }

      else if(delta == 0){
        cout<<"\n x1 = x2 = "<<x1;

      }

      else{

        cout<<" \n Não há raízes reais.";
     }

  	   return 0;

 	}