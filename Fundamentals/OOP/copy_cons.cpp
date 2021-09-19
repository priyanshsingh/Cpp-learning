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
    Cars()
    {
        cout << "Default Constructor Called" << endl;
    }
    Cars(string mname, string ftype, float mil, double pri)
    {
        cout << "Parameterized Constructor Called" << endl;
        model_name = mname;
        fuel_type = ftype;
        mileage = mil;
        price = pri;
    }
    Cars(Cars &obj)
    {
        cout << "Copy Constructor Called" << endl;
        company_name = obj.company_name;
        model_name = obj.model_name;
        fuel_type = obj.fuel_type;
        mileage = obj.mileage;
        price = obj.price;
    }
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
    ~Cars()
    {
        cout << "Destructor called!!!" << endl;
    }
};

int main()
{
    Cars car1, car2("Fortuner", "Disel", 10.0, 350000);
    car1.setData("Toyota", "Altis", "Petrol", 15.5, 150000);
    car1.DisplayData();

    cout << endl
         << endl;

    car2.DisplayData();

    cout << endl
         << endl;

    Cars car3 = car1;
    car3.DisplayData();

    return 0;
}