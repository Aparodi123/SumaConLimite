#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

/*
[]Crear 2 variables, una que contenga el valor que ingrese el usuario para asignar un limite de suma y otra para guardar el resultado.Ambas tipo "int".
[]Pedir al usuario el ingreso del numero limite que guardare en variable num.
[]Crear un bucle que inicie en 1 hasta el valor de la variable que contine el dato ingresado por el usuario.
[]Definir variable de resultado, asignarle como valor, misma variable sumado al valor de la variable en bucle.
[]Mostrar resultado por pantalla.
*/


using namespace std;

int main(){

int res;
int num;
cout << "numero: ";
cin >> num;

for(int i=0;i<=num;i++){

res=res+i;

}
cout << "La suma de los nummeros solicitados es de: " << res;
return 0;
}
