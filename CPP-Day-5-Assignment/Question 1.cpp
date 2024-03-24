// Q1. Implement following classes. Test all functionalities in main().
// Create a class Date with data memebrs day,month and year.
// Cretae a class Person with data members name,address and birthdate.  The birthdate shoud be of 
// type date.
// Cretae a class Employee with data members id, sal, dept and joining date. The joining date should 
// be of type date.

#include<iostream>
using namespace std;

class Date{

    private:
        int day;
        int month;
        int year;

    public:

        Date(){
            day = 1;
            month = 1;
            year = 2000;
        }
        
        void acceptDate(){
            cout<<"Enter the date: "<<endl;
            cin>>day;
            cout<<"Enter Month: "<<endl;
            cin>>month;
            cout<<"Enter year: "<<endl;
            cin>>year;

        }

        void printDate(){
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }


};

class Person{
    private:
        string name;
        string address;
        Date bDay;

       

    public:

        Person(){
            name = "";
            address = "";
            

            
        }

        void acceptPerson(){
            cout<<"\nFOR PERSON"<<endl;
            cout<<"Enter name: "<<endl;
            cin>>name;
            cout<<"Enter address: "<<endl;
            cin>>address;
            cout<<"For birthdate "<<endl;
            bDay.acceptDate();

            
        }


        void displayPerson(){
            cout<<"\nPerson details: "<<endl;
            cout<<"name: "<<name<<"\n"<<"address: "<<address<<endl;
            cout<<"Person Birthdate: "<<endl;
            bDay.printDate();

            
        }


        

};

class Employee{

    private:
        int empid;
        int salary;
        int dept;
        Date doj;
        
    
    public:
        Employee(){
            empid = 1;
            salary = 100;
            dept = 1;
        }

        void acceptEmployee(){
            cout<<"Enter employee details"<<endl;
            cout<<"Enter empID: "<<endl;
            cin>>empid;
            cout<<"Enter employee salary: "<<endl;
            cin>>salary;
            cout<<"Enter employee dept: "<<endl;
            cin>>dept;
            cout<<"Joining DAte: "<<endl;
            doj.acceptDate();
            
           
        }

        void displayEmployee(){
            cout<<"\nEmployee details are: "<<endl;
            cout<<"id: "<<empid<<"\n"<<"salary: "<<salary<<"\n"<<"dept: "<<dept<<endl;
            cout<<"Date of joining of employee: "<<endl;
            doj.printDate();
           
        }

};


int main(){

    Employee e ;
    e.acceptEmployee();
    e.displayEmployee();


    Person p;
    p.acceptPerson();
    p.displayPerson();

}