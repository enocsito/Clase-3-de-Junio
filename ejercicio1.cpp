#include <iostream>
using namespace std;

int suma(int entero1, int entero2){
    int resultado=0;
    resultado = (entero1 +entero2);
    return resultado;
}
int resta(int entero1, int entero2){
    int resultado=0;
    resultado = (entero1 -entero2);
    return resultado;
}
int pro(int entero1, int entero2){
    int resultado=0;
    resultado = (entero1*entero2);
    return resultado;
}
int coc(int entero1, int entero2){
    int resultado=0;
    resultado = (entero1/entero2);
    return resultado;
}

int main(){
    int n1=0, n2=0, r=0, r2=0, r3=0, r4=0;
    n1 = 8;
    n2 = 6;

    r=suma(n1,n2);
    r2=resta(n1,n2);
    r3=pro(n1,n2);
    r4=coc(n1,n2);

    cout << "El valor de la suma de dos numeros es: "<< r << endl;
    cout << "El valor de la resta de dos numeros es: "<< r2 << endl;
    cout << "El valor del producto de dos numeros es: "<< r3 << endl;
    cout << "El valor del cociente de dos numeros es: "<< r4 << endl;


    return 0;

}