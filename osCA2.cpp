#include<stdio.h>
#include<conio.h>
#include <windows.h>
using namespace std;

int main()
{
	int chairs=10;
	int customer,barber,c=3,d;
	int barberchair=0;
	while(c>1){
	printf("\n-=-=-=-=-=>WELCOME TO THE BARBER SHOP<=-=-=-=-=-");
	Sleep(1000);
	printf("\nPlease choose your option.");
	Sleep(1000);
	printf("\n1. Get inside shop.");
	Sleep(1000);
	printf("\n2. Check barber.");
	Sleep(1000);
	printf("\n3. Check for seats. \n->");
	Sleep(1000);
	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1:printf("\nGeting inside barber shop");
		         Sleep(1000);
				 printf("\nInside barber shop\n");
				 Sleep(1000);
	if(barberchair==0)
	{
	printf("\nNobody is in the shop");
	Sleep(1000);
	printf("\nGoing inside the barber room");	
	Sleep(1000);
	printf("\nWakeing the barber up");
	Sleep(1000);
	barberchair++;
	
	}
	
	else
	{ if(chairs==0){
	   	printf("\nSorry no more space for any customer ,please come after some time");
	   }
	   else{
	   	printf("\nBarber is busy.");
	    Sleep(1000);
		printf("\nWaiting in the waiting room.");
	   	Sleep(1000);
		printf("\nOccupying seat no => %d ",chairs);
	   Sleep(1000);
	   chairs--;
	   
	   }
    }
		break;
		
		case 2: Sleep(1000);
		        printf("\nChecking barber");
		        if(barberchair==0){ 
				Sleep(1000);
				printf("\nBarber is sleeping");
				Sleep(1000);
	              }
	
                else 
	            printf("\nBarber is working");
		        Sleep(1000);
		 break;
		 
		 case 3:Sleep(1000);
		        printf("\nCheckimg the number of seats left\n");
		        if(barberchair==0){
		        	Sleep(1000);
					printf("\nBarber room is vacant and waiting room is empty");
				    Sleep(1000);
				}
				else{Sleep(1000);
				printf("%d seats left",chairs);
				Sleep(1000);
				}
				
				break;
		
		
		default:printf("wrong choice");
	   Sleep(1000);
	   }
    Sleep(1000);
	printf("\npress 1 to continue or 0 to end :");
    scanf("%d",&d);
	if (d==0)
    break;
	}
   Sleep(1000);
   printf("\n>--------THE END---------<");
   Sleep(1000);
}
