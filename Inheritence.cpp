// Inheritence (drive one class class from an other class)
/*
Inheritance is the process by which a new class—
known as a derived class—is created from another class, called the base class.
Note: 
1. Default visibilty mode is private
2. Public Visibilty Mode: Public Members of the base class become public members of the derived class
3. Private Visibilty Mode: Private Public members of the base class becomes becomes Private members 
   of the derived class
4. Private members are never inherited  
*/

#include <iostream>
using namespace std;

// Base class
class Device
{
    public:         // Delare public Because I want to inherit them
    string model;
    string serialNumber;
    // string status()
    // {

    // }
};
// Initialisation Of class 
// Derived class 
// class {{derived-class-name}} : {{visibility-mode} {base class name}}     // Syntax for derived class
class DoorDevice: Device
{
    string option;
    public:
    void openClose(string doormodel, string door_serialNumber, string op)
    {
        model = doormodel;
        serialNumber = door_serialNumber;
        option = op;
    }
    void display()
    {
        if (model == "Floor1" && serialNumber == "door021" && option == "On" || option == "on")
        {
            cout<<"Please wait the Door is opening\n";
        }
        else if (model == "Floor1" && serialNumber == "door021" && option == "Off" || option == "off")
        {
            cout<<"Please wait the Door has closed\n";
        }
        else
        {
            cout<<"Sorry you are not permitted";
        }
    }

};
class Themostat: Device
{
    int temperature;
    public:
    void setTemp (string thermomodel, string thermo_serialNumber, int temp)
    {
        model = thermomodel;
        serialNumber = thermo_serialNumber;
        temperature = temp;
    }
    void display()
    {
        if (model == "Yoheen" && temperature <=0 && serialNumber == "therm21")
        {
            cout<<"You are not able to use this\n";
        }
        else if (model == "Yoheen" && temperature >0 && temperature <=40 && serialNumber == "therm21")
        {
            cout<<"You are able to use this\n";
        }
        else
        {
            cout<<"Sorry We don't have choice for you\n";
        }
    }
};
int main()
{
    DoorDevice d1;
    Themostat t1;
    d1.openClose("Floor1", "door021", "off");
    d1.display();
    t1.setTemp("Yoheen", "therm21", -25);
    t1.display();

    return 0;
}