#include<iostream> 

using namespace std;

class student{
    int roll;
    string name;
    int marks;
public:
    void acceptStudentFromConsole(){
        cout<<"Enter roll no, Name, and Marks : "<<endl;
        cin>>roll>>name>>marks;
    }

    void printStudentOnConsole(){
        cout<<"Roll No : "<<roll<<"Name : "<<name<<"Marks : "<<marks<<endl;
    }
};

int main(){
    student s1;
    int choice;
do{
    cout<<"Choose Options from the below options : "<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<"1. Accept Student "<<endl;
    cout<<"2. Display student Info :"<<endl;
    cin>>choice;


    switch (choice)
    {
    case 0: cout<<"SEE YOU AGAIN !!!! "<<endl;
        break;
    case 1: s1.acceptStudentFromConsole();
        break;
    case 2: s1.printStudentOnConsole();
        break;
    
    default: cout<<"Wrong Choice Try Again!!!";
        break;
    }
        
    } while(choice != 0);
        return 0;
}