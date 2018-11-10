load R4,10h                   ;;          It is calculator program for calculating the factorial of numbers which are between 1 and 5. 
load R3,-1				;;          -------------------------------------------------------------------------------------------	
load R1,1                     ;;  Detail About Program :
load R0,0			      ;;      The design of the program is , 			
load R2,10h				;;     Number that You want to calculate its factorial is gonna be in "R1" register.(It is important) 
					;;     Firstly, 
STEPI:load R0,1			;; I decided to settle the numbers on the memory.For example , If my choice is 5 which ? want to determine its factorial , I settled the numbers which is smaller than  	
	jmpEQ R1=R0,ReadyI   	;;five such as 4,3,2,1 and I used five main step and 3 loops.Those loops is gonna add the numebers each other about their own properties.     
	load R0,0			;;But the important point is that loops is gonna pull the numebers WH?CH HAS BEEN ALREADY SORTED by the program.Memory place where numbers has been sorted is special and these
	jmp STEP0			;;place are quite significant to execute the program.
					;;   
STEP0:load R0,2			;;     Secondly, 	
	jmpEQ R1=R0,Ready0	;; These loops is performing an  three different action at the same time.First action is adding numbers , second action is how many time is gonna work , last one is reducing     		
	load R0,0			;;numbers that has been already sorted by the program as one time. 
	jmp STEP1			;;
					;;	In Conlusion,
					;; At the end of the program , factorial that is calculated is showed on the display using pull the character from ASCII table. 
					;;	    	
					;;    Gebze Technical University  , NEVZAT SEFEROGLU, 171044024
STEP1:store R1,[R2]		;;=========================================================================================================================
	addi R1,R1,R3		;; ATTENT?ON !!!!!!!!! 							    	
	addi R2,R2,R4		;; TO RUN THE PROGRAM , YOU HAVE TO PRESS THE 'RUN' BUTTON UNTILL BEING INVAL?D CONT?NUOUSLY.RESULT WILL BE IN "R0" REG?STER.
	store R1,[R2]           ;;											    ------------	
	jmpEQ R1=R0,STEP2       ;;========================================================================================================================

	jmp STEP1					

STEP2:
	load R6,[10h]
	load R5,[30h]
STEPA:
	load R7,[10h]
	addi R6,R6,R7
	load R3,-1
	load R0,0
	addi R5,R5,R3
	jmpEQ R5=R0,STEPBK
	jmp STEPA

STEPBK:
	load R0,6
	jmpEQ R6=R0,Ready1
	load R0,0
STEPB:
	load R5,[40h]
	move R8,R6
	
STEP3:
	load R3,-1
	load R0,0
	addi R6,R6,R8
	addi R5,R5,R3
	jmpEQ R5=R0,STEPC
	jmp STEP3



STEPC: load R5,[50h]
	 move R8,R6

STEP4:addi R6,R6,R8
	load R3,-1
	load R0,0
	addi R5,R5,R3
	jmpEQ R5=R0,Ready3

STEPTK:load R0,24
	 jmpEQ R6=R0,Ready2
	 jmp STEP5
STEP5:
	load R0,120
	jmpEQ R6=R0,Ready3
	load R0,0
	jmp STEP4

ReadyI:load RF,49
	 jmp Ready

Ready0:load RF,50
	 jmp Ready

Ready1:load RF,54
	 jmp Ready

Ready2:load RF,50
	 load RF,52
	 jmp Ready

Ready3:load R0,78h
	 load RF,49
	 load RF,50
	 load RF,48
 	 jmp Ready 

Ready:halt
