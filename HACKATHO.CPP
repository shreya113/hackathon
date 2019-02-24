#include<fstream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


void main()
{  //main screen
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 char nme[50],email[80],gen,cont[10];
 int age;
  setcolor(YELLOW);
 setfillstyle(LINE_FILL,YELLOW);
 settextstyle(10,HORIZ_DIR,6);
 outtextxy(165,7,"STRADA");
 delay(800);
 getch();
cleardevice();

 //variables
 int c;

 //login window
 setcolor(13);
 settextstyle(3,HORIZ_DIR,6);
 outtextxy(80,10,"*****STRADA*****");
 setcolor(WHITE);
 settextstyle(3,HORIZ_DIR,2);
 outtextxy(10,120,"1. SIGN UP");
 outtextxy(10,170,"2. SIGN IN");
 outtextxy(10,215,"Choose : ");
 gotoxy(19,15);
 cin>>c;
 getch();
 cleardevice();
 //loading
 setcolor(RED);
 settextstyle(3,HORIZ_DIR,5);
 outtextxy(210,190," LOADING...");
 int x=150;
 for(int i=0;i<300;i++)
 {
  rectangle(x,260,x+i,290);
  delay(10);
 }
 cleardevice();
 cleardevice();

 if(c==1)
 {
 setcolor(YELLOW);
 setfillstyle(LINE_FILL,YELLOW);
 settextstyle(10,HORIZ_DIR,6);
 outtextxy(165,5,"SIGN UP");

     setcolor(WHITE);
     settextstyle(3,HORIZ_DIR,2);
     outtextxy(10,120,"1. NAME : ");
     gotoxy(15,9);
     gets(nme);
     outtextxy(10,170,"2. AGE : ");
     gotoxy(13,12);
     cin>>age;
     outtextxy(10,215,"3. EMAIL ID : ");
     gotoxy(19,15);
     gets(email);

    outtextxy(10,265,"3. GENDER (M,F,O): ");
    gotoxy(30,18);
    cin>>gen;
    outtextxy(10,315,"3. CONTACT : ");
    gotoxy(30,21);
    cin>>cont;
    outtextxy(10,415,"Press ENTER to SIGN UP");
    getch();
    cleardevice();
    cleardevice();


    }
    //var
    char em[80],con[10];
 if(c==2)

  {                 setcolor(YELLOW);
 setfillstyle(LINE_FILL,YELLOW);
 settextstyle(10,HORIZ_DIR,6);
 outtextxy(165,5,"SIGN IN");
		     setcolor(WHITE);
		     settextstyle(3,HORIZ_DIR,2);
		     outtextxy(10,120,"* CONTACT : ");
		     gotoxy(19,9);
		     cin>>con;
		     outtextxy(10,170,"* EMAIL : ");
		     gotoxy(19,12);
		     gets(em);


       cleardevice();
       }


 //loading
 setcolor(RED);
 settextstyle(3,HORIZ_DIR,5);
 outtextxy(210,190," LOADING...");
 x=150;
 for(i=0;i<300;i++)
 {
  rectangle(x,260,x+i,290);
  delay(10);
 }
 cleardevice();
 cleardevice();
 //var
int choice;
char ans;
do{
setcolor(YELLOW);
 setfillstyle(LINE_FILL,YELLOW);
 settextstyle(10,HORIZ_DIR,6);
 outtextxy(165,5,"STRADA");
 setcolor(WHITE);
     settextstyle(3,HORIZ_DIR,2);

     outtextxy(10,120,"1. WASHROOMS ");
     outtextxy(10,170,"2. MEDICAL STORES ");
     outtextxy(10,215,"3. MECHANIC SHOP ");

    outtextxy(10,265,"4. AMBULANCE ");
    outtextxy(10,315,"5. AGENTS ");
    outtextxy(10,365,"6. EXIT ");
    delay(800);
    getch();
    cleardevice();


    outtextxy(10,120,"CHOOSE: ");
    gotoxy(15,9);
    cin>>choice;
    if(choice==6)
    {  exit(0);
    }

    outtextxy(10,170,"Any other services?(Y/N) :");
    gotoxy(35,12);
    cin>>ans;
    cleardevice();

    }while(ans=='Y');
    getch();
    }

