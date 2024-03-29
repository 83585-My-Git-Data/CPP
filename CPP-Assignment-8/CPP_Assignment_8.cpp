#include<iostream>
using namespace std;

enum EAccountType{
    SAVINGS = 1 ,
    CURRENT = 2,
    DMAT = 3,
};

class InSufficientFundsException{

    private:
        string message;
    public:
        InSufficientFundsException(string message){
            this->message = message;
        }

        void display(){
            cout<<"Exception ! : "<<message<<endl;

        }
    

};

class Account{
    private:
        int accNo;
        EAccountType type;
        double balance;
    
    public:
        Account(){
            cout<<"Inside account()"<<endl;
            balance =0;
            accNo = 0;
        }

        Account(int accNo,EAccountType type,double balance){
            this->accNo = accNo;
            this->type = type;
            this->balance = balance;
        }

        int getAccNo(){
            return accNo;
        }

        void accept(){
            int choice;
            cout<<"Enter the customer details - "<<endl;
            cout<<"Press 1: To create SAVINGS account\nPress 2: To create CURRENT account\nPress 3: To create a DMAT account"<<endl;
            cin>>choice;
        switch (choice)
            {
            case 1:
            {
                type = SAVINGS;
                cout<<"Enter account number: "<<endl;
                cin>>accNo;
                if(accNo>0)
                {
                    
                    balance = 0;
                }
                else throw InSufficientFundsException("Account number should be greater than 0");
                break;
            }

            case 2:
            {
                type = CURRENT;
                cout<<"Enter account number: "<<endl;
                cin>>accNo;
                if(accNo>0)
                {
                   
                    balance = 0;
                }
                else throw InSufficientFundsException("Account number should be greater than 0");
                break;
            }
            
            case 3:
            {
                type = DMAT;
                cout<<"Enter account number: "<<endl;
                cin>>accNo;
                if(accNo>0)
                {
                    
                    balance = 0;
                }
                else throw InSufficientFundsException("Account number should be greater than 0");
                break;
            }   
            
            default:

                cout<<"Please enter valid number"<<endl;
                break;
            }

            
        }
        void display(){

            cout<<"\nCustomer details:"<<endl;
            cout<<"AccountNo: " <<accNo<<endl;
            cout<<"Account Type: ";
            switch (type)
            {
            case 1:
                cout<<"SAVINGS"<<endl;
                break;
            case 2:
                cout<<"CURRENT"<<endl;
                break;
            case 3:
                cout<<"DMAT"<<endl;
                break;
            
            default:
                break;
            }
            cout<<"Balance: "<<balance<<endl;

        }

        void deposite(double amount){

            if(amount>0){

            balance += amount;
            cout<<"\nSuccessfully deposited.."<<endl;
            cout<<"Availble balance: Rs. "<<balance;
            }
            else{
                throw InSufficientFundsException("Deposite amount should be greater than RS.0");
            }


        }

        void withdraw(double amount){
            if(balance>=amount)
            {

                balance -=amount;
                cout<<"\nSuccesfully withdrawn"<<endl;
                cout<<"Availble balance: Rs. "<<balance;

            }
            else{
                throw InSufficientFundsException("Balance cannot be negative, Please add funds to proceed");
            }
        }


};

int main(){

    Account *arr[5];
    int index =0;
    EAccountType type;
    int choice;

    do{
        cout<<"\nWelcome to the bank..!"<<endl;
        cout<<"Press 1: To create your account"<<endl;
        cout<<"Press 2: To Display account details"<<endl;
        cout<<"Press 3: To Deposite the amount"<<endl;
        cout<<"Press 4: To Withdraw the amount"<<endl;
        cout<<"Press 5: To exit"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
        {
            try{
            if(index<5){
                arr[index] = new Account();
                arr[index]->accept();
                index++;
            }
            }
            catch(InSufficientFundsException e){
                e.display();
            }
            break;
        }
        case 2:
        {
            for(int i = 0;i<index;i++){
                arr[i]->display();
            }
            break;
        }
        case 3:
        {  
        try{
        if(index<5)
        { 
            int amt;
            int accN;
            cout<<"Enter your account number"<<endl;
            cin>>accN;
            cout<<"Enter amount to be deposited: "<<endl;
            cin>>amt;
            for(int i = 0;i<index;i++){
                if(arr[i]->getAccNo() == accN )
                {
                    arr[i]->deposite(amt);

                }
            }
        }
        else{
            cout<<"Bank limit exhusted"<<endl;
        }
        }
        catch(InSufficientFundsException e){
            e.display();
        }
            
            break;
        }
        case 4:
        {   
            try{
            if(index<5){
            int amt;
            int accN;
            cout<<"Enter your account number"<<endl;
            cin>>accN;
            cout<<"Enter amount to be withdrawn: "<<endl;
            cin>>amt;
            for(int i= 0;i<index;i++){
                if(arr[i]->getAccNo()==accN){
                    arr[i]->withdraw(amt);
                }
            }
            }
            else{
                cout<<"Bank limit exhusted"<<endl;
            }
            }
            catch(InSufficientFundsException e){
                e.display();
            }
            break;
        }
        case 5:
        {
            cout<<"Thank you.."<<endl;
            break;
        }

        default:
            break;
        }
        }while (choice !=5);

        for(int i=0 ;i<index;i++){
            delete arr[i];
            arr[i] = NULL;
        }

        return 0;
        

}