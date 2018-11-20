#include"Ferma.h"


Ferma::Ferma(string name,
	string Location,
	int Animal_amount,
	double Vents_power,
	int Shepherd_amount,
	double Sq,
	int Animal_capacity) {
	newName = name;
	newLocation = Location;
	newAnimal_amount = Animal_amount;
	newVents_power = Vents_power;
	newShepherd_amount = Shepherd_amount;
	newSq = Sq;
	newAnimal_capacity = Animal_capacity;
}
Ferma::~Ferma() {
}
string Ferma::getName() const {
	return newName;
}
string Ferma::getLocation() const {
	return newLocation;
}
int Ferma::getAnimal_amount() const {
	return newAnimal_amount;
}
double Ferma::getVents_power() const {
	return newVents_power;
}
int Ferma::getShepherd_amount() const {
	return newShepherd_amount;
}
double Ferma::getSq() const {
	return newSq;
}
int Ferma::getAnimal_capacity() const {
	return newAnimal_capacity;
}
void Ferma::setName(string name) {
	newName = name;
}
void Ferma::setLocation(string Location) {
	newLocation = Location;
}
void Ferma::setAnimal_amount(int Animal_amount) {
	newAnimal_amount = Animal_amount;
}
void Ferma::setVents_power(double Vents_power) {
	newVents_power = Vents_power;
}
void Ferma::setShepherd_amount(int Shepherd_amount) {
	newShepherd_amount = Shepherd_amount;
}
void Ferma::setSq(double Sq) {
	newSq = Sq;
}
void Ferma::setAnimal_capacity(int Animal_capacity) {
	newAnimal_capacity = Animal_capacity;
}