
// Q2. Write a class for Time and provide the functionality Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()
// Allocate the memory for the the object dynamically and test the functionalities using time ptr.


#include<iostream>
using namespace std;


class Time{
    private:
        int hours;
        int mins;
        int sec;

    public:

        Time(int h,int m,int s){
            hours = h;
            mins = m;
            sec = s;

        }

        Time(){

        }

        int getHours()
        {
            return hours;
        }

    
        void setHours(int hours)
        {
            this->hours = hours;
        }

   
        int getMins()
        {
            return mins;
        }

    
        void setMins(int mins)
        {
            this->mins = mins;
        }

   
        int getSec()
        {
            return sec;
        }

    
        void setSec(int sec)
        {
            this->sec = sec;
        }

        void printTime(){
            cout<<"This is the time: "<<endl;
            cout<<hours<<":"<<mins<<":"<<sec;
        }

    

    
        

};

int main(){


       Time *t= new Time(7,15,45);
    
    t->printTime();


    cout<<"\nNow using setter"<<endl;

    Time *t1 = new Time();

    t1->setHours(10);
    t1->setMins(30);
    t1->setSec(12);

    t1->printTime();

    cout<<"\nGetting the information using getter: "<<endl;

   int hrs =  t1->getHours();
   int mins =  t1->getMins();
   int sec =  t1->getSec();

   cout<<hrs<<":"<<mins<<":"<<sec<<endl;
   


}
