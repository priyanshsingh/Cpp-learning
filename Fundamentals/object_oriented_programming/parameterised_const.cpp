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
    Cars() //DEFAULT CONSTRUCTOR
    {
        company_name = "TOYOTA";
    }

    Cars(string cname, string mname, string ftype, float m, double p) //PARAMETERISED CONSTRUCTOR
    {
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
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
        cout << endl
             << "Car Properties are : " << endl
             << endl;
        cout << "Company Name = " << company_name << endl;
        cout << "Model Name = " << model_name << endl;
        cout << "Fuel Type = " << fuel_type << endl;
        cout << "Mileage = " << mileage << endl;
        cout << "Price = " << price << endl
             << endl;
    }
};

int main()
{
    Cars car1, car2("Toyota", "Fortuner", "Disel", 12, 3500000);
    car1.display_data();
    car2.display_data();

    return 0;
}