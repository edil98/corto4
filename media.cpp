#include <iostream>
#include <cmath>

using namespace std;

int *sumatoria;// se declara un puntero

int main()
{
     float media= 0;
     int cantidad=25;
     float arriba;
     float abajo;
     
     
     
     
      cout<<"PROGRAMA PARA CALCULAR LA MEDIA ARITMETICA\n";
     cout<<"\ndigite 25 cantidades ";
     
     
     sumatoria =  new int[25];// se hace un arreglo solo con los valores necesarios
     
     for(int i= 0;i < cantidad;i++)
     {
        cout<<"Escribe el valor "<<i+1<<":";//se pide los datos comenzando desde el primero
        cin>>sumatoria[i];
    }
    
    for(int e = 0;e < cantidad;e++)
    {
         media = media + sumatoria[e];//se hace la sumatoria y se guarda los valores
    }
    
    media = media / cantidad;
    
    
    
    cout<<"La Media es: ";
    cout<<media<<endl;
    
    cout<<"arriba de la media"<<cantidad;
    cout<<"abajo de la media"<<cantidad;
    return 0;
}
