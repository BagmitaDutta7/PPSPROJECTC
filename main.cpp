#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dos.h>
#include <graphics.h>
int clock(int h, int m, int s, int a);
int infoyou(){
    int h,m,s,a;
    char name[10];
    char con[25];
    char *arr[7]={"ASIA","AFRICA","AUSTRALIA","ANTARCTICA","EUROPE","NORTHAMERICA","SOUTHAMERICA"};
    printf("\nHow should we call you?");
    scanf("%s",name);
    printf("\nWhich continent do you,%s belong to?(ALL CAPITAL,NO SPACE)",name);
    scanf("%s",con);
    printf("\nEnter the time you see in your watch in HH:MM:SS FORMAL format :");
    scanf("%d:%d:%d",&h,&m,&s);
    for(int i=0;i<7;i++){
        if(strcmp(con,arr[i])==0)
            a=i;
    }
    system("cls");
    printf("\n\n\n\n\n\n\n                        ******************LET'S SEE HOW %s's TIME & LOCATION LOOKS LIKE....**********************", name);
    Sleep(5000);
    clock(h,m,s,a);
    return 0;

}
int clock(int h, int m, int s, int a)
{
    int gd=DETECT,gm,x,y;
    initgraph(&gd,&gm,(char*)"");
    setcolor(14);
    outtextxy(200,30,"A SIMPLE GUIDE TO WORLD MAP");
    setbkcolor(15);
    setcolor(1);
    outtextxy(90,180,"NORTH AMERICA");
    setcolor(2);
    outtextxy(130,270,"SOUTH AMERICA");
    setcolor(0);
    outtextxy(260,450,"ANTARCTICA");
    setcolor(5);
    outtextxy(530,340,"AUSTRALIA");
    setcolor(6);
    outtextxy(440,180,"ASIA");
    setcolor(12);
    outtextxy(260,220,"AFRICA");
    setcolor(13);
    outtextxy(340,160,"EUROPE");
    switch(a){
    case 0:
        setcolor(4);
        outtextxy(440,165,"You're here");
        break;
    case 1:
        setcolor(4);
        outtextxy(260,205,"You're here");
        break;
    case 2:
        setcolor(4);
        outtextxy(530,325,"You're here");
        break;
    case 3:
        setcolor(4);
        outtextxy(260,435,"You're here");
        break;
    case 4:
        setcolor(4);
        outtextxy(340,145,"You're here");
        break;
    case 5:
        setcolor(4);
        outtextxy(90,165,"You're here");
        break;
    case 6:
        setcolor(4);
        outtextxy(130,250,"You're here");
        break;
    default:
        setcolor(4);
        settextstyle(8,0,4);
        outtextxy(110,300,"!!! YOU'RE AN ALIEN !!!");
        break;

    }


    start: ;
    for(h;h<24;h++){
        for(m;m<60;m++){
            for(s;s<60;s++){
                system("cls");
                printf("YOUR TIME:\n\n\n\n\n                   %d:%d:%d",h,m,s);
                Sleep(1000);}
            s=0;

        }
        m=0;
    }
    h=0;
    goto start;
    closegraph();
    return 0;
}
int main()
{
    int continent,h,m,s,ans;
    printf("WELCOME TO PLANET EARTH");
    printf("\nWant to see where you lie in the planet(not precise just approx) along with the time?\n '1' for YES\n '0' for NO :");
    scanf("%d",&ans);
    if(ans==1){
        printf("OKAY LET'S BEGIN!");
        infoyou();
    }
    else
        printf("OKAY,SEE YOU AGAIN!");
    return 0;
}


