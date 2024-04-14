#include <iostream>
using namespace std;
int
main ()
{
  int opmenu, opproducto, opi, opcompra, dev_menu;
  int uni1 = 10, uni2 = 15, uni3 = 18, uni4 = 25;
  int unidades_totales, total_productos, productos_disp;
  float credito, total, precio_total;
  float precio_uni1 = 3700, precio_uni2 = 2500, precio_uni3 =3500, precio_uni4 = 6500;

  total_productos = uni1 + uni2 + uni3 + uni4;
  productos_disp = total_productos - unidades_totales;

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
		"\n1. Visualizar la informacion de los productos.\n2. Agregar dinero a la maquina.\n3. Comprar un producto.\n4. Opciones de desarrollador. \n5. Salir"
		<< endl << endl;
	  cin >> opmenu;
	  switch (opmenu)			//visualizacion de la informacion de los productos
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
					  productos_disp = total_productos - unidades_totales - 1;
					  unidades_totales++;
					  precio_total += precio_uni1;
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
					  productos_disp = total_productos - unidades_totales - 1;
					  unidades_totales++;
					  precio_total += precio_uni2;
					  cout << "Gracias por su compra. ";
					  total = total - precio_uni2;
					  cout << "Dinero disponible " << total << " pesos";
					  break;
					}
				  else if (total < precio_uni1)
					{
					  cout << "\nDinero insuficiente!!!\n";
					  break;
					}
				  else if (uni2 == 0)
					{
					  cout << "\nUnidades agotadas!!!\n";
					  break;
					}
				case 3:
				  if ((total >= precio_uni3) && (uni3 > 0))
					{
					  uni3--;
					  productos_disp = total_productos - unidades_totales - 1;
					  unidades_totales++;
					  precio_total += precio_uni3;
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
					  productos_disp = total_productos - unidades_totales - 1;
					  unidades_totales++;
					  precio_total += precio_uni4;
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
		  cout <<
			"\nOpciones de desarrollador (Ingrese 0 para devolverse al menu anterior)";
		  do
			{
			  //Despliegue del menu para "desarrollador"
			  cout <<
				"\n\n1-Productos adquiridos\n2-Total gastado\n3-Disponibilidad de la maquina\n(Digite 0 para devolverse al menu anterior)\n\n";
			  cin >> dev_menu;
			  switch (dev_menu)
				{
				    //Datos adicionales sobre la maquina
				case 1:
				  cout << "\nProductos adquiridos: " << unidades_totales;
				  break;
				case 2:
				  cout << "\nTotal gastado: " << precio_total;
				  break;
				case 3:
				  cout << "\nDisponibilidad de la maquina: "<<productos_disp * 100 / total_productos<< "%";
				  break;
				default:
				  dev_menu = 4;
				  break;

				}
			}
		  while (dev_menu != 4);
		  break;
		case 5:
		  opmenu = 5;
		  break;
		}
	}
  while (opmenu != 5);
}

