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
        cout << "Default Constructor Called\n";
        company_name = "TOYOTA";
        model_name = "ALTIS";
        fuel_type = "PETROL";
        mileage = 12.2;
        price = 1500000;
    }

    void set_data(string cname, string mname, string ftype, float m, double p)
    {
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    void display_data()
    {
        cout << "Car Properties are : " << endl
             << endl;
        cout << "Company Name = " << company_name << endl;
        cout << "Model Name = " << model_name << endl;
        cout << "Fuel Type = " << fuel_type << endl;
        cout << "Mileage = " << mileage << endl;
        cout << "Price = " << price << endl;
    }
};

int main()
{
    Cars car1;
    car1.display_data();

    return 0;
}