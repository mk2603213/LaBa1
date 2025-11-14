#include <iostream>
#include <vector>
#include <ctime>
#include "Employee.hpp"
#include "DeviceAssignment.hpp"
#include "MobileDevice.hpp"
#include "RepairInfo.hpp"
#include "RepairRequest.hpp"
#include "SimCard.hpp"
#include <locale.h>

using namespace std;
void demoStaticInit();
void demoDinamicInit();
void demoReferencesAndPointers();
void demoArrays();

int main() {

	setlocale(LC_ALL, "ru");
	cout << "+++ Демо версия программы для работы система учета мобильных устройств+++" << endl;
	demoStaticInit();
	demoDinamicInit();
	demoReferencesAndPointers();
	demoArrays();

	return 0;

}

void demoStaticInit() {
	cout << "\n--- Статическая инициализация ---" << endl;

	MobileDevice device1(1, "Samsung Galaxy S21", "123456789012345", "SN001",
		time(nullptr), "Android", 128, 599.99);

	SimCard sim1(1, "+79123456789", "MTS", "Business", 10240, 500,
		time(nullptr), time(nullptr) + 31536000);

	Employee employee1(1, "Иванов Иван Иванович", "IT", "Разработчик", "ivanov@company.com");

	cout << "Проверка памяти устройства: " << device1.getStorageCapacity() << "GB" << endl;

}


void demoDinamicInit() {
	cout << "\n--- Динамическая инициализация ---" << endl;
	cout << "\n--- Работа с ссылками и указателями ---" << endl;

	RepairRequest request(1, "Не работает экран", UrgencyLevel::high,
		time(nullptr), RepairStatus::created);

	RepairRequest& requestRef = request;
	requestRef.CreateRequest();

	RepairRequest* requestPtr = &request;
	requestPtr->updateStatus(RepairStatus::in_progress);
	requestPtr->updateStatus(RepairStatus::compleyted);
}

void demoReferencesAndPointers() {

	cout << "\n ___ Работа с ссылками и указателями ___" << endl;

	//Создание объекта
	RepairRequest request(1, "Не работает экран", UrgencyLevel::high,
		time(nullptr), RepairStatus::created);

	//Работа со ссылкой
	RepairRequest& requestRef = request;
	requestRef.updateStatus(RepairStatus::in_progress);

	//Работа с указателем
	RepairRequest* requestPtr = &request;
	requestPtr->updateStatus(RepairStatus::compleyted);

	cout << "Финальный статус заявленмия: " << endl;

}

void demoArrays() {

	cout << "\n\n ___ Работа с массивами объектов ___" << endl;

	const int deviceCount = 3;
	MobileDevice* deviceArray = new MobileDevice[deviceCount]{
		MobileDevice(3,"Redmi Netu 10","111111111111","SN003",
			time(nullptr),"Android",64,300),
		MobileDevice(4,"Huyawei 3","1231232313","SN004",
			time(nullptr),"Android",128,200),
		MobileDevice(5,"Nokia 3310","234232323","SN005",
			time(nullptr),"NOPE",2,5)
	};

	cout << "\n\nДинамический массив устрйств: " << endl;
	for (int i = 0; i < deviceCount; i++) {
		cout << " " << deviceArray[i].getModel() << " - " << deviceArray[i].getCost() << "Руб." << endl;

	}

	delete[] deviceArray;

	//Массив динамических объектов

	Employee** employees = new Employee * [2];
	employees[0] = new Employee(2, "Петров Петр Петрович", "HR", "Менеджре",
		"petrov@mail");
	employees[1] = new Employee(3, "Каширкася Анна Сергеева", "Finance", "Главбух",
		"annf@mail");

	cout << "Массив динамических объектов сотрудников: " << endl;

	for (int i = 0; i < 2; i++) {
		cout << " " << employees[i]->getName() << " - "
			<< employees[i]->getDepartament() << endl;
		delete employees[i];
	}
	delete[] employees;

	//Вектор объектов (Алтернатива массивам)

	vector<SimCard> simCards;
	simCards.emplace_back(2, "+7982312352", "Beeline", "standart", 5120, 300,
		time(nullptr), time(nullptr) + 31536000);
	simCards.emplace_back(3, "+7985252352", "Beeline", "Econob", 120, 360,
		time(nullptr), time(nullptr) + 31536000);

	cout << "Вектор Sim карит: " << endl;
	for (const auto& sim : simCards) {
		cout << " " << sim.getPhoneNumber() << " - " << sim.getCarrier() << endl;
	}
}
