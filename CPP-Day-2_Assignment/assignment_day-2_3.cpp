// Q3. Write a class Address with data members (string building, string street, string city ,int pin)
//  Implement constructors, getters, setters, accept(), and display() methods.
// Test the class functunalities by creating the object of class and calling all the functions.

#include<iostream>
using namespace std;

class Address{

    private:

        string building;
        string street;
        string city;
        int pin;

    public:

        Address(string b,string s,string c,int pin){
            building = b;
            street = s;
            city = c;
            this->pin = pin;

        }

        string getBuilding(){
            return building;
        }
        string getStreet(){
            return street;
        }
        string getCity(){
            return city;
        }

        int getPin(){
            return pin;
        }

        void setBuilding(string building){
            this->building = building;

        }

        void setStreet(string street){
            this->street = street;

        }
        void setCity(string city){
            this->city = city;

        }

        void setPin(int pin){
            this->pin = pin;

        }

        void display(){
            cout<<"Your entered address is:"<<endl;
            cout<<"Buliding: "<<building<<endl;
            cout<<"City: "<<city<<endl;
            cout<<"Street: "<<street<<endl;
            cout<<"Pin: "<<pin<<endl;
        }

        void accept(){
            string b,s,c;
            int p;

            cout<<"Enter building name: ";
            cin>>b;
            setBuilding(b);

            cout<<"Enter street: ";
            cin>>s;
            setStreet(s);

            cout<<"Enter city: ";
            cin>>c;
            setCity(c);

            cout<<"Enter pin: ";
            cin>>p;
            setPin(p);
        }




};

int main(){


        string building;
        string street;
        string city;
        int pin;
    

    cout<<"Welcome to address storing system"<<endl;
    cout<<"Enter the details as follows:"<<endl;
    cout<<"Enter Building name,\nStreet,\nCity,\nPin"<<endl;
    cin>>building>>street>>city>>pin;

    Address a(building,street,city,pin);
    a.display();

    cout<<"You are entering in the editing filed..!"<<endl;
    a.accept();
    a.display();

    return 0;

}