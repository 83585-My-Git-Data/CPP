#include<stdio.h> 

struct date {
    int day;
    int month;
    int year;

}; 

void acceptDateFromConsole(struct date *ptrdate){
    printf("Enter the day, Month and Year in ");
    scanf("%d %d %d",&ptrdate->day,&ptrdate->month,&ptrdate->year);
}


void printDateOnConsole(struct date  *ptrdate){
     printf("date is %d-%d-%d",ptrdate->day, ptrdate->month, ptrdate->year);
}


int main(){
    int choice;
    struct date d1;

    do{
        printf("Choose from the below options : \n");
        printf("0. Exit \n");
        printf("1. Accept date \n");
        printf("2. Display date \n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 0 : printf("Thank you !!! See you again... \n");
            break;
        case 1 :
                acceptDateFromConsole(&d1);
                break;
        case 2 : 
                printDateOnConsole(&d1);
                break;
                

        default: printf("wrong Choice !!!Try Again....\n");
        break;
        }

        

    }while (choice != 0);
    return 0;
    

}