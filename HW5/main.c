#include <stdio.h>								//GEBZE TECHNICAL UNIVERSITY 
#include <stdlib.h>								//NEVZAT SEFEROGLU  171044024 
#include <string.h> 							//Homework 5
#define TRUE 1									//Sorting the File with Input
#define FALSE 0
#define MAX_LENGTH 500

typedef struct{
		char id[80];
        char name[80];
        char surname[80];
        char mail[80]; 
}employee;

employee *ptr;

void readFileFunction(FILE*,int*);
int checkForLength(char*);
int checkForMail(char*);
int checkForName(char*);
int checkForSurname(char*);
int checkForId(char*);

int main(){
FILE *fileP;
int AmountofLine=0;

readFileFunction(fileP,&AmountofLine);


free(ptr);
	return 0;
}
void readFileFunction(FILE *fileP,int *line)
{
	char control;
	char temporary[100];
	int length=0,whiteSpace=0,k=0;
	FILE *fprint_out;
	char checkWord[MAX_LENGTH] ={'\0'};
	int i=0,j=0;
	char choice;
	char idDisplay[]="ID"; 
	char nameDisplay[]="NAME";
	char surnameDisplay[]="SURNAME";
	char mailDisplay[]="MAIL";
	
	fileP=fopen("hw4_disordered_people.txt","r"); // to open file
	while(!feof(fileP))
	{
	  control = fgetc(fileP);
	  if(control == '\n'||control==EOF)
	  {
	    ++(*line);
	  }
	}
	fclose(fileP);
	ptr=(employee*)malloc(((*line))*sizeof(employee));
	fileP=fopen("hw4_disordered_people.txt","r"); // to open file 
	
	for(i=0 ; i<(*line) ; ++i)
	{
		
		for(j=0 ; j<4 ; ++j)
		{
			fscanf(fileP,"%s",checkWord);
			if(checkForId(checkWord)==TRUE)
			{	
				strcpy(ptr[i].id,checkWord);
			}
			else if (checkForMail(checkWord)==TRUE)
			{
				strcpy(ptr[i].mail,checkWord);
			}
			else if(checkForName(checkWord)==TRUE)
			{
				strcpy(ptr[i].name,checkWord);
			}
			else if(checkForSurname(checkWord)==TRUE)
			{
				strcpy(ptr[i].surname,checkWord);
			}
		}
	}
	printf("\t\t     WELCOME TO THE READ/WRITE PROGRAM\n");
	printf("\t\t ****--------------------------------- ****\n");			
	printf("\t  To sort with  ID       please press ->>>>> (I) or (i) \n");
	printf("\t  To sort with  NAME     please press ->>>>> (N) or (n) \n");
	printf("\t  To sort with  SURNAME  please press ->>>>> (S) or (s) \n");
	printf("\t  To sort with  MAIL     please press ->>>>> (M) or (m) \n\n");
	printf("\t  Please press the sorting type  which You choose :");
	scanf("%c",&choice);
	printf("\n");
	switch (choice)
	{
		case 'i':
		case 'I':
		fprint_out=fopen("orderedFile.txt","w");
				
				fprintf(fprint_out,"%-30s",idDisplay);
				fprintf(fprint_out,"%-30s",nameDisplay);
				fprintf(fprint_out,"%-30s",surnameDisplay);
				fprintf(fprint_out,"%-30s\n\n",mailDisplay);
		
			for(i=0 ; i<(*line) ; ++i)
			{
				for(j=i+1 ; j<(*line) ; ++j)
				{
					if(strcmp(ptr[i].id,ptr[j].id)>0)
					{	
						strcpy(temporary,ptr[i].id);
						strcpy(ptr[i].id,ptr[j].id);
						strcpy(ptr[j].id,temporary);

						strcpy(temporary,ptr[i].name);
						strcpy(ptr[i].name,ptr[j].name);
						strcpy(ptr[j].name,temporary);

						strcpy(temporary,ptr[i].surname);
						strcpy(ptr[i].surname,ptr[j].surname);
						strcpy(ptr[j].surname,temporary);

						strcpy(temporary,ptr[i].mail);
						strcpy(ptr[i].mail,ptr[j].mail);
						strcpy(ptr[j].mail,temporary);
					}
				}
			
				fprintf(fprint_out,"%-30s",ptr[i].id);
				fprintf(fprint_out,"%-30s",ptr[i].name);
				fprintf(fprint_out,"%-30s",ptr[i].surname);
				fprintf(fprint_out,"%-30s\n",ptr[i].mail);	
			}
			printf("\t  Sorting now ..\n");
			printf("\t  File has been sorted succesfully...\n\n\n");

		 	fclose(fprint_out);
	    break;
		
		case 'n':
		case 'N':
		fprint_out=fopen("orderedFile.txt","w");
				
				fprintf(fprint_out,"%-15s",nameDisplay);
				fprintf(fprint_out,"%-15s",idDisplay);
				fprintf(fprint_out,"%-15s",surnameDisplay);
				fprintf(fprint_out,"%-15s\n\n",mailDisplay);
		
			for(i=0 ; i<(*line) ; ++i)
			{
				for(j=i+1 ; j<(*line) ; ++j)
				{
					if(strcmp(ptr[i].name,ptr[j].name)>0)
					{	
						strcpy(temporary,ptr[i].id);
						strcpy(ptr[i].id,ptr[j].id);
						strcpy(ptr[j].id,temporary);

						strcpy(temporary,ptr[i].name);
						strcpy(ptr[i].name,ptr[j].name);
						strcpy(ptr[j].name,temporary);

						strcpy(temporary,ptr[i].surname);
						strcpy(ptr[i].surname,ptr[j].surname);
						strcpy(ptr[j].surname,temporary);

						strcpy(temporary,ptr[i].mail);
						strcpy(ptr[i].mail,ptr[j].mail);
						strcpy(ptr[j].mail,temporary);
					}
				}
			
				fprintf(fprint_out,"%-15s",ptr[i].name);
				fprintf(fprint_out,"%-15s",ptr[i].id);
				fprintf(fprint_out,"%-15s",ptr[i].surname);
				fprintf(fprint_out,"%-15s\n",ptr[i].mail);	
			}
			printf("\t  Sorting now ..\n");
			printf("\t  File has been sorted succesfully...\n\n\n");

		 	fclose(fprint_out);

		 	break;

		case 's':
		case 'S':
		fprint_out=fopen("orderedFile.txt","w");
				
				fprintf(fprint_out,"%-15s",surnameDisplay);
				fprintf(fprint_out,"%-15s",idDisplay);
				fprintf(fprint_out,"%-15s",nameDisplay);
				fprintf(fprint_out,"%-15s\n\n",mailDisplay);
			
			for(i=0 ; i<(*line) ; ++i)
			{
				for(j=i+1 ; j<(*line) ; ++j)
				{
					if(strcmp(ptr[i].surname,ptr[j].surname)>0)
					{	
						strcpy(temporary,ptr[i].id);
						strcpy(ptr[i].id,ptr[j].id);
						strcpy(ptr[j].id,temporary);

						strcpy(temporary,ptr[i].name);
						strcpy(ptr[i].name,ptr[j].name);
						strcpy(ptr[j].name,temporary);

						strcpy(temporary,ptr[i].surname);
						strcpy(ptr[i].surname,ptr[j].surname);
						strcpy(ptr[j].surname,temporary);

						strcpy(temporary,ptr[i].mail);
						strcpy(ptr[i].mail,ptr[j].mail);
						strcpy(ptr[j].mail,temporary);
					}
				}
		
				fprintf(fprint_out,"%-15s",ptr[i].surname);
				fprintf(fprint_out,"%-15s",ptr[i].id);
				fprintf(fprint_out,"%-15s",ptr[i].name);
				fprintf(fprint_out,"%-15s\n",ptr[i].mail);	
			}
			printf("\t  Sorting now ..\n");
			printf("\t  File has been sorted succesfully...\n\n\n");

		fclose(fprint_out);
		 	break;

		case 'm':	
		case 'M':
		fprint_out=fopen("orderedFile.txt","w");
			
				fprintf(fprint_out,"%-30s",mailDisplay);
				fprintf(fprint_out,"%-30s",idDisplay);
				fprintf(fprint_out,"%-30s",nameDisplay);
				fprintf(fprint_out,"%-30s\n\n",surnameDisplay);
			
			for(i=0 ; i<(*line) ; ++i)
			{
				for(j=i+1 ; j<(*line) ; ++j)
				{
					if(strcmp(ptr[i].mail,ptr[j].mail)>0)
					{	
						strcpy(temporary,ptr[i].id);
						strcpy(ptr[i].id,ptr[j].id);
						strcpy(ptr[j].id,temporary);

						strcpy(temporary,ptr[i].name);
						strcpy(ptr[i].name,ptr[j].name);
						strcpy(ptr[j].name,temporary);

						strcpy(temporary,ptr[i].surname); 
						strcpy(ptr[i].surname,ptr[j].surname);
						strcpy(ptr[j].surname,temporary);

						strcpy(temporary,ptr[i].mail);
						strcpy(ptr[i].mail,ptr[j].mail);
						strcpy(ptr[j].mail,temporary);
					}
				}
				
				fprintf(fprint_out,"%-30s",ptr[i].mail);		
				fprintf(fprint_out,"%-30s",ptr[i].id);
				fprintf(fprint_out,"%-30s",ptr[i].name);
				fprintf(fprint_out,"%-30s\n",ptr[i].surname);
			}
			printf("\t  Sorting now ..\n");
			printf("\t  File has been sorted succesfully...\n\n\n");

		fclose(fprint_out);
		 	break;

		
		default:
		printf("Entered Wrong Choice ...\n");
		printf("Please try again .. \n");

		 	
		 	break;
	}

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
	if(control==checkForLength(c))
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
	if(control==checkForLength(c))
	{
		return TRUE;
	}
	else
	return FALSE;
}
int checkForLength(char *c) //Function for calculating the length of string 
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