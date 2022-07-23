#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int riddle(){
    srand(time(NULL));
    char ans[11];
    int r= rand()%5;
    printf("%d\n",r);
    if(r==0){
        printf("I have a neck but no head and I even wear a cap. You know who am I?\n");
        scanf("%s",ans);
        if(ans=="bottle"){
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(r==1){
        printf("Which room has no doors and no windows?\n");
        scanf("%s",ans);
        if(ans=="mushroom"){
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(r==2){
        printf("During which month do people sleep the least?\n");
        scanf("%s",ans);
        if(ans=="february"){
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(r==3){
        printf("What belongs to you but others use it more than you do?\n");
        scanf("%s",ans);
        if(ans=="name"){
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(r==4){
        printf("Poor people have it. Rich people need it. If you eat it, you'll die. What is it?\n");
        scanf("%s",ans);
        if(ans=="nothing"){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int lifeline(){
	//int riddle=1;
	if(riddle()==1){
		return 1;
	}else{
		return 0;
	}
}


void main()
{
    if(lifeline()==1){
        printf("correct");
        break;
    }else if(lifeline()==0){
        printf("incorrect");
    }
    // printf("%d\n", r);
}
