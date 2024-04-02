#include <iostream>
#include "bicicleta.h"
#include "edificio.h"
#include "vehiculo.h"
#include "IHuellaCarbono.h"

using namespace std;

int main()
{
  int Kilometros;
  int Calorias;
  int Energia;
  int Personal;
  int Kilometraje;
  int CantidadCB;

  IHuellaCarbono *ptr[3];

  Edificio *e = new Edificio;
  Vehiculo *v = new Vehiculo;
  Bicicleta *b = new Bicicleta;

  cout<<"\t Huellas de Carbono"<<endl;

  cout<<"-------------Edificio------------- "<<endl;
  cout<<"Ingrese el numero de personal: ";
  cin>>Personal;
  e->setPersonal(Personal);

  cout<<"Ingrese la energia consumida: ";
  cin>>Energia;
  e->setEnergia(Energia);
  ptr[0] = e;

  cout<<"\n-------------Vehiculo------------- "<<endl;
  cout<<"Ingrese el kilometraje del vehiculo: ";
  cin>>Kilometraje;
  v->setKilometraje(Kilometraje);

  cout<<"Ingrese la cantidad usada del combustible: ";
  cin>>CantidadCB;
  v->setCantidadCB(CantidadCB);
  ptr[1] = v;

  cout<<"\n-------------Bicicleta------------- "<<endl;
  cout<<"Ingrese el numeo de kilometros recorridos: ";
  cin>>Kilometros;
  b->setKm(Kilometros);

  cout<<"Ingrese la cantidad de calorias quemadas: ";
  cin>>Calorias;
  b->setCalorias(Calorias);
  ptr[2] = b;

  for(int i= 0; i<3; i++){
      ptr[i]->calculoHuellaCarbono();
  }

  cout<<"\n"<<endl;
  cout<<"\tDatos Almacenados"<<endl;
  cout<<e->ToString()<<"\n"<<endl;
  cout<<v->ToString()<<"\n"<<endl;
  cout<<b->ToString()<<"\n"<<endl;

  for(int i= 0; i < 3; i++){
      delete ptr[i];
  }

}
