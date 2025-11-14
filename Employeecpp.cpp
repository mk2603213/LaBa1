#include "employee.hpp"
using namespace std;
Employee::Employee(int id, const string& name, const string& departament,
    const string& position, const string& contactInfo)
    : id(id), name(name), departament(departament), position(position),
    contactInfo(contactInfo) 
   {
       cout << "Сотрудник " << name << " (" << position << ") зарегистрирован в системе" << endl;
   }
