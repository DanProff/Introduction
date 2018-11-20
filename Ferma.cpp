#include<iostream>
#include<string>
#include"Ferma.h"

using namespace std;

int main() {
	string name[3];
	string Location [3];
	int Animal_amount[3];
	double Vents_power[3];
	int Shepherd_amount[3];
	double Sq[3];
	int Animal_capacity[3];
	for (int i = 0; i <= 2; i++) {
		cout << "Enter farm name: ";
		cin >> name[i];
		cout << "Enter farm's location: ";
		cin >> Location [i];
		cout << "Enter animal amount: ";
		cin >> Animal_amount [i];
		cout << "Enter vents power: ";
		cin >> Vents_power[i];
		cout << "Enter shepherd amount: ";
		cin >> Shepherd_amount [i];
		cout << "Enter farm's square: ";
		cin >> Sq [i];
		cout << "Enter the animal capacity: ";
		cin >> Animal_capacity [i];
		cout << endl;
	}
	Ferma Ferma1(name[0], Location[0], Animal_amount[0], Vents_power[0], Shepherd_amount[0], Sq[0], Animal_capacity[0]);
	cout << "Name: " << Ferma1.getName() << endl;
	cout << "Location: " << Ferma1.getLocation() << endl;
	cout << "Animal amount: " << Ferma1.getAnimal_amount() << endl;
	cout << "Vents power (watt): " << Ferma1.getVents_power() << endl;
	cout << "Shepherd amount: " << Ferma1.getShepherd_amount() << endl;
	cout << "Square: " << Ferma1.getSq() << endl;
	cout << "Animal capacity: " << Ferma1.getAnimal_capacity() << endl << endl;

	Ferma Ferma2(name[1], Location[1], Animal_amount[1], Vents_power[1], Shepherd_amount[1], Sq[1], Animal_capacity[1]);
	cout << "Name: " << Ferma2.getName() << endl;
	cout << "Location: " << Ferma2.getLocation() << endl;
	cout << "Animal amount: " << Ferma2.getAnimal_amount() << endl;
	cout << "Vents power (watt): " << Ferma2.getVents_power() << endl;
	cout << "Shepherd amount: " << Ferma2.getShepherd_amount() << endl;
	cout << "Square: " << Ferma2.getSq() << endl;
	cout << "Animal capacity: " << Ferma2.getAnimal_capacity() << endl << endl;

	Ferma Ferma3(name[2], Location[2], Animal_amount[2], Vents_power[2], Shepherd_amount[2], Sq[2], Animal_capacity[2]);
	cout << "Name: " << Ferma3.getName() << endl;
	cout << "Location: " << Ferma3.getLocation() << endl;
	cout << "Animal amount: " << Ferma3.getAnimal_amount() << endl;
	cout << "Vents power (watt): " << Ferma3.getVents_power() << endl;
	cout << "Shepherd amount: " << Ferma3.getShepherd_amount() << endl;
	cout << "Square: " << Ferma3.getSq() << endl;
	cout << "Animal capacity: " << Ferma3.getAnimal_capacity() << endl << endl;

	system("pause");
	return 0;
}