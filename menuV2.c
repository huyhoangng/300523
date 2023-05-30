#include <stdio.h>
#include <math.h>
void displayMenu();
void placeOrder(char option);
float calculateTotalCost(char option, int quantity);
int main ()

{
 char option;
 int quantity;
 do{
 	displayMenu();
 	printf("Enter your option:\n");
 	scanf("%c",&option);
 	if (option !='d'){
 		printf("Enter the quantity:\n");
 		scanf("%d",&quantity);
 		placeOrder(option);
 		float totalCost=calculateTotalCost(option,quantity);
 		printf("Total cost:%2f\n\n",totalCost);
	 }
 }while (option =='e');
 return 0;
  }
  void displayMenu(){
  	printf("------CafeShop Menu--------\n");
  	printf("A. Espresso: 2.5$\n");
  	printf("B. Cappuccino: 3.0$\n");
  	printf("C. Latte: 3.5$\n");
  	printf("D. Cake: 2.5$\n");
  	printf("E. Quit\n");
  }
  void placeOrder(char option){
  	switch (option){
  		case 'a':
  			printf("Placing order: Espresso\n");
  			break;
  		case 'b':
  			printf("Placing order: Cappuccino\n");
  			break;
  		case 'c':
  			printf("Placing order: Latte\n");
  			break;
  		case 'd':
  			printf("Placing order: Cake\n");
  			break;
  		default:
  			printf("Invalid option. Please try again.\n");
  		
	  }
  }
  float calculateTotalCost(char option, int quantity){
  	float price;
  	switch(option){
  		case 'a':
  			price=2.5;
  			break;
  		case 'b':
  			price=3.0;
  			break;
  		case 'c':
  			price=3.5;
  			break;
  		case 'd':
  			price=2.5;
  			break;
  		default:
  			price=0.0;
  		
	  }
	  return price * quantity;
  }
  
