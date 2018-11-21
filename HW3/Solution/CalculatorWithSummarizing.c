#include<stdio.h>                                      // NEVZAT SEFEROÄžLU                                        								 // GEBZE TECHNICAL UNIVERSITY-2017	
#define TRUE 1					 // 171044024					
#define FALSE 0					 // HOMEWORK 3					
													    // Gebze Technical University			
int PrintSelection(int selection)                    
{
 printf("Selected Menu item is:");
 printf("%d\n",selection);
 return 1;
 
}

int DisplayMenu(){
 int selection;
 printf("\e[2J"); // clears screen
 printf("%s","\e[5;31;47mWELCOME TO ADDING PROGRAM\e[0m\n");
 printf("%s","(1) Add two numbers\n");
 printf("%s","(2) Sort an array\n");
 printf("%s","(3) Subtract two numbers\n");
 printf("%s","(4) Divide numbers\n");
 printf("%s","(5) Summarize numbers with words\n");
 printf("%s","(6) Exponent two numbers x to the y\n");
 printf("%s","(0) quit\n");
 printf("Selection:");	
 scanf("%d",&selection);
 PrintSelection(selection);
 return selection;
}
int main()
{
int  number1, number2, sum;
char wanttoexit = FALSE;
int counter;
int i,j;
int myArray[100];
int max;
int temp;
int choice;
int temp2=1;
int temp3=10;
int flag;
int myArray2[10000];
int myArray3[10000];
int number;
float t,p;

// main loop
while(wanttoexit == FALSE){

	choice= DisplayMenu();

	switch (choice)
{
	case 1:
		printf("PLEASE ENTER FIRST NUMBER:");
		scanf("%d",&number1);
		printf("PLEASE ENTER SECOND NUMBER:");
		scanf("%d",&number2);
			sum=number1+number2;
		printf("The result is = %d\n",sum);
		printf("TO CONTINUE PLEASE PRESS ONE(1) , TO EXIT PLEASE PRESS ZERO(0):");
		scanf("%d",&i);
			if(i==0)
			{	
				wanttoexit=TRUE;

            }
            


		break;

	case 2:
		printf("Enter numbers to sort  and please press 0 to terminate\n");
		for(i=0;i<100;i++){
			scanf("%d",&choice);
			if(choice == 0) break;
			myArray[i] = choice;
			max = i ;
		}
		printf("Numbers are entered.. \n");
		printf("Now sorting.. ");
	    for(i=0;i<=max;i++)
	    {
	       for(j=0;j<max; j++)
	       {
	           if(myArray[j] > myArray[j+1])
	           {
	           		temp = myArray[j];
	           		myArray[j]= myArray[j+1];
	           		myArray[j+1]=temp;
	           }
		    }
		    
		}
		printf("Finished..\n ");
	    for(i=0;i<=max;i++){
	      printf("%d  ",myArray[i]);
	    }
	      printf("Are the numbers.\n");
	      printf("TO CONTINUE PLEASE PRESS ONE(1) , TO EXIT PLEASE PRESS ZERO(0):");
		scanf("%d",&i);
			if(i==0)
			{	
				wanttoexit=TRUE;

            }
							
		break;



	case 3:
	    printf("PLEASE ENTER FIRST NUMBER:");
		
		scanf("%d",&number1);
		
		printf("PLEASE ENTER SECOND NUMBER:");
		
		scanf("%d",&number2);
		
			sum=number1-number2;
		
		printf("The result is = %d\n",sum);
		printf("TO CONTINUE PLEASE PRESS ONE(1) , TO EXIT PLEASE PRESS ZERO(0):");
		scanf("%d",&i);
			if(i==0)
			{	
				wanttoexit=TRUE;

            }
				
		
		break;

	case 4:
		printf("PLEASE ENTER DIVIDER:");
		scanf("%f",&t);
		printf("PLEASE ENTER DIVIDEND:");
		scanf("%f",&p);
			t=t/p;
		printf("The result is= %.6f\n",t);
		printf("TO CONTÄ°NUE PLEASE PRESS ONE(1) , TO EXIT PLEASE PRESS ZERO(0):");
		scanf("%d",&i);
			if(i==0)
			{	
				wanttoexit=TRUE;

            }	
	

		break;

	case 5:                                                          // We can show all the digits of number with these codes.                                                          
	    															 //It does not matter how many digits Number has.		
	 printf("PlEASE ENTER NUMBER:\n");												
	 scanf("%d",&number1);

        number=number1;
        counter=0;
        while(number!=0)
    
	     {
	 
		 number=number/10;
		 counter++;
	        
		}
		    	
		    myArray2[0]=1;

		    for(i=1 ; i<counter ; i++)
		    {  
		    	  
				myArray2[i]=myArray2[i-1]*10;
		    }

			myArray3[0]=number1%10;
			
		    for (i = 1; i<counter && flag==0 ; i++)
		    {   

 		    	temp3=number1/myArray2[i];
		    	myArray3[i]=temp3 % myArray2[1];
		    	if(temp3==0)
		    	{
		    		flag=1;
		    	}
		   


		    }
		    

			printf("The result is :");
			printf(" %d = ",number1);
			for(i=counter-1 ; i>0 && flag==0 ; i--)
			{
				printf(" %dx%d ",myArray2[i],myArray3[i]);
				if( i!=0){
					printf("+");
				}
				else{
					flag=1;
					
				}
			}
				printf(" %d\n",myArray3[0]);
				
			

			printf("TO CONTINUE PLEASE PRESS ONE(1) , TO EXIT PLEASE PRESS ZERO(0):");
				scanf("%d",&i);
			
				if(i==0)
				{	
					wanttoexit=TRUE;			

	            }	
						break;
			
				
				

      
	case 6:

	  printf("PLEASE ENTER BASE NUMBER:");
 	  scanf("%d",&number1);
 	  printf("PLEASE ENTER EXPONENT NUMBER:");
 	  scanf("%d",&number2);
 	  printf("BASE=%d\n",number1);
 	  printf("EXPONENT=%d\n",number2);
 	  if(number2<=0){
 	  	temp2=0;
 	}
 	else{
 	  
 	   for(i=1; i<=number2 ; i++)
 	   {

 	   	temp2=number1*temp2;

 	   }
 	}
 	   printf("The result is: %d\n",temp2);
 	    printf("TO CONTINUE PLEASE PRESS ONE(1) , TO EXIT PLEASE PRESS ZERO(0):");
		scanf("%d",&i);
			if(i==0)
			{	
				wanttoexit=TRUE;

            }	
				

		break;



	case 0:
		
		wanttoexit=TRUE;


		break;


 	default:
 		
 		printf("       !!!YOU ENTERED WRONG NUMBER OF SECTÄ°ON!!!\n\n\n\n\n");
 		printf("PLEASE TRY AGAÄ°N\n\n\n");
		
		break ;

  }
 	
} 
	printf("exiting...\n");
 
 	


return 0;
}
