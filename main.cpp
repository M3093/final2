//Programa de facturación// 
#include <iostream>
#include <string>
using namespace std;

// Declaración de variables// 
  float consumo;
  char palabra [50]; 
  int horas;
  int watts;
  

int main() 
 
{

    string luz1[] = {"Luz exterior"};
    string camara1[] = {"Camara exterior"};
    string luz2[] = {"Luz interior"};

   cout << " Nombre del dispositivo IOT: " <<endl;
   cin>>palabra;
   cout<<"Tipo: "<<endl;
   cin>>palabra;
   cout<<"Consumo:"<<consumo << "watts"<<endl;
   cin>>consumo;
  
   cout << "__________________________ " <<endl;

  cout << "  Tiempo de dispositivo IOT: " <<endl;
  cin>>horas;
  cout << "__________________________ " <<endl;

  watts=(horas*consumo);
  cout << "  Consumo total de dispositivo IOT: " <<watts<<endl;
    return 0;
    }