#include <iostream>
#include <math.h>
#include <numeric>
using namespace std;

int
main ()
{
  int op, cont;
  do
	{
	  cout << "MENU PRINCIPAL:\n\n";
	  cout << "1. 5.1\n";
	  cout << "2. 5.2\n";
	  cout << "3. 5.4\n";
	  cout << "4. 5.6\n";
	  cout << "5. 5.7\n";
	  cout << "6. 5.8\n";
	  cout << "7. 5.9\n";
	  cout << "8. 5.10\n";
	  cout << "9. 5.11\n";
	  cout << "10. 5.12\n";
	  cout << "11. 5.13\n";
	  cout << "12. 5.15\n\n";
	  cin >> op;

	  switch (op)
		{
		case 1:
		  cout << "\n";
		  int salario, porcentaje, resultado;
		  cout << "Ingrese su salario actual" << endl;
		  cin >> salario;
		  if (salario <= 9000)
			{
			  porcentaje = salario * 0.20;
			  resultado = salario + porcentaje;
			  cout << "Su nuevo salario es: " << resultado << endl;
			}

		  if (salario > 9000 && salario <= 15000)
			{
			  porcentaje = salario * 0.10;
			  resultado = salario + porcentaje;
			  cout << "Su nuevo salario es: " << resultado << endl;
			}

		  if (salario > 15000 && salario <= 20000)
			{
			  porcentaje = salario * 0.05;
			  resultado = salario + porcentaje;
			  cout << "Su nuevo salario es: " << resultado << endl;
			}

		  if (salario > 20000)
			{
			  cout << "Su salario se mantiene igual" << endl;
			}

		  cout << "Gracias por su atencion :)" << endl;

		  break;

		case 2:
		  cout << "\n";
		  int n, i;
		  cout << "Ingrese un numero para calcular la sucesion de Pi: ";
		  cin >> n;
		  float pi;
		  for (i = 0; i < n; i++)
			{
			  pi = pi + ((pow (-1, i)) / (2 * i + 1));
			}
		  cout << "\nLa aproximacion de Pi con " << i << " iteraciones es: "
			<< 4 * pi;
		  break;

		case 3:
		  cout << "\n";
		  float anio, bis;
		  cout << "Ingrese el anio: ";
		  cin >> anio;
		  if ((int) anio % 100 == 0)
			{
			  bis = anio / 100;
			  if ((int) bis % 4 == 0)
				{
				  cout << "\nEs bisiesto";
				}
			  else
				{
				  cout << "\nNo es bisiesto";
				}
			}
		  else
			{
			  if ((int) anio % 4 == 0)
				{
				  cout << "\nEs bisiesto";
				}
			  else
				{
				  cout << "\nNo es bisiesto";
				}
			}
		  break;

		case 4:
		  cout << "\n";
		  int meses, conejos, con;
		  do
			{
			  cout <<
				"Calculadora de conejos, porfavor escriba la cantidad de meses\npara calcular la cantidad de conejos: ";
			  cin >> meses;
			  conejos = pow (2, meses);
			  if (conejos >= 2)
				{
				  cout << "La cantidad de conejos sera de: " << conejos <<
					endl << endl;
				}
			  else if (conejos <= 1)
				{
				  cout << "La cantidad de conejos sera de: 2" << endl << endl;
				}
			  if (meses == 0)
				{
				  con++;
				}
			}
		  while (con != 1);
		  break;

		case 5:
		  cout << "\n";
		  int N;
		  double suma;

		  cout << "Numerador es: " << 1 << endl;
		  cout << "Escribe el Denominador : " << endl;
		  cin >> N;

		  for (int i = 1; i <= N; ++i)
			{
			  suma += 1.0 / i;
			}

		  cout << "El resultado de la suma con decimales es :" << suma <<
			endl;

		  break;

		case 6:
		  cout << "\n";
		  int Q, W, E, CONT, NUM, P;
		  Q = 10000;
		  P = -1;
		  cout <<
			"Escriba todos los numeros que quiera este programa econtrara el menor y el mayor.\nCuando termine de ingresar todos sus numero digite 0"
			<< endl;
		  do
			{
			  cin >> NUM;
			  if ((NUM != 0) && (NUM > W))
				{
				  W = NUM;

				}
			  if ((NUM != 0) && (Q > NUM))
				{
				  Q = NUM;
				}
			  CONT++;
			  if (NUM == 0)
				{
				  P++;
				}
			}
		  while (P != 0);
		  cout << "El numero menor es: " << Q << "\nEl numero mayor es: " << W
			<< endl;
		  break;

		case 7:
		  cout << "\n";
		  int x, fact;
		  cout << "Ingrese el numero factorial que desea obtener: ";
		  cin >> x;
		  fact = 1;
		  for (int i = 1; i <= x; i++)
			{
			  fact = fact * i;
			}
		  cout << "\n" << x << "!= " << fact;
		  break;

		case 8:
		  cout << "\n";
		  int mayor, menor, numero;
		  n = 0;
		  cout << "Ingrese la cantidad de numeros: ";
		  cin >> n;
		  cout << "Ingrese el primer numero: ";
		  cin >> mayor;
		  for (int i = 1; i < n; i++)
			{
			  cout << "Ingrese el siguiente nu:mero: ";
			  cin >> numero;
			  if (numero > mayor)
				{
				  mayor = numero;
				}
			}
		  cout << "El numero mayor es: " << mayor << endl;
		  break;

		case 9:
		  cout << "\n";
		  float nota, promedio, repeticiones, nota_acumulada;
		  cout << "Cuantas notas vas a ingresar?" << endl;
		  cin >> repeticiones;
		  for (int i = 1; i <= repeticiones; i++)
			{
			  cout << "Ingresa la nota " << i << endl;
			  cin >> nota;
			  nota_acumulada = nota_acumulada + nota;
			}
		  promedio = nota_acumulada / repeticiones;
		  cout << "Tu promedio es: " << promedio;
		  break;

		case 10:
		  cout << "\n";
		  int acum;
		  for (int i = 0; i <= 50; i++)
			{
			  cout << i << endl;
			  acum = acum + i;
			}
		  cout << "La suma de todos los numeros enteros hasta 50 es: " <<
			acum;
		  break;

		case 11:
		  cout << "\n";
		  int cantidad_numeros;
		  cout << "Ingrese la cantidad de  numeros que desea sumar:";
		  cin >> cantidad_numeros;
		  float acumulado;
		  for (int i = 0; i < cantidad_numeros; i++)
			{
			  float numer;
			  cin >> numer;
			  acumulado += numer;
			}
		  cout << "La suma de los numeros ingresados es: " << acumulado <<
			endl;
		  break;

		case 12:
		  cout << "\n";
		  int veces;
		  cout << "Indique un numero y vera magia:" << endl;
		  cin >> veces;

		  for (int i = 1; i <= veces; i++)
			{
			  cout << "*" << endl;

			  for (int a = 1; a <= i; a++)
				{
				  cout << "*";
				}
			}
		  cout << "\nGracias" << endl;
		  break;

		default:
		  cout << "\nERROR: Opcion no valida";
		  break;

		}
	  //Pregunta si desea continuar
	  do
		{
		  cout << "\n\nDesea regresar al menu principal(1: Si/0: No)?\n\n";
		  cin >> cont;
		  if (cont < 0 or cont > 1)
			{
			  cout <<
				"\nERROR: La opcion que ingreso no es valida, intente nuevamente";
			}
		}
	  while (cont < 0 or cont > 1);
	  cout << "\n";
	}
  while (cont != 0);
}

