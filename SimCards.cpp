#include "SimCard.hpp"
#include <iostream>

using namespace std;

SimCard::SimCard(int id, const string& phoneNumber, const string& carrier, const string& tariffPlan,
	int dataLimit, int minLimit, time_t activationDate, time_t BlockDate)
	:id(id), phoneNumber(phoneNumber), carrier(carrier), tariffPlan(tariffPlan),
	dataLimit(dataLimit), minLimit(minLimit), activationDate(activationDate), BlockDate(BlockDate)
{
	cout << "SIM-карта " << phoneNumber << " создана с тарифом " << tariffPlan << endl;
}

