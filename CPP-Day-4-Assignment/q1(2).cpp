// Q1. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not given, allocate stack of size 5.
// Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().



#include<iostream>
using namespace std;

class Stack{

    private:
        int size;
        int index;
        int *ptr;


    public:

        Stack():Stack(5){}

        Stack(int size){
            this->size = size;
            index = 0;                                           
            ptr = new int[size];   

        }

        void push(int number){
            if(index != size){
            ptr[index] = number;
            index++;
            }
            else{
                cout<<"Stack overflow";
            }

        }

        int pop(){
            if(index != 0){
                index--;
            return ptr[index] ;
            
            }

            else{
                cout<<"Stack underflow";
            }
            //logic as index -- 
        }

        int peek(){
            if(index != 0){
            return ptr[index-1];
            }
            else{
                cout<<"Empty stack";
            }
        }

        bool isEmpty(){
            return index == 0;
        }

        bool isFull(){
            
            return index == size;

        }

        void print(){
            cout<<"Your stack using dynamic array is:"<<endl;
            for(int i =index-1;i>=0;i--){
                cout<<" "<<endl;
                cout<< ptr[i]<<endl;
                cout<<"__";

            }

        }

        ~Stack(){
            delete[] ptr;
        }

};

int main(){

    Stack st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    st.print();

    int popped =  st.pop();
    cout<<"Popped elemet: "<<popped<<endl;

    cout<<"After popping"<<endl;

    st.print();

    bool is = st.isEmpty();
    cout<<is<<endl;

    bool isFull = st.isFull();
    cout<<isFull<<endl;

    






}
