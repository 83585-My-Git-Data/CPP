#include<iostream> 

using namespace std;  

class Box{
    private:
    int length;
    int width;
    int height; 
    

    public:

    Box(){

        length = 5;
        width = 3;
        height = 4;
    } 

    Box(int length,int width, int height){

        this->length = length;
        this->width = width;
        this->height = height;


    } 

    Box(int length){
        this->length = length;
        this->width = length;
        this->height = length;


    }

    void calculate_volume(){
        int volume;
        volume = length*width*height;
        cout<<"Volume is = "<<volume<<endl;
        
    } 

    


};


int main(){
    Box b1;
    Box b2(2,3,4);
    Box b3(2); 
    int choice;

    do
        
    {   cout<<"Choose from the below options :"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"1. Calculate_Parameteless"<<endl;
        cout<<"2. Calculate_Parameterized"<<endl;
        cout<<"3. Calculate_Single_Parameter"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 0: cout<<"Thank You See You again !!!";
            break; 
        case 1: b1.calculate_volume();
            break;
        case 2: b2.calculate_volume();
            break;
        case 3: b3.calculate_volume();
            break;
        
        default:cout<<"wrong Choice !!!";
            break;
        }


        /* code */
    } while (choice != 0);
    

    // b1.calculate_volume();
    // b2.calculate_volume();
    // b3.calculate_volume();
    
    // cout<<result1<<endl;
    // cout<<result<<endl;
    return 0;

}; 
