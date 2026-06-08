#include <iostream>
using namespace std;

//Simulador de Examne de Manejo.
//Con este simulador podras realizar un examen teorico de manejo, el cual dara preguntas de opcion multiple y se obtendra una calificacion final dependiendo de tu desempeño.

/**
 * @file SimuladorExamenManejo.cpp
 * @brief Sistema de simulación para examen teórico de manejo.
 * @author Ariadna Rivas
 * @date 07/06/2026
 * @version 1.0
 */

void Examen();
void Menu();

	int main() {

		Menu();

		return 0;
	}


void Examen() {

	int puntaje = 0;
	char respuesta;



	cout << "                     ------EXAMEN TEORICO DE MANEJO------" << endl;
	cout << "Responde las siguientes preguntas seleccionando la letra de la opcion correcta." << endl;
	cout << endl;

	cout << "1. Que significa una luz roja fija en un semaforo?" << endl;
	cout << "	A) Avanzar con precaucion" << endl;
	cout << "	B) Reducir la velocidad." << endl;
	cout << "	C) Detenerse completamente." << endl;
	cout << "	D) Girar a la derecha." << endl;
	cin >> respuesta;

	if (respuesta == 'C' || respuesta == 'c') {
		puntaje++;
	}

	cout << endl;

	cout << "2. Cual es la distancia minima recomendada que debes mantener con el vehiculo de adelante?" << endl;
	cout << "	A) Medio segundo." << endl;
	cout << "	B) Un segundo." << endl;
	cout << "	C) Dos segundos." << endl;
	cout << "	D) Cinco segundos." << endl;
	cin >> respuesta;

	if (respuesta == 'C' || respuesta == 'c') {
		puntaje++;
	}

	cout << endl;

	cout << "3. Que debes hacer antes de cambiar de carril?" << endl;
	cout << "	A) Tocar el claxon." << endl;
	cout << "	B) Encender las luces altas." << endl;
	cout << "	C) Utilizar las direccionales y revisar los espejos." << endl;
	cout << "	D) Acelerar rapidamente. " << endl;
	cin >> respuesta;

	if (respuesta == 'C' || respuesta == 'c') {
		puntaje++;
	}

	cout << endl;

	cout << "4. Que indica una senal de (ALTO)?" << endl;
	cout << "	A) Disminuir la velocidad." << endl;
	cout << "	B) Ceder el paso unicamente si vienen vehiculos." << endl;
	cout << "	C) Detenerse completamente antes de continuar." << endl;
	cout << "	D) Continuar con precaucion." << endl;
	cin >> respuesta;

	if (respuesta == 'C' || respuesta == 'c') {
		puntaje++;
	}

	cout << endl;

	cout << "5. Quien tiene prioridad en un paso peatonal?" << endl;
	cout << "	A) El vehiculo mas grande." << endl;
	cout << "	B) El vehiculo que circula mas rapido." << endl;
	cout << "	C) Los peatones." << endl;
	cout << "	D) Las motocicletas." << endl;
	cin >> respuesta;

	if (respuesta == 'C' || respuesta == 'c') {
		puntaje++;
	}

	cout << endl;

	cout << "6. Que debes hacer si escuchas una sirena de una ambulancia o patrulla en servicio de emergencia?" << endl;
	cout << "	A) Ignorarla y continuar." << endl;
	cout << "	B) Acelerar para alejarte." << endl;
	cout << "	C) Detenerte en medio de la via." << endl;
	cout << "	D) Ceder el paso y permitir su circulacion." << endl;
	cin >> respuesta;

	if (respuesta == 'D' || respuesta == 'd') {
		puntaje++;
	}

	cout << endl;

	cout << "7. Cual de las siguientes acciones es una causa comun de accidentes de trafico?" << endl;
	cout << "	A) Conducir distraido." << endl;
	cout << "	B) Revisar los espejos." << endl;
	cout << "	C) Utilizar el cinturon de seguridad." << endl;
	cout << "	D) Mantener la distancia de seguridad." << endl;
	cin >> respuesta;

	if (respuesta == 'A' || respuesta == 'a') {
		puntaje++;
	}

	cout << endl;

	cout << "8. Que color tiene generalmente una senal preventiva?" << endl;
	cout << "	A) Amarillo." << endl;
	cout << "	B) Verde." << endl;
	cout << "	C) Azul." << endl;
	cout << "	D) Blanco." << endl;
	cin >> respuesta;

	if (respuesta == 'A' || respuesta == 'a') {
		puntaje++;
	}

	cout << endl;

	cout << "9. Que documento debe portar obligatoriamente un conductor?" << endl;
	cout << "	A) Acta de nacimiento." << endl;
	cout << "	B) Licencia de conducir vigente." << endl;
	cout << "	C) CURP impresa." << endl;
	cout << "	D) Cartilla militar." << endl;
	cin >> respuesta;

	if (respuesta == 'B' || respuesta == 'b') {
		puntaje++;
	}

	cout << endl;

	cout << "10. Si te encuentras con una señal de (CRUCE DE FERROCARRIL) y un tren se aproxima, Que debes hacer?" << endl;
	cout << "	A) Acelerar para cruzar." << endl;
	cout << "	B) Detenerte de manera segura si las condiciones lo permiten." << endl;
	cout << "	C) Ignorar la señal." << endl;
	cout << "	D) Retroceder." << endl;
	cin >> respuesta;

	if (respuesta == 'B' || respuesta == 'b') {
		puntaje++;
	}

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "Aciertos: " << puntaje << "/10" << endl;

	if (puntaje >= 7) {
		cout << "APROBADO" << endl;
	}
	else {
		cout << "REPROBADO" << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;


}


void Menu() {

	int op = 0;


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
			Examen();
			break;

		case 2:
			cout << "Instrucciones" << endl;
			cout << endl;
			cout << "1. El examen consta de 10 preguntas de opcion multiple." << endl;
			cout << "2. Cada pregunta tiene 4 opciones, solo una es correcta." << endl;
			cout << "3. Para aprobar el examen, debes obtener al menos 7 respuestas correctas." << endl;
			cout << "4. Al finalizar el examen, se mostrara tu calificacion final." << endl;
			break;

		case 3:
			cout << "Salir" << endl;
			break;

		default:
			cout << "Opcion no valida, por favor ingresa una opcion del 1 al 3." << endl;
			break;

		}
	} while (op != 3);

}

