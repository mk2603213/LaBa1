#pragma once

#include <string>
#include <iostream>
#include <ctime>

using namespace std;
class Employee {

private:
	int id;
	string name;
	string departament;
	string position;
	string contactInfo;

public:
	Employee(int id, const string& name, const string& departament,
		const string& position, const string& contractInfo);
	~Employee() = default;

	int getId() const { return id; }
	string getName() const { return name; }
	string getDepartament() const { return departament; }
	string getPosition() const { return position; }
	string getContactInfo() const { return contactInfo; }
};
