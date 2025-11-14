#pragma once
#include <string>
#include <ctime>
#include <iostream>

using namespace std;

class RepairInfo {
private:
    int id;
    time_t repairDate;
    double repairCost;
    string performer;
    time_t warrantyUntil;

public:
    RepairInfo(int id, time_t repairDate, double repairCost,
        const string& performer, time_t warrantyUntil);
    ~RepairInfo() = default;

    void linkToRequest();


    int getId() const { return id; }
    time_t getRepairDate() const { return repairDate; }
    double getRepairCost() const { return repairCost; }
    string getPerformer() const { return performer; }
    time_t getWarrantyUntil() const { return warrantyUntil; }
};
