#include<iostream>

using namespace std;

struct date1 {
    int day;
    int month;
    int year;
    
 

void acceptdate(){
    cout<<"Enter the date,time and Year : "<<endl;
    cin >> day>> month>> year;
} 

void printdate(){
    cout<<"Date is "<<day<< "-" << month << "-" <<year <<endl;
}

bool checkLeapYear(){
    if(year % 4 == 0 or year %400 == 0){
        return true;
    } 
    else{
        return false;
    }
}
};


int main(){
    int choice;
    date1 d;
do{
    cout<<"Choose your choice : "<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Accept the date"<<endl;
    cout<<"2. print the date"<<endl;
    cout<<"3. Check leap year"<<endl;
    cin>>choice;


    switch (choice)
    {
    case 0 :
            cout<<"See You Again !!!"<<endl;
        break;
    case 1 :
            d.acceptdate();
            break;
    case 2 :
            d.printdate();
            break;
    case 3 :
            if(d.checkLeapYear()){
                cout<< d.year <<" is a leap year "<<endl;
            }
            else{
                cout<< d.year<<" is not a leap year "<<endl;
            }
            break;
    default: 
            cout<<"Wrong Choice "<<endl;
        break;
    } 
    
}while(choice != 0);
    
}