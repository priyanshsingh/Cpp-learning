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
        cout << "Default Constructor called !!!\n";
        company_name = "TOYOTA";
    }

    Cars(string cname, string mname, string ftype, float m, double p) //PARAMETERISED CONSTRUCTOR
    {

        cout << "Parameterised Constructor called !!!\n";
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    Cars(Cars &obj)
    {
        cout << "Copy Constructor called !!!\n";
        company_name = obj.company_name;
        model_name = obj.model_name;
        fuel_type = obj.fuel_type;
        mileage = obj.mileage;
        price = obj.price;
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

    ~Cars() //DESTRUCTOR
    {
        cout << "\n\nDestructor Called!!!\n\n";
    }
};

int main()
{
    Cars car1, car2("Toyota", "Fortuner", "Disel", 12, 3500000);
    car1.display_data();
    car2.display_data();

    Cars car3 = car1;
    car3.display_data();

    return 0;
}