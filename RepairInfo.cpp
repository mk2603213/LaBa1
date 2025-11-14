#include "RepairInfo.hpp"
#include <iostream>

using namespace std;

RepairInfo::RepairInfo(int id, time_t repairDate, double repairCost,
    const string& performer, time_t warrantyUntil)
    : id(id), repairDate(repairDate), repairCost(repairCost),
    performer(performer), warrantyUntil(warrantyUntil) 
{
    cout << "Информация о ремонте #" << id << " записана. Исполнитель: " << performer << endl;
}

void RepairInfo::linkToRequest() {
    cout << "Информация о ремонте #" << id << " привязана к заявке на ремонт" << endl;
}