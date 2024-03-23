#include <iostream>
using namespace std;
int
main ()
{
  int opmenu, opproducto, uni1 = 10, uni2 = 7, uni3 = 8, uni4 =
	2, opi, opcompra;
  float precio1 = 4200, precio2 = 2700, precio3 = 3800, precio4 = 6950;
//menu principal
  do
	{
	  cout <<
		"\n----------------------Productos----------------------" << endl;
	  cout <<
		"1) Coca-Cola de cafe  3) Doritos Dinamita\n2) Cheetos Naturales  4) Chocolatina Hershey's\n";
	  cout <<
		"\n1. Visualizar la informacion de los productos.\n2. Agregar dinero a la maquina.\n3. Comprar un producto.\n4. Salir"
		<< endl;
	  cin >> opmenu;
	  switch (opmenu)
		{
		case 1:
		  //visualizacion de la informacion de los productos
		  cout << "Que producto desea consultar?  ";
		  do
			{
			  cout <<
				"\n\n1-Coca Cola de cafe\n2-Cheetos Naturales\n3-Doritos Dinamita\n4-Chocolatina Hershey's\n5-Salir\n";
			  cin >> opproducto;
			  cout << endl;
			  switch (opproducto)
				{
				case 1:
				  //opcion 1. informacion coca cola
				  cout << "---------INFORMACION---------\n";
				  cout << "Coca-Cola de cafe\nPrecio:" << precio1 <<
					"\nUnidades disponibles" << uni1;
				  cout << "Desea continuar? (1 para si/0 para no)";
				  cin >> opi;
				  if (opi == 1)
					{
					  break;
					}
				  else
					{
					  opproducto = 5;
					  break;
					}
				case 2:
				  //opcion 2. informacion cheetos
				  cout << "---------INFORMACION---------\n";
				  cout << "Cheetos Naturales\nPrecio:" << precio2 <<
					"\nUnidades disponibles:" << uni2;
				  cout << "Desea continuar? (1 para si/0 para no)";
				  cin >> opi;
				  if (opi == 1)
					{
					  break;
					}
				  else
					{
					  opproducto = 5;
					  break;
					}
				case 3:
				  //opcion 3. informacion Doritos Dinamita
				  cout << "---------INFORMACION---------\n";
				  cout << "Doritos Dinamita\nPrecio:" << precio3 <<
					"\nUnidades disponibles:" << uni3;
				  cout << "Desea continuar? (1 para si/0 para no)";
				  cin >> opi;
				  if (opi == 1)
					{
					  break;
					}
				  else
					{
					  opproducto = 5;
					  break;
					}
				case 4:
				  //opcion 4. informacion Hershey's
				  cout << "---------INFORMACION---------\n";
				  cout << "Chocolatina Hershey's" << precio3 <<
					"\nUnidades disponibles:" << uni4;
				  cout << "Desea continuar? (1 para si/0 para no)";
				  cin >> opi;
				  if (opi == 1)
					{
					  break;
					}
				  else
					{
					  opproducto = 5;
					  break;
					}
				case 5:
				  //opcion 5. salida al menu principal
				  opproducto = 5;
				  break;
				}
			}
		  while (opproducto != 5);
		  break;
		case 2:
		  //Ingreso de saldo (en proceso de creacion y diseC1o :D)
		  break;
		case 3:
		  //Compra de un producto (en proceso de creacion y diseC1o :D)
		  break;
		case 4:
		  //Terminar ejecucion del programa
		  opmenu = 4;
		  break;
		}
	}
  while (opmenu != 4);
}
