#pragma once
#include<iostream>
#include<string>

using namespace std;

#ifndef FERMA_H
#define FERMA_H

class Ferma
{
public:
	string newName;
	string Location;

	Ferma();
	Ferma(string name,
		string Location,
		int Animal_amount,
		double Vents_power,
		int Shepherd_amount,
		double Sq,
		int Animal_capacity);
	~Ferma();

	string getName() const;
	string getLocation() const;
	int getAnimal_amount() const;
	double getVents_power() const;
	int getShepherd_amount() const;
	double getSq() const;
	int getAnimal_capacity() const;

	void setName(string);
	void setLocation(string);
	void setAnimal_amount(int);
	void setVents_power(double);
	void setShepherd_amount(int);
	void setSq(double);
	void setAnimal_capacity(int);

protected:
	string newLocation;
	int newAnimal_capacity;
	int newAnimal_amount;

private:
	double newVents_power;
	int newShepherd_amount;
	double newSq;
};
#endif FERMA_H