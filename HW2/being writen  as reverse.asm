         load    R1,GEBZE 	  ;;REVERSION PROGRAM 
         load    R2,1           ;,=================
         load    R0,0 		  ;; Gebze Technical University Nevzat Seferoglu 171044024 
         store   R0,[00h]       ;; Program may answer late a little bit.Please Wait.Thank You. :)
         load    R3,-1  
TEKNIK:addi    R1,R1,R2   
         jmpEQ   R1=R0,step2
         jmp     TEKNIK  

step2:
load R0,10
load RF,[R1]
addi R1,R1,R3
jmpEQ RF=R0,Ready
jmp step2     

Ready:   halt

GEBZE:
db  10
db  "COMPUTER"        	 	  ;; The phrase that you want to reverse.
db 0