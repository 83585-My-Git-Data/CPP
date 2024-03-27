// Q1. Create a class Date with data memebrs day,month and year.
// Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
// type Date.
// Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
// be of type date.
// Employee class should be inherited from Person.
// Implement following classes. Test all functionalities in main().
// (Note - Perform the Association and Inheritance in the above case.) 


#include<iostream> 

using namespace std;

class Date{ 
    private:
    int day;
    int month;
    int year; 

    public: 

    Date(){
        day = 0;
        month = 0;
        year = 0;


    }

    void acceptDate(){
        cout<<"Enter the date :"<<endl;
        cout<<"Enter the day :"<<endl;
        cin>>day;
        cout<<"Enter the month :"<<endl;
        cin>>month;
        cout<<"Enter the year :"<<endl;
        cin>>year;

    } 

    void displayDate(){
        cout<<day<<"-"<<month<<"-"<<year<<endl;
    }
}; 

class Person{
    private :
    string name; 
    string address;
    Date dob;

    public:

    Person(){
        name = "";
        address = "";
    } 

    void acceptData(){
        cout<<"Enter Person Details :"<<endl;
        cout<<"Enter Person Name :"<<endl;
        cin>>name;
        cout<<"Enter Person Address :"<<endl;
        cin>>address;
        cout<<"Enter Person Date Of Birth :"<<endl;
        dob.acceptDate();
        

    } 

   void displayData(){
        cout<<"Name : "<<name<<"\n Address :"<<address<<endl;
        cout<<"Date of Birth is :";
        dob.displayDate();
        
    }
};  

class Employee : public Person{
    private :
    int id;
    int sal;
    string dept;
    Date doj; 

    public : 

    Employee(){
        id = 0;
        sal = 0;
        dept = "";
    } 

    void acceptData(){
        cout<<"Enter Employee Details :"<<endl;
        cout<<"Enter Employee ID :"<<endl;
        cin>>id;
        cout<<"Enter Employee Salary :"<<endl;
        cin>>sal;
        cout<<"Enter Employee Date Of joining :"<<endl;
        doj.acceptDate();
        // Person::acceptData();
    } 

    void displayData(){
        cout<<"ID :"<<id<<"\n Salary :"<<sal<<endl;
        cout<<"Date of Joining is :";
        doj.displayDate();
        // Person::displayData();
    }


};

int main(){
    Date d1;
    Person p1;
    Employee e1;
    p1.acceptData();
    e1.acceptData();
    p1.displayData();
    e1.displayData();
    // Person *ptr = new Employee;
    // ptr -> acceptData();
    // ptr -> displayData();



}