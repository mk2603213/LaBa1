#pragma once
#include <iostream>
#include<string>
#include <ctime>

using namespace std;

enum class UrgencyLevel {
	low =0, medium = 1, high =2
};

enum class RepairStatus 
{
	created = 0, in_progress = 1, compleyted = 2, closed = 3 
};

class RepairRequest {
private:
	int id;
	string description;
	UrgencyLevel urgency;
	time_t creationDate;
	RepairStatus status;

public:
	RepairRequest(int id, const string& description, UrgencyLevel urgency,
		time_t creationDate, RepairStatus status);
	~RepairRequest() = default;

	void CreateRequest();
	void updateStatus(RepairStatus newStatus);

	int getId() const { return id; }
	string getDescription() const { return description; }
	UrgencyLevel getUrgency() const { return urgency; }
    time_t getCreationDate() const { return creationDate; }
	RepairStatus getStatus() const { return status; }
};

