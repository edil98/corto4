#include<iostream>

using namespace std;
int main(){
	char nombre[20];//seda la cantidad de estudiantes que se pueden verificar la nota
	char opcion[3];
	float nota1, nota2, nota3, nota4, nota5, nota_final=0;
do {	
	cout<<("Ingrese nombre del alumno: ");
        cin>>("%s", nombre);
	
	cout<<"digite nota1:"; cin>>nota1;
	cout<<"digite nota2: "; cin>>nota2;
	cout<<"digite nota3: "; cin>>nota3;
	cout<<"digite nota4: "; cin>>nota4;
	cout<<"digite nota5: "; cin>>nota5;
	
	nota1*= 0.20;
	nota2*= 0.20;
	nota3*= 0.20;
	nota4*= 0.20;
	nota5*= 0.20;
	
	nota_final= nota1+nota2+nota3+nota4+nota5;
	
	if (nota_final>= 6){
		cout<<"el estudiante aprobo";
	}
	else{
		cout<<"el estudiante repobro/n";
	
	}
	 cout<<("Desea calcular mas promedios (si/no)? ");
        cin>>("%s", opcion);
      } while  (opcion[0] == 's' || opcion[0] == 'S');
	return 0;
}
