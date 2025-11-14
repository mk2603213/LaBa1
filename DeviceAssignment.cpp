#include "DeviceAssignment.hpp"
#include <iostream>

using namespace std;

DeviceAssignment::DeviceAssignment(int id, time_t assigmentDate,
    const string& deviceCondition, bool isSigned)
    : id(id), assigmentDate(assigmentDate), deviceCondition(deviceCondition),
    isSigned(isSigned)
{
    cout << "Создано назначение устройства ID:" << id << " с состоянием: " << deviceCondition << endl;
}

void DeviceAssignment::CompleteAssignment() {
    isSigned = true;
    cout << "Назначение " << id << " завершено. Акт подписан." << endl;
}

void DeviceAssignment::finalReturn() {
    isSigned = false;
    cout << "Устройство по назначению " << id << " возвращено. Назначение закрыто." << endl;
}