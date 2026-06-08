#include <iostream>
using namespace std;

//Simulador de Examne de Manejo.
//Con este simulador podras realizar un examen teorico de manejo, el cual dara preguntas de opcion multiple y se obtendra una calificacion final dependiendo de tu desempeño.



void Menu() {

	int op=0;


	do {

		cout << "SIMULADOR DE EXAMEN DE MANEJO" << endl;
		cout << endl;


			cout << "1.Iniciar Examen" << endl;
			cout << "2.Instrucciones" << endl;
			cout << "3.Salir" << endl;
			cin >> op;

			switch (op) {

			case 1:
				cout << "Iniciar Examen" << endl;
				break;

			case 2:	
				cout << "Instrucciones" << endl;
				cout << "1. El examen consta de 10 preguntas de opcion multiple." << endl;
				cout << "2. Cada pregunta tiene 4 opciones, solo una es correcta." << endl;
				cout << "3. Para aprobar el examen, debes obtener al menos 7 respuestas correctas." << endl;
				cout << "4. Al finalizar el examen, se mostrara tu calificacion final." << endl;
				break;

			case 3:	
				cout << "Salir" << endl;
				break;

		}
	} while (op != 3);


}
int main()
{
	Menu();

	return 0;
}



