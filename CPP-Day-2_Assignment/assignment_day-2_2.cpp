// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. 
// Mostly they do, but sometimes a car goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money 
// collected. Model this tollbooth with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number of cars, and a type double to 
// hold the total amount of money collected.
// A constructor initializes all data members to 0. A member function called payingCar() increments 
// the car total and adds 0.50 to the cash total. An other function, called nopayCar()
// increments the car total but adds nothing to the cash total. Finally, a member function called 
// printOnConsole() displays the two totals and number of paying as well as non paying cars total


#include<iostream>
using namespace std;

class Tollbooth{
    private:
    int totalCars;
    double amountcollected;

    public:

    Tollbooth(){
        totalCars = 0;
        amountcollected = 0.0;

    }

    void payingCar(){
        totalCars = totalCars + 1;
        amountcollected = amountcollected+0.50;
    }

    void noPayCar(){
        totalCars = totalCars + 1;
    }
    
    void printOnConsole(){
        int totalCarMadePayment = amountcollected/0.50;
        cout<<"Total cars passed: "<<totalCars<<endl;
        cout<<"Total toll collected: "<<amountcollected<<endl;
        cout<<"Number of cars who made toll payment: "<<totalCarMadePayment<<endl;
        cout<<"Number of cars who did not paid toll: "<<totalCars-totalCarMadePayment<<endl;

    }



};

int main(){

    int choice;
    Tollbooth t;

    while (true)
    {
    cout<<"press 0: for exit"<<endl;
    cout<<"Press 1: To add paying car"<<endl;
    cout<<"Press 2: To add non paying car"<<endl;
    
    

    cin>>choice;


    switch (choice)
    {
    case 0:
        return 0;
    case 1:
    {
       
        t.payingCar();
        t.printOnConsole();
        break;
    }
    case 2:
    {
        
        t.noPayCar();
        t.printOnConsole();
        break;
    }
    default:
        break;
    }

        
    }
    

    

    
   
    

    


    return 0;

}