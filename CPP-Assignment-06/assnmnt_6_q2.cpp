// Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
// holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
// Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
// should be menu driven and should not cause memory leakage.
// Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3] 


#include<iostream> 

using namespace std; 

class Product{
    private:
    int id;
    string title;
    double price;  

    public:

    Product(){
        id = 0;
        title = "";
        price = 0.0;

    } 

    void accept(){
        cout<<"Enter product details :";
        cout<<"Enter the product ID :";
        cin>>id;
        cout<<"Enter the title of book :";
        cin>>title;
        cout<<"Enter the product Price :";
        cin>>price;
    } 

    void display(){
        cout<<"ID"<<id;
        cout<<"Title"<<title;
        cout<<"Price"<<price;

    }  

    



}; 

    class Book : public Product{
        private :
        string author; 

        public: 
        Book(){
            author = "";
        } 

        void accept(){
        cout<<"Enter product details :";
        cout<<"Enter the Author :";
        cin>>author;};

        void display(){
        cout<<"Author Name"<<author; 
        } 

        
    } ;

        double getPrice(){
            return this->price;
        }
    


    
        
 


class Tape : public Product{
        private :
        string artist; 

        public: 
        Tape(){
            artist = "";
        } 

        void accept(){
        cout<<"Enter product details :";
        cout<<"Enter the Author :";
        cin>>artist;
    

    } 

    void display(){
        cout<<"Author Name"<<artist; 
    } 
        
};

int main(){
Product *arr[3];
}