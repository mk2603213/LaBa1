#pragma once
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class SimCard {

private:
	int id;
	string phoneNumber;
	string carrier;
	string tariffPlan;
	int dataLimit;
	int minLimit;
	time_t activationDate;
	time_t BlockDate;


public:
	SimCard(int id, const string& phoneNumber, const string& carrier, const string& tariffPlan,
	int dataLimit, int minLimit, time_t activationDate, time_t BlockDate);

	~SimCard() = default;

	int getId() const { return id; }
	string getPhoneNumber() const { return phoneNumber; }
	string getCarrier() const { return carrier; }
	string getTariffPlan() const { return tariffPlan; }
	int getDataLimit() const { return dataLimit; }
	int getMinLimit() const { return minLimit; }
	time_t getActivationDate() const { return activationDate; }
	time_t getBlockDate() const { return BlockDate; }
};

