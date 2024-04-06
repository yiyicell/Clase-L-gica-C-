#include <iostream>
using namespace std;
int
main ()
{
  int opmenu, opproducto, uni1 = 10, uni2 = 7, uni3 = 8, uni4 =
	2, opi, opcompra;
  float credito, total, precio_uni1 = 3700, precio_uni2 = 2500, precio_uni3 =
	3500, precio_uni4 = 6500;
//menu principal
  do
	{
	  cout <<
		"\n----------------------Productos----------------------" << endl;
	  cout <<
		"1) Coca-cola de cafe  3) Doritos Dinamita\n         " << precio_uni1
		<< "                  " << precio_uni2 <<
		"\n\n2) Cheetos Naturales  4) Chocolatina Hershey's\n         " <<
		precio_uni2 << "                  " << precio_uni4 << "\n\n";
	  cout << "\nDinero: " << total << " pesos" << endl;
	  cout <<
		"\n1. Visualizar la informacion de los productos.\n2. Agregar dinero a la maquina.\n3. Comprar un producto.\n4. Salir"
		<< endl << endl;
	  cin >> opmenu;
	  switch (opmenu)			//visualizaciC3n de la informacion de los productos
		{
		case 1:
		  cout << "Que producto desea consultar?  ";
		  do
			{
			  cout <<
				"\n\n1-Coca cola de cafe\n2-Cheetos Naturales\n3-Doritos Dinamita\n4-Chocolatina Hershey's\n5-Salir\n";
			  cin >> opproducto;
			  cout << endl;
			  switch (opproducto)
				{
				case 1:
				  //opcion 1. informacion coca cola
				  cout << "---------INFORMACION---------\n";
				  cout << "Coca-cola de cafe\nPrecio:" << precio_uni1 <<
					"\nUnidades disponibles: " << uni1 << endl;
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
				  cout << "Cheetos Naturales\nPrecio:" << precio_uni2 <<
					"\nUnidades disponibles: " << uni2 << endl;
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
				  cout << "Doritos Dinamita\nPrecio:" << precio_uni3 <<
					"\nUnidades disponibles: " << uni3 << endl;
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
				  cout << "Chocolatina Hershey's" << precio_uni4 <<
					"\nUnidades disponibles: " << uni4 << endl;
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
		  //Ingreso de saldo 
		  cout << "Cuanto dinero desea ingresar?" << endl;
		  cin >> credito;
		  total = credito + total;
		  cout << total << endl;
		  break;
		case 3:
		  //Compra de un producto
		  do
			{
			  cout <<
				"\n----------------------Productos----------------------" <<
				endl;
			  cout << "1) Coca-cola de cafe  3) Doritos Dinamita\n         "
				<< precio_uni1 << "                  " << precio_uni2 <<
				"\n\n2) Cheetos Naturales  4) Chocolatina Hershey's\n         "
				<< precio_uni2 << "                  " << precio_uni4 <<
				"\n\n";
			}
		  while (opi == 1000);
		  do
			{					//resta del saldo y resta de la cantidad

			  cout << "\nQue producto desea comprar? Dinero:" << total <<
				endl;
			  cin >> opcompra;
			  switch (opcompra)
				{
				case 1:
				  if ((total >= precio_uni1) && (uni1 > 0))
					{
					  uni1--;
					  cout << "Gracias por su compra. ";
					  total = total - precio_uni1;
					  cout << "Dinero disponible " << total << " pesos \n";
					  break;
					}
				  else if (total < precio_uni1)
					{
					  cout << "\nDinero insuficiente!!!\n";
					  break;
					}
				  else if (uni1 == 0)
					{
					  cout << "\nUnidades agotadas!!!\n";
					  break;
					}
				case 2:
				  if ((total >= precio_uni2) && (uni2 > 0))
					{
					  uni2--;
					  cout << "Gracias por su compra. ";
					  total = total - precio_uni2;
					  cout << "Dinero disponible " << total << " pesos";
					  break;
					}
				  else if (total < precio_uni1)
					{
					  cout <<"\nDinero insuficiente!!!\n";
					  break;
					}
				  else if (uni2 == 0)
					{
					  cout <<"\nUnidades agotadas!!!\n";
					  break;
					}
				case 3:
				  if ((total >= precio_uni3) && (uni3 > 0))
					{
					  uni3--;
					  cout << "Gracias por su compra. ";
					  total = total - precio_uni3;
					  cout << "Dinero disponible " << total << " pesos";
					  break;
					}
				  else if (total < precio_uni3)
					{
					  cout << "\nDinero insuficiente!!!\n";
					  break;
					}
				  else if (uni3 == 0)
					{
					  cout << "\nUnidades agotadas!!!\n";
					  break;
					}
				case 4:
				  if ((total >= precio_uni4) && (uni4 > 0))
					{
					  uni4--;
					  cout << "Gracias por su compra. ";
					  total = total - precio_uni4;
					  cout << "Dinero disponible " << total << " pesos";
					  break;
					}
				  else if (total < precio_uni4)
					{
					  cout << "\nDinero insuficiente!!!\n";
					  break;
					}
				  else if (uni4 == 0)
					{
					  cout << "\nUnidades agotadas!!!\n";
					  break;
					}
				default:
				  opcompra = 5;
				  break;
				}
			}
		  while (opcompra != 5);
		  break;
		case 4:
		  opmenu = 4;
		  break;
		}
	}
  while (opmenu != 4);
}


