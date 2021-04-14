#include <iostream>
using namespace std;

class CARS
{
private:
    string name;
    string model;
    string fuel;
    float mileage;
    long price;

public:
    void setData(string car_name, string car_model, string car_fuel, float car_mileage, long car_price)
    {
        name = car_name;
        model = car_model;
        fuel = car_fuel;
        mileage = car_mileage;
        price = car_price;
    }

    void displayData()
    {
        cout << "Car Properties are: " << endl;
        cout << "Car Name: " << name << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Fuel Type: " << fuel << endl;
        cout << "Car Mileage: " << mileage << endl;
        cout << "Car Price: " << price << endl;
    }
};

int main()
{
    CARS car1, car2;
    car1.setData("Audi", "A4", "Petrol", 10.12, 500000);
    car1.displayData();

    cout << endl;

    car2.setData("Mercedes", "Benz", "Petrol", 8.8, 800000);
    car2.displayData();

    return 0;
}