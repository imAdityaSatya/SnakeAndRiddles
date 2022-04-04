#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int checkposition();
int dice, position, newPosition, above, choice, cnt=0;

int main()
{
srand(time(NULL));
printf("THE SNAKE AND THE LADDER\n\tpress-1: VIEW PLAYBOOK \n\tpress-2: START PLAYING\n");
scanf("%d",&choice);

if(choice==1)
{
printf("\n PLAYBOOK: \n 1.Press Enter to roll the dice\n");
}
if (choice==1,2)
{
printf("THE SNAKE AND THE LADDER begins... \n");

printf("**   100    99   98   97   96   95   94   93   92   91      **         |  1 = START                 99= snake to 41\n");
printf("**   81     82   83   84   85   86   87   88   89   90      **         |  89= snake to 53           74= ladder to 92\n");
printf("**   80     79   78   77   76   75   74   73   72   71      **         |  76= snake to 58           62= ladder to 81\n");
printf("**   61     62   63   64   65   66   67   68   69   70	    **         |  66= snake to 45           54= snake to 31\n");
printf("**   60     59   58   57   56   55   54   53   52   51      **         |  43= snake to 18           50= ladder to 69\n");
printf("**   41     42   43   44   45   46   47   48   49   50      **         |  40= snake to 3            33= ladder to 90\n");
printf("**   40     39   38   37   36   35   34   33   32   31      **         |  27= snake to 5            13= ladder to 46\n");
printf("**   21     22   23   24   25   26   27   28   29   30      **         |  11= snake to 7             4= ladder to 25\n");
printf("**   20     19   18   17   16   15   14   13   12   11      **         |                100= THE END\n");
printf("**   1       2    3    4    5    6    7    8    9   10      **         |                 GET SET GO \n");

printf("\n\nCHAMPION will be the one arriving at the END point(i.e., 100) first and that too with the minimal dice throw...\n");

do{
printf("\n\nPress ENTER to roll the dice \n\n");
dice-=getchar();
dice=(rand()%6)+1;
printf("DICE ROLLED: %d\n", dice);
position+=dice;

if(dice==6)
{
printf("\nWoah its a 6, you get one more chance to roll the dice \n");
printf("Your current position: %d\n", position);
continue;
}
if(position>100){
above= (position-100);
position= (100-above);
} 
printf("Your current position: %d\n", position);
cnt++;
checkposition();
if(position<newPosition){
printf("\nWOHOO... you've got on a ladder. \nYour current position: %d",newPosition);
}
if(position>newPosition){
printf("\nUH-OH... you're bitten by a snake. \nYour current position: %d",newPosition);
}
position= newPosition;
}while(position<100);
	
printf("CONGRATS!! CHAMPION \nYOU WON in %d throws \n",cnt);
printf("Great.. now you're eligible to pinch me, provided you're my fan ;) ");
printf("Coz I only allow my fans to pinch.. Damn I'm so CuTe :o ");
}
getchar();
return 0;
}

int checkposition() {
switch(position)
{
case 4:
            return newPosition=25;
            break;

case 13:
            return newPosition=46;
	    break; 

case 33:
            return newPosition=90;
	    break;

case 50:
            return newPosition=69;
            break;

case 62:
            return newPosition=81;
            break;

case 74:
            return newPosition=92;
            break;

case 11:
            return newPosition=7;
            break;

case 27:
            return newPosition=5;
            break;

case 40:
            return newPosition=3;
	    break;

case 43:
            return newPosition=18;
            break;

case 54:
            return newPosition=31;
            break;

case 66:
            return newPosition=45;
            break;

case 76:
            return newPosition=58;
	    break;

case 89:
            return newPosition=53;
            break;

case 99:
            return newPosition=41;
            break;

default:
            return newPosition=position;
}
}
