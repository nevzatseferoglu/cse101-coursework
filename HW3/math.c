/* THIS PROGRAM SORTS ARRAY DEMONSTRATION PURPOSES */
/* GTU RULEZ */
#include<stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0


int PrintSelection(int selection)
{
 printf("Selected Menu item is:");
 printf("%d\n",selection);
 return 1;
 
}

int DisplayMenu(){
 int selection;
 printf("WELCOME TO ADDING PROGRAM\n");
 printf("(1) Add two numbers\n");
 printf("(2) Sort an array\n");
 printf("(3) Subtract two numbers\n");
 printf("(4) Divide numbers\n");
 printf("(5) Summarize numbers with words\n");
 printf("(6) Exponent two numbers x to the y\n");
 printf("(0) quit\n");
 printf("Selection:");	
 scanf("%d",&choice);
 printf("Selected Menu item is:");
 PrintSelection(selection);
 return selection;
}

int main(){
int number1, number2, sum;
char wanttoexit = FALSE;
char c;
int choice;
int count;
int i,j;
int myArray[100];
int max;
int number2;
int number1;
int c;
int sum;
int temp2=1;

// main loop
while(wanttoexit == FALSE){

	switch(choice)
{
	case (1):
		printf("Please enter Number 1:");
		scanf("%d",&number1);
		printf("Number 1:",number1);
		printf("Please enter Number 2:");
		scanf("%d",&number2);
		printf("Number 2:",number2);
			sum=number1+number2;
		printf("Sum=%d",sum);	

		c=getchar();
		c=getchar();
	

		break;

	case (2):
		printf("%s","Enter numbers for array and 0 for end\n");
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
	        
		c=getchar();
		c=getchar();
			
			
		break;



	case (3):
	    printf("Please enter Number 1:");
		scanf("%d",&number1);
		printf("Number 1:",number1);
		printf("Please enter Number 2:");
		scanf("%d",&number2);
		printf("Number 2:",number2);
			sum=number1-number2;
		printf("substraction=%d",sum);	

		c=getchar();
		c=getchar();

		break;

	case (4):
		printf("Please enter Number 1:");
		scanf("%d",&number1);
		printf("Number 1:",number1);
		printf("Please enter Number 2:");
		scanf("%d",&number2);
		printf("Number 2:",number2);
			sum=number1/number2;
		printf("Division=%d",sum);	

		c=getchar();
		c=getchar();

		break;

	case (5):
	    printf("Please enter the number:");
	    scanf("%d",number)
	    printf("Number that you entered is=%d",number);
	    while(number/10!=0)
	    {
	    	count++;
		}
			for(i=0 ; i<count ; i++)
			{
	    	b[i]=i+1
	    	}
	    	for(i=0 ; i<count ; i++ )
	    	    a[i]=10*	
	    	
	    	c=getchar();
			c=getchar();
		
		break;


	case (6):

	  printf("Please enter the numbers for making exponent:");
 	  scanf("%d",number1);
 	  scanf("%d",number2);
 	   for(i=1; i<=number2 ; i++)
 	   {

 	   	temp2=number1*temp2*

 	   }
 	   printf("%d",temp2);


		break;

		c=getchar();
		c=getchar();


	case (0):
		
		printf("exiting...");


		break;


 	default:
 		
 		printf("You entered the wrong choice\n");
		
		break ;

}
	
} 


return 0;
}
