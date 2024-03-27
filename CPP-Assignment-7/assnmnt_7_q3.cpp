#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
        cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }

    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
        cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

// int main2()
// {
//     // Employee *eptr = new Employee();
//     // Employee *eptr = new Manager();
//     // Employee *eptr = new Salesman();
//     Employee *eptr = new SalesManager();
//     eptr->accept(); // Late Binding
//     eptr->display();

//     delete eptr;
//     eptr = NULL;
//     return 0;
// }

// int main1()
// {
//     // Employee obj;
//     // Manager obj;
//     // Salesman obj;
//     SalesManager obj;
//     obj.accept();
//     obj.display();
//     return 0;
// }

int main()
{
    int choice;
    int index = 0;
    Employee *arr[10];
    int manager_cnt = 0; 
    int salesman_cnt = 0; 
    int salesmanager_cnt = 0;

    do
    {
        cout << "0. Exit" << endl;
        cout << "1. Accept Employee" << endl;
        cout << "2. Display all Employee" << endl;
        cout << "3. Display count of Manager" << endl;
        cout << "4. Display count of Salesman" << endl;
        cout << "5. Diaplay count of Salesmanager" << endl;
        cout << "6. Display count of all Employees" << endl;
       

        // cout <<"5. Display all Salesman"<<endl;
        // cout <<"6. Display all Salesmanager"<<endl;

        // cout <<"4. Wrong Choice"<<endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Thank you !!!.....";
            break;

        case 1:
            int input;
            {
                cout << "1. Enter Manager" << endl;
                cout << "2. Enter Salesman" << endl;
                cout << "3. Enter Salesmanager" << endl;
                cin >> input;

                switch (input)
                {
                case 1:
                    if (index < 10)
                    {
                        arr[index] = new Manager();
                        arr[index]->accept();
                        // arr[index] -> display();
                        index++;
                    }
                    break;

                case 2:
                    if (index < 10)
                    {
                        arr[index] = new Salesman();
                        arr[index]->accept();
                        // arr[index] -> display();
                        index++;
                    }
                    break;

                case 3:
                    if (index < 10)
                    {
                        arr[index] = new SalesManager();
                        arr[index]->accept();
                        index++;
                        // arr[index] -> display();
                    }
                    break;

                default:
                    cout << "Wrong Choice !!!!!.....";
                    break;
                }
            } 

            break;

        case 2:
            for (int i = 0; i < index; i++)
            {   
                if (typeid(*arr[i]) == typeid(Manager))
                {   cout<<"Manager : ";
                    arr[i]->display();
                }

                if (typeid(*arr[i]) == typeid(Salesman))
                {   cout<<"Salesman : ";
                    arr[i]->display();
                }

                if (typeid(*arr[i]) == typeid(SalesManager))
                {   cout<<"Sales-manager";
                    arr[i]->display();
                } 

                
            }
            break;

        case 3:
            for (int i = 0; i < index; i++)
            {   
                if (typeid(*arr[i]) == typeid(Manager)){
                    manager_cnt++; 
                }

            }       
            cout<<"Manager count : "<<manager_cnt<<endl;

                    
            break;

        case 4:

            for (int i = 0; i < index; i++)
            {
                if (typeid(*arr[i]) == typeid(Salesman))
                {
                    salesman_cnt++; 

                } 
            }

            cout<<"Sales Manager count : "<<salesman_cnt<<endl;

            break;
       
        case 5:
            for (int i = 0; i < index; i++)
            {
                if (typeid(*arr[i]) == typeid(SalesManager))
                {
                    salesmanager_cnt++; 

                } 
            }
            
            cout<<"Sales Manager count : "<<salesmanager_cnt<<endl;

            break;

        case 6:
            cout<<"total emp count : "<<index<<endl;
            break;

            default:
                cout<<"Wrong Choice !!!";
                break;
        }

    }


while (choice != 0);

return 0;
}
