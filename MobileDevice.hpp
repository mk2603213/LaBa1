#pragma once

#include <string>
#include <ctime>
#include <iostream>

using namespace std;

class MobileDevice {
private:
	int id;
	string model;
	string imei;
	string numberSeria;
	time_t purchaseDate;
	string OS;
	int storageCapacity;
	double cost;

public:
	MobileDevice(int id, const string& model, const string& imei,
		const string& numberSeria, time_t purcaseDate,
		const string& OS, int storageCapacity, double cost);
	~MobileDevice() = default;



	int getId() const  { return id; }
	string getModel() const { return model; }
	string getImei() const { return imei; }
	string getNumberSeria() const { return numberSeria; }
	time_t getPurcaseDate() const { return purchaseDate; }
	string getOS() const { return OS; }
	int getStorageCapacity() const { return storageCapacity; }
	double getCost() const { return cost; }


};
