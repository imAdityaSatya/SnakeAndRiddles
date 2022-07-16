#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int chkPos();
int dice, pos, newPos, choice, cnt=0;

int main()
{
srand(time(NULL));
printf("\nTHE SNAKE AND THE LADDER\n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\n\tMenu\n\t1. VIEW PLAYBOOK \n\t2. START PLAYING\n");
printf("Choose an option: ");
scanf("%d",&choice);
if(choice==1)
{
printf("\nPLAYBOOK:___________________________________________________________________________________________________________\n");
printf("|                                                                  |                                                |\n");
printf("|  100    99   98   97   96   95   94   93   92   91               |   1: START                 99: snake to 41     |\n");
printf("|  81     82   83   84   85   86   87   88   89   90               |  89: snake to 53           74: ladder to 92    |\n");
printf("|  80     79   78   77   76   75   74   73   72   71               |  76: snake to 58           62: ladder to 81    |\n");
printf("|  61     62   63   64   65   66   67   68   69   70               |  66: snake to 45           54: snake to 31     |\n");
printf("|  60     59   58   57   56   55   54   53   52   51               |  43: snake to 18           50: ladder to 69    |\n");
printf("|  41     42   43   44   45   46   47   48   49   50               |  40: snake to 3            33: ladder to 90    |\n");
printf("|  40     39   38   37   36   35   34   33   32   31               |  27: snake to 5            13: ladder to 46    |\n");
printf("|  21     22   23   24   25   26   27   28   29   30               |  11: snake to 7             4: ladder to 25    |\n");
printf("|  20     19   18   17   16   15   14   13   12   11               |                                                |\n");
printf("|  1       2    3    4    5    6    7    8    9   10               |                 100: THE END                   |\n");
printf("|__________________________________________________________________|_______________________________________________/\n");

printf("\nNote:\n -->> Press ENTER to roll the dice\n -->> Reach 100 to WIN the game\n -->> If somehow you happen to reach a position greater than 100\n      then you will be automatically directed to the position-99 \n -->> First dice has already been rolled as a demo\n");
}
if(choice==2){
printf("Note:- The first dice has already been rolled for you\n");
}
if(choice==1,2)
{
printf("\nLET THE GAME BEGIN...\n");
do
{
printf("\nRoll the dice \n");
dice-=getchar();
dice=(rand()%6)+1;
printf("DICE ROLLED: (%d)\n", dice);
pos+=dice;

if(dice==6)
{
printf("\nWoah its a SIX\nLooks like someone is very lucky with the dice\n");
printf("Your current pos: [%d]\n", pos);
continue;
}

if(pos>100){
//tmp= (pos-100);
//pos= (100-tmp);
pos=99;
}
printf("Your current pos: [%d]\n", pos);
cnt++;

chkPos();

if(pos<newPos){
printf("\nWOHOO... you've got on a ladder. \nYour current pos: [%d]\n",newPos);
}
if(pos>newPos){
printf("\nUH-OH... you're bitten by a snake. \nYour current pos: [%d]\n",newPos);
}
pos= newPos;
}while(pos<100);
printf("\nCONGRATS!! CHAMPION \nYOU WON in %d throws \n",cnt);
}
getchar();
return 0;
}


int chkPos() {
switch(pos)
{
case 4:
            return newPos=25;
            break;

case 13:
            return newPos=46;
            break; 

case 33:
            return newPos=90;
            break;

case 50:
            return newPos=69;
            break;

case 62:
            return newPos=81;
            break;

case 74:
            return newPos=92;
            break;

case 11:
            return newPos=7;
            break;

case 27:
            return newPos=5;
            break;

case 40:
            return newPos=3;
            break;

case 43:
            return newPos=18;
            break;

case 54:
            return newPos=31;
            break;

case 66:
            return newPos=45;
            break;

case 76:
            return newPos=58;
            break;

case 89:
            return newPos=53;
            break;

case 99:
            return newPos=41;
            break;

default:
            return newPos=pos;
}
}

int lifeline(){
if(riddle()==1){
return 1;
}else{
return 0;
}
}




/*
void lifeline(){
srand(time(NULL));
int r= rand()%10;
printf("%d",r);
switch(r)
{
case 0: 
    printf("")
}
}
*/

