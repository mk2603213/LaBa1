#include "MobileDevice.hpp"
#include <iostream>
using namespace std;

MobileDevice::MobileDevice(int id, const string& model, const string& imei,
    const string& numberSeria, time_t purchaseDate,
    const string& OS, int storageCapacity, double cost)
    : id(id), model(model), imei(imei), numberSeria(numberSeria),
    purchaseDate(purchaseDate), OS(OS),
    storageCapacity(storageCapacity), cost(cost)
{
    cout << "ћобильное устройство " << model << " (IMEI: " << imei << ") добавлено в систему" << endl;
}

