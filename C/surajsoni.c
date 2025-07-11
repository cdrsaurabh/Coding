#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ch;
	int score_in_C_Language = 0;
	int score_in_DBMS = 0;
	int score_in_HTML = 0;
	char a;
	while (1)
	{
		printf("-----QUIZ-----\n");
		printf("1. C LANG\n");
		printf("2. DBMS\n");
		printf("3. HTML\n");
		printf("4. Press 4 to exit\n");
		printf("Enter your choice:\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			printf("Each question have carrying 2 marks\n");
			printf("-----Question of C language-----\n");

			printf("Q1.Who is the creator of C language.\n");
			printf("A.James Gosline\n");
			printf("B.Dennis Ritchie\n");
			printf("C.Bjarne Stroustrup\n");
			printf("D.Guido van Rossum\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'b' || a == 'B')
			{
				printf("----Correct Answer!----\n");
				score_in_C_Language = score_in_C_Language + 2;
			}
			else if ((a == 'a' || a == 'A') || (a == 'c' || a == 'C') || (a == 'd' || a == 'D'))
				printf("Wrong Answer\n");

			else
			{
				printf("Invalid Option\n");
			}

			printf("Q2.What is the return type if main function in c language.\n");
			printf("A.void\n");
			printf("B.int\n");
			printf("C.float\n");
			printf("D.char\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'b' || a == 'B')
			{
				printf("----Correct Answer!----\n");
				score_in_C_Language = score_in_C_Language + 2;
			}
			else if ((a == 'a' || a == 'A') || (a == 'c' || a == 'C') || (a == 'd' || a == 'D'))
				printf("Wrong Answer\n");

			else
			{
				printf("Invalid Option\n");
			}

			printf("Q3.In c language '%%d' is use for which type of data.\n");
			printf("A.char\n");
			printf("B.float\n");
			printf("C.int\n");
			printf("D.double\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'c' || a == 'C')
			{
				printf("----Correct Answer!----\n");
				score_in_C_Language = score_in_C_Language + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'b' || a == 'B' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}

			printf("Q4.Which type of loop is pre-test loop in C language.\n");
			printf("A.do-while\n");
			printf("B.while\n");
			printf("C.goto\n");
			printf("D.for\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'b' || a == 'B')
			{
				printf("----Correct Answer!----\n");
				score_in_C_Language = score_in_C_Language + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}

			printf("Q5.Which type of header file use for printf.\n");
			printf("A.stdlib.h\n");
			printf("B.conio.h\n");
			printf("C.stdio.h\n");
			printf("D.string.h\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'c' || a == 'C')
			{
				printf("----Correct Answer!----\n");
				score_in_C_Language = score_in_C_Language + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'b' || a == 'B' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}

			printf("Q6.Which operator represent AND operator.\n");
			printf("A.&\n");
			printf("B.&&\n");
			printf("C.|\n");
			printf("D.||\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'b' || a == 'B')
			{
				printf("----Correct Answer!----\n");
				score_in_C_Language = score_in_C_Language + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}

			printf("Q7.Which keyword is constant variable in C language.\n");
			printf("A.fixed\n");
			printf("B.static\n");
			printf("C.final\n");
			printf("D.const\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'd' || a == 'D')
			{
				printf("----Correct Answer!----\n");
				score_in_C_Language = score_in_C_Language + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'b' || a == 'B')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}

			printf("Q8.Which is the following is the correct fie extension for a C program.\n");
			printf("A. .CP\n");
			printf("B. .C\n");
			printf("C. .CPP\n");
			printf("D. .CS\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'b' || a == 'B')
			{
				printf("----Correct Answer!----\n");
				score_in_C_Language = score_in_C_Language + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}

			printf("Q9.Which of the following is used to take input from the user in C.\n");
			printf("A. cin\n");
			printf("B. gets()\n");
			printf("C. input()\n");
			printf("D. scanf()\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'd' || a == 'D')
			{
				printf("----Correct Answer!----\n");
				score_in_C_Language = score_in_C_Language + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'b' || a == 'B')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q10.Which of the following is not a loop in C.\n");
			printf("A. for\n");
			printf("B. while\n");
			printf("C. do-while\n");
			printf("D. foreach\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'd' || a == 'D')
			{
				printf("----Correct Answer!----\n");
				score_in_C_Language = score_in_C_Language + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'b' || a == 'B')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}

			printf("Your total score out of 20 in C language  is: %d\n", score_in_C_Language);
			break;
		case 2:
			printf("Each question have carrying 2 marks\n");
			printf("-----Question of DBMS-----\n");

			printf("Q1.What is the full form of DBMS.\n");
			printf("A.Data Base Management System.\n");
			printf("B.Data Backup Management System.\n");
			printf("C.Data Base Machine System.\n");
			printf("D.Digital Base Management Software.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'a' || a == 'A')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'd' || a == 'D' || a == 'c' || a == 'C' || a == 'b' || a == 'B')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q2.Which of the following is not a type of database ?\n");
			printf("A.Hierarchical.\n");
			printf("B.Network.\n");
			printf("C.Relational.\n");
			printf("D.Linear.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'd' || a == 'D')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'b' || a == 'B')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q3.Which language is used to acces data in a database.\n");
			printf("A.HTML.\n");
			printf("B.SQL.\n");
			printf("C.C++.\n");
			printf("D.XML.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'b' || a == 'B')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q4.What is a primary key.\n");
			printf("A.A field that allows null values.\n");
			printf("B.A field that uniquely identifies each record.\n");
			printf("C.A key used to encrupt data.\n");
			printf("D.A duplicate field in a table.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'b' || a == 'B')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q5.What is the full form of SQL?.\n");
			printf("A.Structured Query Language.\n");
			printf("B.Sequential Query Language.\n");
			printf("C.Simple Query Language.\n");
			printf("D.Server Query Language.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'a' || a == 'A')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'b' || a == 'B' || a == 'c' || a == 'C' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q6.Which of the following is a DDL command?.\n");
			printf("A.INSERT\n");
			printf("B.SELECT\n");
			printf("C.CREATE.\n");
			printf("D.UPDATE.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'c' || a == 'C')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'b' || a == 'B' || a == 'a' || a == 'A' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q7.Which of the following is used to delete all rows from a table but not the table itself?.\n");
			printf("A.TRUNCATE\n");
			printf("B.SELECT\n");
			printf("C.CREATE.\n");
			printf("D.UPDATE.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'a' || a == 'A')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'b' || a == 'B' || a == 'c' || a == 'C' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q8.What is the purpose of a foreign key?.\n");
			printf("A.To uniquely identify a row.\n");
			printf("B.To enforce referential integrity.\n");
			printf("C.To store encrypted data.\n");
			printf("D.To speed up queries.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'b' || a == 'B')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q9.Which of the following is a NoSQL database?.\n");
			printf("A.Oracle.\n");
			printf("B.MySQL.\n");
			printf("C.MongoDB.\n");
			printf("D.PostgreSQL.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'c' || a == 'C')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'b' || a == 'B' || a == 'a' || a == 'A' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q10.Which of the following is used to maintain data integrity?.\n");
			printf("A.Cursor.\n");
			printf("B.Joins.\n");
			printf("C.Constraints.\n");
			printf("D.Views.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'c' || a == 'C')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'b' || a == 'B' || a == 'a' || a == 'A' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Your total score out of 20 in DBMS  is: %d\n", score_in_HTML);

			break;
		case 3:
			printf("Each question have carrying 2 marks\n");
			printf("-----Question of HTML-----\n");

			printf("Q1.What is the full form of HTML.\n");
			printf("A.Hyper Text Makeup Language.\n");
			printf("B.Hyper Text Markup Language.\n");
			printf("C.Hyperlinks and Text Mark Language.\n");
			printf("D.Hyper Tool Markup Language.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'b' || a == 'B')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q2.Which tag is use for paragraph in HTML.\n");
			printf("A.<div>.\n");
			printf("B.<h1>.\n");
			printf("C.<paragraph>.\n");
			printf("D.<p>.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'd' || a == 'D')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'b' || a == 'B')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q3.Which tag is use for adding image in HTML.\n");
			printf("A.<h3>.\n");
			printf("B.<pre>.\n");
			printf("C.<img>.\n");
			printf("D.<p>.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'c' || a == 'C')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'b' || a == 'B' || a == 'a' || a == 'A' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q4.Which tag is use for set title in HTML.\n");
			printf("A.<meta>.\n");
			printf("B.<head>.\n");
			printf("C.<header>.\n");
			printf("D.<title>.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'd' || a == 'D')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'b' || a == 'B')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q5.Which attribute define the source of image in HTML.\n");
			printf("A.href.\n");
			printf("B.src.\n");
			printf("C.path.\n");
			printf("D.link.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'b' || a == 'B')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q6.Which tag is use to create link in HTML.\n");
			printf("A.<a>.\n");
			printf("B.<b>.\n");
			printf("C.<link>.\n");
			printf("D.<url>.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'a' || a == 'A')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'b' || a == 'B' || a == 'c' || a == 'C' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q7.Which tag is use to create form in HTML.\n");
			printf("A.<submit>.\n");
			printf("B.<input>.\n");
			printf("C.<form>.\n");
			printf("D.<button>.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'c' || a == 'C')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'b' || a == 'B' || a == 'a' || a == 'A' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q8.Which tag is use to break line in HTML.\n");
			printf("A.<b>.\n");
			printf("B.<i>.\n");
			printf("C.<newline>.\n");
			printf("D.<br>.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'd' || a == 'D')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'b' || a == 'B')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q9.Which tag is use to create table in HTML.\n");
			printf("A.<form>.\n");
			printf("B.<table>.\n");
			printf("C.<tab>.\n");
			printf("D.<td>.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'b' || a == 'B')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'd' || a == 'D')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Q10.Which tag is use for bold text in HTML.\n");
			printf("A.<strongtag>.\n");
			printf("B.<stongtext>.\n");
			printf("C.<bold>.\n");
			printf("D.<b>.\n");
			printf("Enter answer:\n");
			scanf(" %c", &a);
			if (a == 'd' || a == 'D')
			{
				printf("----Correct Answer!----\n");
				score_in_HTML = score_in_HTML + 2;
			}
			else if (a == 'a' || a == 'A' || a == 'c' || a == 'C' || a == 'b' || a == 'B')
			{
				printf("Wrong Answer\n");
			}
			else
			{
				printf("Invalid Option\n");
			}
			printf("Your total score out of 20 in HTML is: %d\n", score_in_HTML);
			break;
		case 4:
			printf("Exiting the quiz, Thank you!\n");
			exit(1);
		}
	}

	return 0;
}