// Q1. Write a class to find volume of a Cylinder by using following members. (volume of Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height) getRadius()
// setRadius()
// getHeight()
// setHeight()
// getVolume()
// printVolume()
// Initialize members using constructor member initializer list. Optional – Use the Modular Apporach

#include<iostream>
using namespace std;

class Cylinder {

    private:
        double radius;
        double height;
        static const double PI;

    public:

        Cylinder():radius(4),height(6)
        {

        }

        Cylinder(double radius,double height){
            this->radius = radius;
            this->height = height;

        }

        static double getPI(){
            return PI;
        }

        double getRadius(){
            return radius;
        }

        double getHeight(){
            return height;
        }

        void setRadius(double radius){
            this->radius = radius;
        }
        
        void setHeight(double height){
            this->height = height;
        }

        double getVolume(){
            return PI*radius*radius*height;
        }

        void printVolume(){
            cout<<"Volume of cylinder is: "<<PI*radius*radius*height<<endl;
        }

};

const double Cylinder:: PI = 3.14;

int main(){
    cout<<"Started programme"<<endl;
    Cylinder c1;
    
    Cylinder c2(5,8);

    double val = c1.getPI();
   double val1 =  c2.getPI();
   cout<<"Value of PI c1: "<<val<<"Value of PI c2: "<<val1<<endl;

    c1.getVolume();    
    c1.printVolume();

    c2.getVolume();
    c2.printVolume();

    
}