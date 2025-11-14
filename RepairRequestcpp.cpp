#include "RepairRequest.hpp"
#include <iostream>

using namespace std;

RepairRequest::RepairRequest(int id, const string& description, UrgencyLevel urgency,
   time_t creationDate, RepairStatus status)
    : id(id), description(description), urgency(urgency),
    creationDate(creationDate), status(status)
{
    cout << "Заявка на ремонт #" << id << " создана. Срочность: " << static_cast<int>(urgency) << endl;
}

void RepairRequest::CreateRequest() {
    status = RepairStatus::created;
    cout << "Заявка на ремонт #" << id << " официально зарегистрирована в системе" << endl;
}

void RepairRequest::updateStatus(RepairStatus newStatus) {
    status = newStatus;
    cout << "Статус заявки #" << id << " изменен на: " << static_cast<int>(newStatus) << endl;
}