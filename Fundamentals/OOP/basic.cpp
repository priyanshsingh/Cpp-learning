#include <iostream>
#include <string>
using namespace std;

class Cars
{
private:
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

public:
    void setData(string c_name, string m_name, string f_type, float m, double p)
    {
        company_name = c_name;
        model_name = m_name;
        fuel_type = f_type;
        mileage = m;
        price = p;
    }
    void DisplayData()
    {
        cout << "Car Properties: \n\n";
        cout << "Car Name: " << company_name << endl;
        cout << "Model Name: " << model_name << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Cars car1, car2;
    car1.setData("Toyota", "Altis", "Petrol", 15.5, 150000);
    car1.DisplayData();

    cout << endl
         << endl;

    car2.setData("Renault", "Triber", "Petrol", 18.2, 850000);
    car2.DisplayData();

    return 0;
}