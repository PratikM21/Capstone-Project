#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define z 0
void show_record();
int main(){
	int opt;
	printf("\n\n\n\n\n\t\t\t\t\tWelcome to My Project");
	printf("\n\t\t\t\tIn here you can play these two games");
	printf("\n\n\t\t\t\t1.Quiz Game");
	printf("\n\t\t\t\t2.Stone Paper Scissor");
	printf("\n\nPress any key to go the main menu:");
	getch();
	main_menu:
		system("cls");
		printf("\n\n\t\t\t\tSelect The game you want to play:");
		printf("\n\n\t\t\t1.Quiz");
		printf("\n\t\t\t2.Stone paper Scissor");
		printf("\n\t\t\t3.Exit!");
		printf("\n\n\npress 1 to play Quiz,press 2 to play Stone Paper Scissor:\n");
	valid:	
         scanf("%d",&opt);
         if(opt==1){
         	int countr,r,r1,count,i,n;
     int lower=1, upper=6,upper1=23,t=z,t1=z;
     int o=z,o1=z,o2=z,o3=z,o4=z,o5=z,o6=z,o7=z,o8=z;
     int score;
     char choice;
     char playername[20];
     srand(time(0));
     quizhome:
     system("cls");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the score  ");
     printf("\n\t\t > press Q to go to main menu    ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')	{
	show_record();
	goto quizhome;}
	else if (choice=='Q')
	goto main_menu;
    else if(choice=='S')
    {
     system("cls");
        fflush(stdin);
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
     gets(playername);
    system("cls");
    printf("\n ------------------  Welcome %s to the Quiz Game --------------------------",playername);
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are a total of 25 questions in the quiz.Each time you play a new game");
    printf("\n    the questions will randomize between them");
    printf("\n    You will be asked a total of 10 questions.");
    printf("\n >> Each question has some score, they will add up to your final score");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option."); 
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the Game menu!");
    if (toupper(getch())=='Y')
		{
		    goto game;
        }
	else
		{
        goto quizhome;
       system("cls");
       }


game:
     countr=0;
     for(i=1;i<=10;i++){
     system("cls");
     r=(rand()%(upper1-lower+1))+lower;
    while(r==o||r==o1||r==o2||r==o3||r==o4||r==o5||r==o6||r==o7||r==o8){
     r=(rand()%(upper1-lower+1))+lower;
     }
     if(i==1){o=r;}if(i==2){o1=r;}if(i==3){o2=r;}if(i==4){o3=r;}if(i==5){o4=r;}if(i==6){o5=r; }if(i==7){o6=r;}if(i==8){o7=r; }if(i==9){o8=r;}

     switch(r)
		{
		case 1:
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket");getch();
		       break;}
		case 2:
		printf("\n\n\nStudy of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Seismology");getch();
		       break;
		       }
        case 3:
		printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.8");getch();
		       break;}

        case 4:
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Faraday");getch();
		       break;
		       }

        case 5:
		printf("\n\n\nIn what unit is electric power measured?");
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Power");
		       getch();
		       break;
		       }

		case 6:
		printf("\n\n\nWhich element is found in Vitamin B12?");
		printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Cobalt");
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat is the National Name of Japan?");
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Nippon");getch();
		       break;}

        case 8:
		printf("\n\n\nHow many times a piece of paper can be folded at the most?");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.7");getch();
		       break;}

        case 9:
		printf("\n\n\nWhat is the capital of Denmark?");
		printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Copenhagen");getch();
		       break;}

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nile");getch();break;}
        case 11:
		printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
		printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Orange");getch();
              break;}

        case 12:
		printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
		printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Rome");getch();
              break;}

		case 13:
		printf("\n\n\nName the country where there no mosquitoes are found?");
		printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.France");getch();
		       break;}

        case 14:
		printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
		printf("\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");getch();
		       break;}

		case 15:
		printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
		printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.AB");getch();
		       break;}

		case 16:
		printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
		printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Light Year");getch();
		       
		       break;}


		case 17:
		printf("\n\n\nThe country famous for Samba Dance is........");
		printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Brazil");getch();
		       break;}

		case 18:
		printf("\n\n\nWind speed is measure by__________?");
		printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Anemometer");getch();
		       break;}

		case 19:
		printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
		printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Kathmandu");getch();
		       break;}

		case 20:
		printf("\n\n\nWhich hardware was used in the First Generation Computer?");
		printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Valves");getch();
		       break;}

		case 21:
		printf("\n\n\nOzone plate is being destroyed regularly because of____ ?");
		printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D. C.F.C");getch();
		       break;}

		case 22:
		printf("\n\n\nWho won the Women's Australian Open Tennis in 2007?");
		printf("\n\nA.Martina Hingis\t\tB.Maria Sarapova\n\nC.Kim Clijster\t\tD.Serena Williams");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Serena Williams");getch();
		       break;}

		case 23:
		printf("\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?");
		printf("\n\nA.The Secret in their Eyes\t\tB.Shutter Island\n\nC.The King's Speech\t\tD.The Reader");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.The King's Speech");getch();
		       break;}}}
		       goto score;
	score:
    system("cls");
	score=countr*100;
	if(score==1000){
		printf("\t\t\t\t\tCongratulations!!!You got them all right");
	}
	     printf("\n\t\t\t\t\t You got %d",score);goto go;
	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go game menu");
	if (toupper(getch())=='Y')
		goto game;
	else
		{
		FILE *f;
		f=fopen("Quiz.txt","a+");
		fprintf(f,"%s got %d point\n",playername,score);
		fclose(f);
		goto quizhome;}}}
		else if(opt==2){
    int ran;
    char you, computer, result;
    system("cls");
     printf("\n\n\n\n\t\tWelcome to the game of Stone Paper scissor\n");
        printf("The rules are as of a standard game.Stone beats Scissor, Scissor beats Paper, Paper beats Stone\n");
        printf("\n\n The game's outcome is purely based on luck. So...... Good %cluck%c",34,34);
        printf("\n\nPress any key to go to the game menu");
        getch();
        rpshome:
        	system("cls");
        	printf("\n\n\t\t\t\tPress %cS%c to start the game\n",34,34);
          printf("\t\t\t\tPress %cQ%c to go to the mainmenu\n",34,34);
    srand(time(NULL));
    ran = rand() % 100;
    if (ran < 33)
        computer = 's';
    else if (ran >= 33 && ran < 66)
        computer = 'p';
    else
        computer = 'z';
        char choice=toupper(getch());
        if (choice=='Q'){
        	goto main_menu;
        }
        else if(choice=='S'){
    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");
    fflush(stdin);
    scanf("%c",&you);
    if(computer==you){
    	printf("\n\n\t\t\t\tgame drawn\n");
    }
    else if (computer=='s'&&you=='z') {
        printf("\n\n\t\t\t\tYou have lost the game\n");
    }
    else if(computer=='p'&&you=='s'){
    	printf("\n\n\t\t\t\tYou have lost the match\n");
    }
    else if(computer=='z'&&you=='p'){
    	printf("\n\n\t\t\t\tYou have lost the match\n");
    }
    else {
        printf("\n\n\t\t\t\tYou have won the game!\n");
    }
   
        printf("\t\t\t\tYOu chose : %c and Computer chose : %c\n",you, computer);
    printf("\n\n\t\t\Press any key to go to game menu");
    getch();
    goto rpshome;
}
else{
	printf("invalid option");
	getch();
	goto rpshome;}
		}
		else if(opt==3){
	exit(1);
}
 
}
    
void show_record()
    {system("cls");
	char name[20];
	int scr,c;
	FILE *f;
	f=fopen("Quiz.txt","r");
	rewind(f);
	printf("\n");
	while(!feof(f)){
		c=fgetc(f);
		printf("%c",c);
	}
	fclose(f);
	getch();}	
