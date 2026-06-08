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

			default:
				cout << "Opcion no valida, por favor ingresa una opcion del 1 al 3." << endl;
				break;

		}
	} while (op != 3);

	if (op == 1) {

		cout << "Examen Teorico de Manejo" << endl;

		cout << "1. ¿Qué significa una luz roja fija en un semáforo ?" << endl;
		cout << "	A) Avanzar con precaución." << endl;
		cout << "	B) Reducir la velocidad." << endl;
		cout << "	C) Detenerse completamente." << endl;
		cout << "	D) Girar a la derecha." << endl;

		cout << "2. ¿Cuál es la distancia mínima recomendada que debes mantener con el vehículo de adelante ?" << endl;
		cout << "	A) Medio segundo." << endl;
		cout << "	B) Un segundo." << endl;
		cout << "	C) Dos segundos." << endl;
		cout << "	D) Cinco segundos." << endl;

		cout << "3. ¿Qué debes hacer antes de cambiar de carril ?" << endl;	
		cout << "	A) Tocar el claxon." << endl;
		cout << "	B) Encender las luces altas." << endl;
		cout << "	C) Utilizar las direccionales y revisar los espejos." << endl;
		cout << "	D) Acelerar rápidamente. " << endl;

		cout << "4. ¿Qué indica una señal de (ALTO) ?" << endl;	
		cout << "	A) Disminuir la velocidad. " << endl;
		cout << "	B) Ceder el paso únicamente si vienen vehículos."  << endl;
		cout << "	C) Detenerse completamente antes de continuar. " << endl;
		cout << "	D) Continuar con precaución. " << endl;

		cout << "5. ¿Quién tiene prioridad en un paso peatonal ? " << endl;
		cout << "	A) El vehículo más grande. " << endl;
		cout << "	B) El vehículo que circula más rápido. " << endl;
		cout << "	C) Los peatones. " << endl;
		cout << "	D) Las motocicletas. " << endl;

		cout << "6. ¿Qué debes hacer si escuchas una sirena de una ambulancia o patrulla en servicio de emergencia ? " << endl;
		cout << "	A) Ignorarla y continuar. " << endl;
		cout << "	B) Acelerar para alejarte. " << endl;
		cout << "	C) Detenerte en medio de la vía. " << endl;
		cout << "	D) Ceder el paso y permitir su circulación. " << endl;
			
		cout << "7. ¿Cuál de las siguientes acciones es una causa común de accidentes de tráfico ? " << endl;
		cout << "	A) Conducir distraído. " << endl;
		cout << "	B) Revisar los espejos. " << endl;
		cout << "	C) Utilizar el cinturón de seguridad. " << endl;
		cout << "	D) Mantener la distancia de seguridad. " << endl;

		cout << "8. ¿Qué color tiene generalmente una señal preventiva ? " << endl;
		cout << "	A) Amarillo. " << endl;
		cout << "	B) Verde. " << endl;
		cout << "	C) Azul. " << endl;
		cout << "	D) Blanco. " << endl;

		cout << "9. ¿Qué documento debe portar obligatoriamente un conductor ?" << endl;
		cout << "	A) Acta de nacimiento." << endl;
		cout << "	B) Licencia de conducir vigente. " << endl;
		cout << "	C) CURP impresa. " << endl;
		cout << "	D) Cartilla militar. " << endl;

		cout << "10. Si te encuentras con una señal de (CRUCE DE FERROCARRIL) y un tren se aproxima, ¿qué debes hacer ? " << endl;
		cout << "	A) Acelerar para cruzar." << endl;
		cout << "	B) Detenerte de manera segura si las condiciones lo permiten." << endl;
		cout << "	C) Ignorar la señal." << endl;
		cout << "	D) Retroceder." << endl;
	
}
int main()
{
	Menu();

	return 0;
}



//Respuestas
//C) Detenerse completamente.
//C) Dos segundos.
//C) Utilizar las direccionales y revisar los espejos.
//C) Detenerse completamente antes de continuar.
//C) Los peatones.
//D) Ceder el paso y permitir su circulación.
//A) Conducir distraído.
//A) Amarillo.
//B) Licencia de conducir vigente.
//B) Detenerte de manera segura si las condiciones lo permiten.