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
 cin>>c; //please specify variable's clearly for code clarity
 outtextxy(10,265,"Press ENTER to proceed");
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
 //vars
 char nme[50],email[80],gen;
 int age,cont;
 if(c==1)
 {
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
     if((strcmp(email,"@")!=0)&&(strcmp(email," ")==0))
    { outtextxy(19,265,"Invalid");
       }
    outtextxy(10,315,"3. GENDER (M,F,O): ");
    gotoxy(25,21);
    cin>>gen;
    outtextxy(10,365,"3. CONTACT : ");
    gotoxy(22,24);
    cin>>cont;
    outtextxy(10,415,"Press ENTER to SIGN UP");
    getch();
    cleardevice();
    cleardevice();
    }
    //var
    int con;
    char em[80];
 if(c==2)
  {                  setcolor(WHITE);
		     settextstyle(3,HORIZ_DIR,2);
		     outtextxy(10,120,"* CONTACT : ");
		     gotoxy(19,9);
		     cin>>con;
		     outtextxy(10,170,"* EMAIL : ");
		     gotoxy(19,12);
		     gets(em);
		   if((strcmp(email,"@")!=0)&&(strcmp(email," ")==0))
    { outtextxy(19,225,"Invalid");
       }
       }
  cleardevice();

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
 setcolor(WHITE);
     settextstyle(3,HORIZ_DIR,2);
     do{

     outtextxy(10,120,"1. WASHROOMS ");
     outtextxy(10,170,"2. MEDICAL STORES ");
     outtextxy(10,215,"3. MECHANIC SHOP ");

    outtextxy(10,265,"4. AMBULANCE ");
    outtextxy(10,315,"5. AGENTS ");


    outtextxy(10,365,"CHOOSE: ");
    gotoxy(22,30);
    cin>>choice;

    outtextxy(10,415,"Any other services?(Y/N) :");
    gotoxy(22,35);
    cin>>ans;

    }while(ans=='Y');
    getch();
    }
