#include <iostream>
using namespace std;
struct FOPRE
{
  long int DONACIONFOPRE;
  float donacion;
  int uni;
  float precio;
};
struct menu
{
  int op;
};
int
main ()
{
  FOPRE sobrante;
  sobrante.donacion;
  FOPRE coca;
  coca.uni = 25;
  coca.precio = 3700;
  FOPRE chito;
  chito.uni = 25;
  chito.precio = 2500;
  FOPRE dori;
  dori.uni = 25;
  dori.precio = 3500;
  FOPRE choco;
  choco.uni = 25;
  choco.precio = 6500;
  menu menu_prin;
  menu_prin.op;
  menu menu_info;
  menu_info.op;
  menu menu_compra;
  menu_compra.op;
  menu dev_menu;
  dev_menu.op;
  menu restante;
  restante.op;
  int unidades_totales, total_productos, productos_disp, aux;
  float credito, total, precio_total;
  total_productos = coca.uni + chito.uni + choco.uni + choco.uni;
  productos_disp = total_productos - unidades_totales;

//menu principal
  do
	{
	  cout <<
		"\n----------------------Productos----------------------" << endl;
	  cout <<
		"1) Coca-cola de cafe  3) Doritos Dinamita\n         " << coca.precio
		<< "                  " << dori.precio <<
		"\n\n2) Cheetos Naturales  4) Chocolatina Hershey's\n         " <<
		chito.precio << "                  " << choco.precio << "\n\n";
	  cout << "\nDinero: " << total << " pesos" << endl;
	  cout <<
		"\n1. Visualizar la informacion de los productos.\n2. Agregar dinero a la maquina.\n3. Comprar un producto.\n4. Opciones de desarrollador. \n5. Retirar saldo sobrante"
		<< endl << endl;
	  cin >> menu_prin.op;
	  switch (menu_prin.op)		//visualizacion de la informacion de los productos
		{
		case 1:
		  cout << "\nQue producto desea consultar?  ";
		  do
			{
			  cout <<
				"\n\n1-Coca cola de cafe\n2-Cheetos Naturales\n3-Doritos Dinamita\n4-Chocolatina Hershey's\n5-Salir\n\n";
			  cin >> menu_info.op;
			  cout << endl;
			  switch (menu_info.op)
				{
				case 1:
				  //opcion 1. informacion coca cola
				  cout << "---------INFORMACION---------\n";
				  cout << "Coca-cola de cafe\nPrecio:" << coca.precio <<
					"\nUnidades disponibles: " << coca.uni << endl;
				  cout << "\nDesea continuar? (1 para si/0 para no)";
				  cin >> menu_info.op;
				  if (menu_info.op == 1)
					{
					  break;
					}
				  else
					{
					  menu_info.op = 5;
					  break;
					}
				case 2:
				  //opcion 2. informacion cheetos
				  cout << "---------INFORMACION---------\n";
				  cout << "Cheetos Naturales\nPrecio:" << chito.precio <<
					"\nUnidades disponibles: " << chito.uni << endl;
				  cout << "\nDesea continuar? (1 para si/0 para no)";
				  cin >> menu_info.op;
				  if (menu_info.op == 1)
					{
					  break;
					}
				  else
					{
					  menu_info.op = 5;
					  break;
					}
				case 3:
				  //opcion 3. informacion Doritos Dinamita
				  cout << "---------INFORMACION---------\n";
				  cout << "Doritos Dinamita\nPrecio:" << dori.precio <<
					"\nUnidades disponibles: " << dori.uni << endl;
				  cout << "\nDesea continuar? (1 para si/0 para no)";
				  cin >> menu_info.op;
				  if (menu_info.op == 1)
					{
					  break;
					}
				  else
					{
					  menu_info.op = 5;
					  break;
					}
				case 4:
				  //opcion 4. informacion Hershey's
				  cout << "---------INFORMACION---------\n";
				  cout << "Chocolatina Hershey's\nPrecio:" << choco.precio <<
					"\nUnidades disponibles: " << choco.uni << endl;
				  cout << "\nDesea continuar? (1 para si/0 para no)";
				  cin >> menu_info.op;
				  if (menu_info.op == 1)
					{
					  break;
					}
				  else
					{
					  menu_info.op = 5;
					  break;
					}
				default:
				  //opcion 5. salida al menu principal
				  menu_info.op = 5;
				  break;
				}
			}
		  while (menu_info.op != 5);
		  break;
		case 2:
		  //Ingreso de saldo 
		  cout <<
			"\nCuanto dinero desea ingresar? (Digite 0 si desea regresar)\n\n";
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
				<< coca.precio << "                  " << dori.precio <<
				"\n\n2) Cheetos Naturales  4) Chocolatina Hershey's\n         "
				<< chito.precio << "                  " << choco.precio <<
				"\n\n";
			}
			
		  while (menu_info.op == 1000);
		  do
			{					//resta del saldo y resta de la cantidad
			  cout << "\nQue producto desea comprar? Dinero:" << total <<
				"\n(Digite 0 si desea regresar)\n" << endl;
			  cin >> menu_compra.op;
			  switch (menu_compra.op)
				{
				case 1:
				  if ((total >= coca.precio) && (coca.uni > 0))
					{
					  coca.uni--;
					  productos_disp = total_productos - unidades_totales - 1;
					  unidades_totales++;
					  precio_total += coca.precio;
					  cout << "\nGracias por su compra. ";
					  total = total - coca.precio;
					  cout << "\nDinero disponible " << total << " pesos \n";
					  break;
					}
				  else if (total < coca.precio)
					{
					  cout << "\nDinero insuficiente!!!\n";
					  break;
					}
				  else if (coca.uni == 0)
					{
					  cout << "\nUnidades agotadas!!!\n";
					  break;
					}
				case 2:
				  if ((total >= chito.precio) && (chito.uni > 0))
					{
					  chito.uni--;
					  productos_disp = total_productos - unidades_totales - 1;
					  unidades_totales++;
					  precio_total += chito.precio;
					  chito.DONACIONFOPRE += chito.precio * 0.06;
					  chito.donacion += chito.precio * 0.06;
					  cout << "\nGracias por su compra. ";
					  total = total - chito.precio;
					  cout << "\nDinero disponible " << total << " pesos\n\n";
					  break;
					}
				  else if (total < coca.precio)
					{
					  cout << "\nDinero insuficiente!!!\n";
					  break;
					}
				  else if (chito.uni == 0)
					{
					  cout << "\nUnidades agotadas!!!\n";
					  break;
					}
				case 3:
				  if ((total >= dori.precio) && (dori.uni > 0))
					{
					  dori.uni--;
					  productos_disp = total_productos - unidades_totales - 1;
					  unidades_totales++;
					  precio_total += dori.precio;
					  cout << "\nGracias por su compra. ";
					  total = total - dori.precio;
					  cout << "\nDinero disponible " << total << " pesos\n";
					  break;
					}
				  else if (total < dori.precio)
					{
					  cout << "\nDinero insuficiente!!!\n";
					  break;
					}
				  else if (dori.uni == 0)
					{
					  cout << "\nUnidades agotadas!!!\n";
					  break;
					}
				case 4:
				  if ((total >= choco.precio) && (choco.uni > 0))
					{
					  choco.uni--;
					  productos_disp = total_productos - unidades_totales - 1;
					  unidades_totales++;
					  precio_total += choco.precio;
					  choco.donacion += choco.precio * 0.06;
					  choco.DONACIONFOPRE += choco.precio * 0.06;
					  cout << "\nGracias por su compra. ";
					  total = total - choco.precio;
					  cout << "\nDinero disponible " << total << " pesos\n";
					  break;
					}
				  else if (total < choco.precio)
					{
					  cout << "\nDinero insuficiente!!!\n";
					  break;
					}
				  else if (choco.uni == 0)
					{
					  cout << "\nUnidades agotadas!!!\n";
					  break;
					}
				default:
				  menu_compra.op = 5;
				  break;
				}
			}
		  while (menu_compra.op != 5);
		  break;
		 case 5://opcion para robar money
		cout<<"\nDesea retirar su saldo?\n(si su saldo no es modulo de 10000 pesos la maquina los añadira al FOPRE)";
		cout<<endl;
		cout<<"(Escriba 1 para continuar/ Escriba 0 para devolverse :3)\n";
        cin>>restante.op;
        
        if(((((int)total%10000)!=0) and (total>=10000)and(restante.op==1)))
		{
		sobrante.donacion=total;
		total=0;
		break;
		}
		else
		{
		 break;
		}
		case 4:
		  cout <<
			"\nOpciones de desarrollador (Ingrese 0 para devolverse al menu anterior)";
		  do
			{
			  //Despliegue del menu para "desarrollador"
			  cout <<
				"\n\n1-Productos adquiridos\n2-Total gastado\n3-Disponibilidad de la maquina\n4-Producto mas comprado\n5-Valor de la donacion total al FOPRE por las compras realizadas\n6-Valor de la donacion al FOPRE por tipo de producto\n7-Unidades compradas de productos FOPRE y por tipo de producto\n(Digite 0 para devolverse al menu anterior)\n\n";
			  cin >> dev_menu.op;
			  //asignacion de valores al vector/matriz :v
			  int mayor[4] = { coca.uni, chito.uni, dori.uni, choco.uni };
			  switch (dev_menu.op)
				{
				  //Datos adicionales sobre la maquina
				case 1:
				  cout << "\nProductos adquiridos: " << unidades_totales;
				  break;
				case 2:
				  cout << "\nTotal gastado: " << precio_total;
				  break;
				case 3:
				  cout << "\nDisponibilidad de la maquina: " << productos_disp
					* 100 / total_productos << "%";
				  break;
				case 4:
				  cout << "\nProducto mas comprado: ";
				  //Algoritmo de ordenamiento
				  for (int i = 0; i < 4; i++)
					{
					  for (int j = 0; j < 4; j++)
						{
						  if (mayor[i] < mayor[j])
							{
							  aux = mayor[i];
							  mayor[i] = mayor[j];
							  mayor[j] = aux;
							}
						}
					}			//Muestra producto mas vendido
				  if ((coca.uni == 25) and (dori.uni == 25) and (chito.uni ==25)and (choco.uni == 25))
					cout << 25 -mayor[0] << " Ningun producto ha sido comprado";
				  else if ((coca.uni == dori.uni and choco.uni and chito.uni) and (dori.uni == choco.uni and coca.uni and chito.uni) and (chito.uni == dori.uni and choco.uni and coca.uni) and (choco.uni == dori.uni and coca.uni and chito.uni))
					cout << 25 -mayor[0] << " Todos los productos han sido comprados por igual";
				  else if ((coca.uni <= chito.uni) and (coca.uni <= dori.uni)and (coca.uni <= choco.uni))
					cout << 25 - mayor[0] << " Coca-cola de cafe";
				  else if ((chito.uni <= coca.uni) and (chito.uni <= dori.uni)and (chito.uni <= choco.uni))
					cout << 25 - mayor[0] << " Cheetos Naturales";
				  else if ((dori.uni <= chito.uni) and (dori.uni <= coca.uni)and (dori.uni <= choco.uni))
					cout << 25 - mayor[0] << " Doritos Dinamita";
				  else if ((choco.uni <= chito.uni)and (choco.uni <= coca.uni) and (choco.uni <=dori.uni))
					cout << 25 - mayor[0] << " Chocolatina Hershey's";
				  break;
				case 5:
				  //Porcentaje de donaciones
				  cout <<
					"\nValor de la donacion total al FOPRE por las compras realizadas: "
					<< choco.donacion + chito.donacion + sobrante.donacion << " pesos" << endl;
				  break;
				case 6:
				  //Conocer el valor de la donacion al FOPRE por tipo de producto.
				  cout <<
					"Conocer el valor de la donacion al FOPRE por tipo de producto.\n";
				  cout << "\nChocolatina Hershey's: " << choco.DONACIONFOPRE
					<< " pesos" << endl;
				  cout << "Cheetos naturales: " << chito.DONACIONFOPRE <<
					" pesos" << endl;
				  break;
				case 7:
				  //Imprimir unidades compradas de productos FOPRE y tipo de producto.
				  cout << "\nCheetos naturales: " << 25 - chito.uni;
				  cout << "\nChocolatina Hershey's: " << 25 - choco.uni;
				  break;
				default:
				  dev_menu.op = 10;
				  break;
				}
			}
		  while (dev_menu.op != 10);
		  break;
		default:
		  menu_prin.op = 6;
		  break;
		}
	}
  while (menu_prin.op != 6);
}

