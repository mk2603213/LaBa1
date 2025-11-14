#pragma once

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class DeviceAssignment {
private:
	int id;
	time_t assigmentDate;
	string deviceCondition;
	bool isSigned;

public:
	DeviceAssignment(int id, time_t assigmentDate, const string& deviceCondition,
		bool isSigned);
	~DeviceAssignment() = default;

	void CompleteAssignment();
	void finalReturn();

	int getId() const { return id; }
	time_t getAssigmentDate() const { return assigmentDate; }
	string getDeviceCondition() const { return deviceCondition; }
	bool getIsSigntd() const { return isSigned; }
};

