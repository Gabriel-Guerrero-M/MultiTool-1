#include <iostream>
#include <cmath>
using namespace std;


void aritmetica();
void suma();
void resta();
void multi();
void divi();
void modulo();
void tablaM();
void areaC();
void mantenerM();
void mayornum();
void geometria();
void promedio();
void mantenerP();
void hipotenusa();
void potencia();
void sqroot();

int opcionP = 0;

int main(){
system("clear");
cout<<"Qauntum Leap Minerals | en desarrollo \n";
cout<<"********************************************************************************* \n";
cout<<"                                  QL Obsidian \n";
cout<<"********************************************************************************* \n";
cout<<"                                     PAGINAS                                      \n";
cout<<"                         1-Aritmetics      2-Geometry \n  -1 para terminar \n";
cin>>opcionP;

if(opcionP == 1){
	aritmetica();
	}
if(opcionP == 2){
	geometria();
	}
if(opcionP == -1){
	system("clear");
	}


}

void aritmetica(){
	
	system("clear");
	cout<<"	                               Aritmetics \n";
	cout<<"1-Suma \n";
	cout<<"2-Resta \n";
	cout<<"3-Multiplicacion \n";
	cout<<"4-Division \n";
	cout<<"5-Modulo \n";
	cout<<"6-Tabla de Multiplicar \n";
	cout<<"7-El Numero Mayor de 3 Numeros \n";
	cout<<"8-Para el promedio de NUmeros \n";
	cout<<"9-la potencia de n \n";
	cout<<"10-La Raiz Quadrada \n";
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
		case 7:mayornum();
	switch(opcionP)
		case 8:promedio();
	switch(opcionP)
		case 9:potencia();
	switch(opcionP)
		case 10: sqroot();
	}
	
void geometria(){
	system("clear");
	cout<<"                         Geometry \n";
	cout<<"1-Area de un Circulo \n";
	cout<<"2-Hipotenusa \n";
	cout<<"EN MANTENIMIENTO \n";
	cout<<"-1 - Para ir atras \n";
	cin>>opcionP;
	switch(opcionP)
		case 1: areaC();
	switch(opcionP)
	case 2: hipotenusa();
	switch(opcionP)
		case -1: main();
	}

void suma(){
	system("clear");
	double resultado, num1, num2;
	cout<<"Ingresa el Primer numero: ";
	cin>>num1;
	cout<<"Ingresa el Segundo numero:";
	cin>>num2;
	resultado = num1 + num2;
	cout<<"La respuesta es: "<<resultado<<endl;
	mantenerM();
	}
	
void resta(){
	system("clear");
	double resultado, num1, num2;
	cout<<"Ingresa el Primer numero: ";
	cin>>num1;
	cout<<"Ingresa el Segundo numero:";
	cin>>num2;
	resultado = num1 - num2;
	cout<<"La respuesta es: "<<resultado<<endl;
	mantenerM();
	}
	
void multi(){
	system("clear");
	double resultado, num1, num2;
	cout<<"Ingresa el Primer numero: ";
	cin>>num1;
	cout<<"Ingresa el Segundo numero:";
	cin>>num2;
	resultado = num1 * num2;
	cout<<"La respuesta es: "<<resultado<<endl;
	mantenerM();
	}
	
void divi(){
	system("clear");
	double resultado, num1, num2;
	cout<<"Ingresa el Primer numero: ";
	cin>>num1;
	cout<<"Ingresa el Segundo numero:";
	cin>>num2;
	resultado = num1 / num2;
	cout<<"La respuesta es: "<<resultado<<endl;
	mantenerM();
}

void modulo(){
	system("clear");
int resultado, num1, num2;
	cout<<"Ingresa el Primer numero: ";
	cin>>num1;
	cout<<"Ingresa el Segundo numero:";
	cin>>num2;
	resultado = num1 % num2;
	cout<<"La respuesta es: "<<resultado<<endl;
	mantenerM();
	}
	
void tablaM(){
	system("clear");
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
mantenerM();
	}
	
void areaC(){
	system("clear");
int radio;
const double PI=3.14159265359;
double result;
cout<<"Dame el Radio: \n";
cin>>radio;
result = PI *(radio * radio);
cout<<"El resultado es: \n";
cout<<result<<endl;
mantenerP();
	}
	
void mayornum(){
	system("clear");
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
mantenerM();
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
    mantenerM();
}

void mantenerM(){
	int seguir;
	cout<<"Volver (1/SI  -1/NO)";
	cin>>seguir;
	if(seguir == 1){
		cout<<"1-Menu \n";
		cout<<"2-Aritmetics \n";
		cin>>seguir;
		if(seguir == 1){
			main();
			}
		if(seguir == 2){
			aritmetica();
			}
		}
	if(seguir == -1){
		cout<<"Cerrando Programa";
		system("clear");
		}
	}
	
void hipotenusa(){
	system("clear");
double c, a, b, d;
cout<<"Basado en c2 = a2 + b2 \n";
cout<<"Ingresa porfa A ";
cin>>a;
cout<<"Ingresa B ";
cin>>b;
a = pow(a,2);
cout<<"A elevado a la dos es: "<<a<<endl;
b = pow(b,2);
cout<<"B elevado a la dos es: "<<b<<endl;
d = a + b;
cout<<"Y a + b: "<<d<<endl;
 c = sqrt(d);
cout<<"Y despues calculamos la raiz cuadrada de "<<d<<" que es: "<<c<<endl;
cout<<"La hipotenusa es de: "<<c<<endl;
mantenerP();
}

void potencia(){
	system("clear");
double x, n;
cout<<"Ingresa a x (el numero base) \n";
cin>>x;
cout<<"Ingresa n (el elevador) \n";
cin>>n;
x = pow(x,n);
cout<<"El resultado es: "<<x<<endl;
mantenerP();
}

void sqroot(){
	double x,r;
cout<<"Ingresa el valor a calcular: ";
cin>>x;
r = sqrt(x);
cout<<"El resultado es: "<<r<<endl;
mantenerM();
}

	
void mantenerP(){
	int seguir;
	cout<<"Volver (1/SI  -1/NO)";
	cin>>seguir;
	if(seguir == 1){
		cout<<"1-Menu \n";
		cout<<"2-Geometria \n";
		cin>>seguir;
		if(seguir == 1){
			main();
			}
		if(seguir == 2){
			geometria();
			}
		}
	if(seguir == -1){
		cout<<"Cerrando Programa";
		system("clear");
		}
	}
