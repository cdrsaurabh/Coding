 #include<stdio.h>
 #include<math.h>
 void main(){
	int ch,sum=0;
	char a;
	while(ch!=4){
	printf("\n===MCQ QUIZ===\n");
    printf("1. C Lang\n");
    printf("2. DBMS\n");
    printf("3. HTML\n");
    printf("Press 4 to exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%d",&ch);
    switch(ch){
    	case 1:
    		printf("\nEach Question carries 2 marks\n");
			printf("\nQ1. Where was C lang created?");
			printf("\na. Mountain lab\n");
			printf("b. Bell lab\n");
    		printf("c. Table lab\n");
    		printf("d. Chair lab\n");
    		printf("Answer:");
    		scanf(" %c",&a);
    		if(a=='b'||a=='B'){
    			printf("\nCorrect Answer.");
    			sum=sum+2;
			} else if ((a=='A')||(a=='a')||(a=='D')||(a=='c')||(a=='D')||(a=='d')){
				printf("\nWrong Answer");
			}else {
				printf("\nInvalid Choice");
			}
			getchar();
			printf("\nQ2. Who invneted C lang?");
			printf("\na. Tim Berners\n");
			printf("b. James Gosling\n");
    		printf("c. Charles Bechman\n");
    		printf("d. Dennis Ritchie\n");
    		printf("Answer:");
    		scanf(" %c",&a);
    		if(a=='d'||a=='D'){
    			printf("\nCorrect Answer.");
    			sum=sum+2;
			} else if ((a=='A')||(a=='a')||(a=='b')||(a=='c')||(a=='B')||(a=='d')){
				printf("\nWrong Answer");
			}else {
				printf("\nInvalid Choice");
			}
			getchar();
			printf("\nQ3. What is the range of signed char?");
			printf("\na. -128 to 127\n");
			printf("b. 0 to 255\n");
    		printf("c. 0 to 65535\n");
    		printf("d. -32768 to 32767\n");
    		printf("Answer:");
    		scanf(" %c",&a);
    		if(a=='A'||a=='a'){
    			printf("\nCorrect Answer.\n");
    			sum=sum+2;
			} else if ((a=='B')||(a=='b')||(a=='D')||(a=='c')||(a=='D')||(a=='d')){
				printf("\nWrong Answer\n");
			}else {
				printf("\nInvalid Choice\n");
			}
			getchar();
			printf("\nQ4. Which of the following is a valid declaration in C?"); 
			printf("\na. int 2num;\n");
			printf("b. float $rate;\n");
    		printf("c. char _name;\n");
    		printf("d. double char;\n");
    		printf("Answer:");
    		scanf(" %c",&a);
    		if(a=='c'||a=='C'){ 
    			printf("Correct Answer.\n");
    			sum=sum+2;
			} else if ((a=='A')||(a=='a')||(a=='D')||(a=='b')||(a=='B')||(a=='d')){
				printf("\nWrong Answer\n");
			}else {
				printf("\nInvalid Choice\n");
			}
			getchar();
			printf("\nQ5. Datatype of a variable cannot be declared twice.");
			printf("\na. True\n");
			printf("b. False\n");
    		printf("Answer:");
    		scanf(" %c",&a);
    		if(a=='a'||a=='A'){
    			printf("\nCorrect Answer.\n");
    			sum=sum+2;
			} else if ((a=='b')||(a=='B')){
				printf("\nWrong Answer\n");
			}else {
				printf("\nInvalid Choice\n");
			}
			printf("\nYour score in C=%d",sum);
			break;
			//FOR 2ND SUBJECT
	    case 2:
		    printf("\nQ1. In a relational database, what is a 'tuple'?");
            printf("\nA. A row");
            printf("\nB. A column");
            printf("\nC. A table");
            printf("\nD. A relationship");
            printf("\nAnswer:");
    		scanf(" %c",&a);
            if(a=='a'||a=='A'){
    			printf("\nCorrect Answer.\n");
    			
			} else if ((a=='b')||(a=='B')||(a=='D')||(a=='C')||(a=='c')||(a=='d')){
				printf("\nWrong Answer\n");
			}else {
				printf("\nInvalid Choice\n");
			}
            getchar();
            printf("\nQ2.Which key is used to uniquely identify a record in a table?");
            printf("\nA. Foreign key");
            printf("\nB. Super key");
            printf("\nC. Candidate key");
            printf("\nD. Primary key");
            printf("\nAnswer:");
    		scanf(" %c",&a);
		    if(a=='d'||a=='D'){
    			printf("\nCorrect Answer.\n");
    			
			} else if ((a=='b')||(a=='B')||(a=='c')||(a=='C')||(a=='a')||(a=='A')){
				printf("\nWrong Answer\n");
			}else {
				printf("\nInvalid Choice\n");
			}
            getchar();
            printf("\nQ3.What does the term Normalization mean in DBMS?");
            printf("\nA. Compressing data to save space");
            printf("\nB. Organizing data to reduce redundancy");
            printf("\nC. Encrypting sensitive data");
            printf("\nD. Backing up data regularly");
            printf("\nAnswer:");
    		scanf(" %c",&a);
            if(a=='b'||a=='B'){
    			printf("\nCorrect Answer.\n");
    			
			} else if ((a=='a')||(a=='A')||(a=='c')||(a=='C')||(a=='d')||(a=='D')){
				printf("\nWrong Answer\n");
			}else {
				printf("\nInvalid Choice\n");
			}
            getchar();
            printf("\n Q4.Which of the following is a DML command?");
            printf("\nA. CREATE");
            printf("\nB. DROP");
            printf("\nC. SELECT");
            printf("\nD. ALTER");
            printf("\nAnswer:");
    		scanf(" %c",&a);
            if(a=='c'||a=='C'){
    			printf("\nCorrect Answer.\n");
    			
			} else if ((a=='b')||(a=='B')||(a=='d')||(a=='D')||(a=='a')||(a=='A')){
				printf("\nWrong Answer\n");
			}else {
				printf("\nInvalid Choice\n");
			}
            getchar();
            printf("\n Q5.Which of the following is true about the PRIMARY KEY constraint?");
            printf("\nA. It allows duplicate values");
            printf("\nB. It can have NULL values");
            printf("\nC. A table can have multiple primary keys");
            printf("\nD. It uniquely identifies each record in a table");
            printf("\nAnswer:");
    		scanf(" %c",&a);
	        if(a=='d'||a=='D'){
    			printf("\nCorrect Answer.\n");
    			
			} else if ((a=='b')||(a=='B')||(a=='c')||(a=='C')||(a=='a')||(a=='A')){
				printf("\nWrong Answer\n");
			}else {
				printf("\nInvalid Choice\n");
			}
            break;
			//FOR 3RD SUBJECT
        
            
            
		}
	} 
}