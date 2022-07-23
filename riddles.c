#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int riddle(){
    srand(time(NULL));
    int r= rand()%5;
    //printf("riddle[%d]: \n",r);
    char ans[11];
    //char ans= getchar();
    
    // scanf("%s",ans);
    // return (strcmp(ans,"hello")==0) ? 1:0;
    
    switch(r){
        case 0: printf("I have a neck but no head and I even wear a cap. You know who am I?\n");
        scanf("%s",ans);
        return (strcmp(ans,"bottle")==0)?1:0;
        // break;
        
        case 1: printf("Which room has no doors and no windows?\n");
        scanf("%s",ans);
        return (strcmp(ans,"mushroom")==0)?1:0;
        // break;
        
        case 2: printf("During which month do people sleep the least?\n");
        scanf("%s",ans);
        return (strcmp(ans,"february")==0)?1:0;
        // break;
        
        case 3: printf("What belongs to you but others use it more than you do?\n");
        scanf("%s",ans);
        return (strcmp(ans,"name")==0)?1:0;
        // break;
        
        case 4:
        printf("Poor people have it. Rich people need it. If you eat it, you'll die. What is it?\n");
        scanf("%s",ans);
        return (strcmp(ans,"nothing")==0)?1:0;
        // break;
    }
       
}

int lifeline(){
	//int riddle=1;
	return (riddle()==1)? 1:0;
}


void main(){
    // printf("%d",riddle());
    // printf("%d",lifeline());
    if(lifeline()==1){
        printf("correct");
    }
    else{
        printf("incorrect");
    }
    
    // printf("%d\n", r);
}
