#include <iostream>
using namespace std;


void pagMath();
void suma();
void resta();
void multi();
void divi();
void modulo();
void tablaM();
void areaC();
void mantener();
void mayornum();
void pagC();
void promedio();

int opcionP = 0;

int main(){
system("clear");
cout<<"Qauntum Leap Minerals | en desarrollo \n";
cout<<"********************************************************************************* \n";
cout<<"                                  QL Obsidian \n";
cout<<"********************************************************************************* \n";
cout<<"                                     PAGINAS                                      \n";
cout<<"                              1-Math      2-Science \n";
cin>>opcionP;

if(opcionP == 1){
	pagMath();
	}
if(opcionP == 2){
	pagC();
	}


}

void pagMath(){
	
	system("clear");
	cout<<"	                               MATH \n";
	cout<<"1-Suma \n";
	cout<<"2-Resta \n";
	cout<<"3-Multiplicacion \n";
	cout<<"4-Division \n";
	cout<<"5-Modulo \n";
	cout<<"6-Tabla de Multiplicar \n";
	cout<<"7-Area de Un Circulo \n";
	cout<<"8-El Numero Mayor de 3 Numeros \n";
	cout<<"9-Para el promedio de NUmeros \n";
	cout<<"-1 Para Volver \n";
	cin>>opcionP;
	switch(opcionP)
		case 1: suma();
	switch(opcionP)
		case 2: resta();
	switch(opcionP)
		case 3: multi();
	switch(opcionP)
		case 4: divi();
	switch(opcionP)
		case 5: modulo();
	switch(opcionP)
		case 6: tablaM();
	switch(opcionP)
		case -1 : main();
	switch(opcionP)
		case 7:areaC();
	switch(opcionP)
		case 8:mayornum();
	switch(opcionP)
		case 9:promedio();
	}
	
void pagC(){
	cout<<"Hello World";
	}

void suma(){
	double resultado, num1, num2;
	cout<<"Ingresa el Primer numero: ";
	cin>>num1;
	cout<<"Ingresa el Segundo numero:";
	cin>>num2;
	resultado = num1 + num2;
	cout<<"La respuesta es: "<<resultado<<endl;
	mantener();
	}
	
void resta(){
	double resultado, num1, num2;
	cout<<"Ingresa el Primer numero: ";
	cin>>num1;
	cout<<"Ingresa el Segundo numero:";
	cin>>num2;
	resultado = num1 - num2;
	cout<<"La respuesta es: "<<resultado<<endl;
	mantener();
	}
	
void multi(){
	double resultado, num1, num2;
	cout<<"Ingresa el Primer numero: ";
	cin>>num1;
	cout<<"Ingresa el Segundo numero:";
	cin>>num2;
	resultado = num1 * num2;
	cout<<"La respuesta es: "<<resultado<<endl;
	mantener();
	}
	
void divi(){
	double resultado, num1, num2;
	cout<<"Ingresa el Primer numero: ";
	cin>>num1;
	cout<<"Ingresa el Segundo numero:";
	cin>>num2;
	resultado = num1 / num2;
	cout<<"La respuesta es: "<<resultado<<endl;
	mantener();
}

void modulo(){
int resultado, num1, num2;
	cout<<"Ingresa el Primer numero: ";
	cin>>num1;
	cout<<"Ingresa el Segundo numero:";
	cin>>num2;
	resultado = num1 % num2;
	cout<<"La respuesta es: "<<resultado<<endl;
	mantener();
	}
	
void tablaM(){
	int ent;
	cout<<"Ingresa el entero que deseas hacer la tabla de multiplicar \n";
cin>>ent;

system("clear");
cout<<"Aqui te VA! \n";
cout<<"1 * "<<ent<<" = "<< 1 * ent <<endl;
cout<<"2 * "<<ent<<" = "<< 2 * ent <<endl;
cout<<"3 * "<<ent<<" = "<< 3 * ent <<endl;
cout<<"4 * "<<ent<<" = "<< 4 * ent <<endl;
cout<<"5 * "<<ent<<" = "<< 5 * ent <<endl;
cout<<"6 * "<<ent<<" = "<< 6 * ent <<endl;
cout<<"7 * "<<ent<<" = "<< 7 * ent <<endl;
cout<<"8 * "<<ent<<" = "<< 8 * ent <<endl;
cout<<"9 * "<<ent<<" = "<< 9 * ent <<endl;
cout<<"10 * "<<ent<<" = "<< 10 * ent <<endl;
mantener();
	}
	
void areaC(){
int radio;
double pi=3.14159265359, result;
cout<<"Este es un programa en C++ que calcula \n El Area de un Circulo \n";
cout<<"Dame el Radio: \n";
cin>>radio;
result = pi *(radio * radio);
cout<<"El resultado es: \n";
cout<<result;
mantener();
	}
	
void mayornum(){
	int num1, num2,num3;
	
cout<<"Este programa diseñado en C++ te dice que numero es mas grande \n";
cout<<"Ingresa el Primer Numero: ";
cin>>num1;
cout<<"Ingresa el Segundo Numero: ";
cin>>num2;
cout<<"Ingresa el Tercer Numero: ";
cin>>num3;

if (num1 > num2 and num1 > num3){
	cout<<"El numero mas Grande Fue:"<<num1<<endl;
	}
else if (num2 > num1 and num2 > num3){
	cout<<"El numero mas grande fue:"<<num2<<endl;
	}
else if (num3 > num1 and num3 > num2){
	cout<<"En numero mas grande fue:"<<num3<<endl;
	}
mantener();
	}
	
void promedio() {
	system("clear");
    int notas;
    int contador = 0; 
    double suma = 0;   
    double promedio;

    std::cout << "Programa para calcular el promedio de números (-1 para finalizar).\n";

    do {
        std::cout << "Ingresa el Numero: ";
        std::cin >> notas;

        if (notas != -1) { 
            suma += notas;
            contador++;
        }
    } while (notas != -1);

    if (contador > 0) { 
        promedio = suma / contador;
        std::cout << "El promedio es de: " << promedio << std::endl;
    } else {
        std::cout << "No se ingresaron números para calcular el promedio." << std::endl;
        
    }
    mantener();
}

void mantener(){
	int seguir;
	cout<<"Volver (1/SI  2/NO)";
	cin>>seguir;
	if(seguir == 1){
		cout<<"1-Menu \n";
		cout<<"2-Math \n";
		cin>>seguir;
		if(seguir == 1){
			main();
			}
		if(seguir == 2){
			pagMath();
			}
		}
	if(seguir == 2){
		cout<<"Cerrando Programa";
		system("clear");
		}
	}
