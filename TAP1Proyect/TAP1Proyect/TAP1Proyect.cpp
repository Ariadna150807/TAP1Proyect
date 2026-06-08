#include <iostream>
using namespace std;

//Simulador de Examne de Manejo.
//Con este simulador podras realizar un examen teorico de manejo, el cual dara preguntas de opcion multiple y se obtendra una calificacion final dependiendo de tu desempeño.


void Menu() {

	int opcion;

	do {

		cout << "SIMULADOR DE EXAMEN DE MANEJO" << endl;
		cout << endl;

		switch (opcion) {

			cout << "1.Iniciar Examen" << endl;
			cout << "2.Instrucciones" << endl;
			cout << "3.Salir" << endl;
			cin >> opcion;

		}
	} while (opcion != 3);


}
int main()
{
	void Menu();

	return 0;
}



