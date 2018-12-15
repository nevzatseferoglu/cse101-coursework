#include <stdio.h>								//GEBZE TECHNICAL UNIVERSITY 
#include <stdlib.h>								//NEVZAT SEFEROGLU  171044024 
#include <string.h> 							//Homework 4
#define TRUE 1
#define FALSE 0
//Functions
int checkForLenght(char *c);
int checkForMail(char *c);
int checkForName(char *c);
int checkForSurname(char *c);
int checkForId(char *c);
int checkerForWhiteSpace(char *c);
void readFileFunction(FILE* fileP,int* t);

typedef struct{
		char id[60];
        char name[60];
        char surname[60];
        char mail[60]; 
}employee;

int main()
{

FILE *fileP;
char control;
int AmountofLine=0;

readFileFunction(fileP,&AmountofLine);
	
	return 0;
}
void readFileFunction(FILE *fileP,int *t)
{	
	FILE *fprint;
	char idDisplay[]="ID"; 
	char nameDisplay[]="NAME";
	char surnameDisplay[]="SURNAME";
	char mailDisplay[]="MAIL";
	char control,c;
	employee *ptr;
	int i=0,length=0,whiteSpace=0,k;
	char checkWord[500] = {'\0'};
	fileP=fopen("hw4_disordered_people.txt","r"); // to open file
	while(!feof(fileP))
    {
    	control=fgetc(fileP);	
    	if(control=='\n'||control==EOF)
    	{	
    		++(*t);// amountofline=(*t)
    	}

	}
	fclose(fileP);
	ptr=(employee*)malloc(((*t))*sizeof(employee));
	fileP=fopen("hw4_disordered_people.txt","r"); // to open file 
	fprint=fopen("orderedFile.txt","w"); // write file 
	printf("%-15s",idDisplay);
	printf("         %-15s",nameDisplay);
	printf("         %-15s",surnameDisplay);
	printf("         %-15s\n",mailDisplay);
	printf("==========================================================");
	printf("\n");
	printf("\n");

	fprintf(fprint,"%-15s",idDisplay);
	fprintf(fprint,"%-15s",nameDisplay);
	fprintf(fprint,"%-15s",surnameDisplay);
	fprintf(fprint,"%-15s\n",mailDisplay);
	fprintf(fprint,"==========================================================");
	fprintf(fprint,"\n");
	fprintf(fprint,"\n");

	for(i=0 ; i<(*t)+1 ; ++i)
	{

		for(k=0 ; k<4 ; ++k)
		{
			fscanf(fileP,"%s",checkWord);
			if(checkForId(checkWord)==TRUE)
			{	
				strcpy(ptr->id,checkWord);
			}
			else if (checkForMail(checkWord)==TRUE)
			{
				strcpy(ptr->mail,checkWord);
			}
			else if(checkForName(checkWord)==TRUE)
			{
				strcpy(ptr->name,checkWord);
			}
			else if(checkForSurname(checkWord)==TRUE)
			{
				strcpy(ptr->surname,checkWord);
			}
				
		}
			fprintf(fprint,"%-15s",ptr->id);
			fprintf(fprint,"%-15s",ptr->name);
			fprintf(fprint,"%-15s",ptr->surname);
			fprintf(fprint,"%-15s",ptr->mail);
			fprintf(fprint,"\n");

			printf("%-15s",ptr->id);	
			printf("%-15s",ptr->name);
			printf("%-15s",ptr->surname);
			printf("%-15s",ptr->mail);
			printf("\n");
				
	}
	fclose(fprint);
	fclose(fileP);
}
int checkForSurname(char *c)   // Function for checking the surname
{
	int control=0,i=0,length=0;
	while(c[i]!='\0')
	{
		if(c[i]>='A'&&c[i]<='Z')
		{
			++control;	
		}
		++i;
	}
	if(control==checkForLenght(c))
	{
		return TRUE;
	}
	else
	return FALSE;


}
int checkForName(char *c)  // Function for checking the name
{
	if(c[0]>='A' && c[0]<='Z' && c[1]>='a'&&c[1]<='z') // Checking the character with ASCII character
	{
		return TRUE;	//for true condition 
	}
	else
		return FALSE;	//for false condition

}
int checkForMail(char *c)
{
 int i=0; 
	while(c[i]!='\0')
	{
		if(c[i]=='@') //for being mail type;
		{
			return TRUE;
		}
		
		++i;
		
	}
	return 0; // for not being mail typr
}
int checkForId(char *c) // Function for check the id
{
	int control=0,i=0;
	while(c[i]!='\0')
	{
		if(c[i]>='0'&&c[i]<='9')
		{
			++control;	
		}
		++i;
	}
	if(control==checkForLenght(c))
	{
		return TRUE;
	}
	else
	return FALSE;

}
int checkForLenght(char *c) //Function for calculating the length of string 
{
	int i=0;
	int length=0;
	while(c[i]!='\0')
	{
		++length;
		++i;
	}
	return length;
}
