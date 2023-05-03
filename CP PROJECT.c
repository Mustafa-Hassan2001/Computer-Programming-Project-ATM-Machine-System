#include <stdio.h>
#include <stdlib.h>

void Transaction(){
	
  int balance = 1000, Newbalance, anotherTransaction, choice, amountToWidthdraw, amountToDeposit;

  	printf("\n*************\"Welcome to MA Bank ATM Service\"**************\n");

    printf("1-> Withdraw Cash\n"); 

    printf("2-> Deposit Cash\n");

    printf("3-> Check Balance\n");

    printf("4-> Quit\n");

    printf("********************************************\n\n");

    printf("Enter your choice: ");

    scanf("%d", & choice);

  switch(choice){
    
	case 1:				// Withdraw
	  
    printf("Please enter amount to withdraw: "); 
    
	scanf("%d", &amountToWidthdraw);
	 
    if(amountToWidthdraw > balance){
    
	  printf("There is no insuffient funds in your account"); 
 
      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n"); 
    
	  scanf("%d", &anotherTransaction); 
    
	  if(anotherTransaction == 1){
   
        Transaction();
    
	}
	  
    }
	
	else{

      balance = balance - amountToWidthdraw; 
      
      printf("You have withdrawn %d and your new balance is %d ", amountToWidthdraw, balance);
      
      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n"); 
      
	  scanf("%d", &anotherTransaction); 
      
	  if(anotherTransaction == 1){
    
        Transaction();
    }
      
    }
    
    break; 
    
    case 2:  		// DEPOSIT
    
    printf("Please enter amount to deposit: "); 
    
	scanf("%d", &amountToDeposit); 
    
    Newbalance = amountToDeposit + balance; 
    
    printf("Thank you for depositing, new balance is: %d", Newbalance); 
    
     balance == Newbalance;
     
	  printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n"); 
    
	  scanf("%d", &anotherTransaction); 
    
	if(anotherTransaction == 1){
    
        Transaction();
    
	}
    
    break; 
    
    case 3:					// BALANCE
    
    printf("Your bank balance is: %d", balance); 
    
      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n"); 
    
	  scanf("%d", &anotherTransaction); 
    
	if(anotherTransaction == 1){
       
        Transaction();
    
	}
    
    break;
  
    case 4:
	
	printf("\n\n****************************\"THANK YOU TO USING OUR ATM SERVICES\"************************\n");  
 
  }
  
}



int main(){
   
  Transaction();
  
  return 0;
}
