// aquarium.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<gl/glut.h>
#include<math.h>
#include<windows.h>
//#define TRUE=1;
//#define FALSE=0;
int flag=0,ch=0,ch1=0;
int out=0;

//int food1 = TRUE;
float a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,p=0,q=0,s=0.7,x=0,y=0,o=0,t=0,z=0,mm=0;
void create_menu(void);
void menu(int);
void disp1(void);
void display(void);
void disp2(void);
void disp3(void);
void disp4(void);
void form2();

void delay(int time)
{
	float i,j,k;

	for(i=0;i<time;i=i+0.050);
	for(j=0;j<time;j=j+0.050);
	for(k=0;k<time;k=k+0.050);
}

void text(char str[])
{
 int i;
 for(i=0;i<strlen(str);i++) 
 {
	 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
 }
}
void HandleKeyboard(unsigned char key,int x, int y)
{
   switch (key) {
	    case 'Q':
   case 'q': exit(0); break;
  case 'D':
   case 'd':glutDisplayFunc(disp4);
	   glutPostRedisplay();
	   break;
	   case 'B':
   case 'b':glutDisplayFunc(form2);
	   glutPostRedisplay();
	   break;
   case 'p':
   case 'P':glutDisplayFunc(disp2);
	   glutPostRedisplay();break;
   case 'f':
   case 'F':glutDisplayFunc(disp1);
	   glutPostRedisplay();break;
	  //case 'C':food1 = !food1; break;
 case '>':out=1; 
	 display();
	 break;
	 case '1':out=2;glutDisplayFunc(display);
	   glutPostRedisplay();break;
   case '2':out=4;glutDisplayFunc(display);
	   glutPostRedisplay();break;
   case '3':out=3;glutDisplayFunc(display);
	   glutPostRedisplay();break;
   case '4':exit(0);break;
	case '5':out=0; glutDisplayFunc(display);
	   glutPostRedisplay();break;;
		//case 'm':
   case '<':out=1;glutDisplayFunc(display);
	   glutPostRedisplay();break;;
   }
}
void form1()
{

 //glColor3f(0.1,0.1,0.1);
	

 /*glBegin(GL_POLYGON);
	{	glColor3f(0.4,0.2,0.3);
		glVertex2f(-0.9999,-0.9999);
		glColor3f(0.1,0.3,0.5);
		glVertex2f(-0.9999,0.9999);
		glColor3f(0.4,0.0,0.0);
		glVertex2f(0.9999,0.9999);
		glColor3f(0.0,0.1,0.0);
		glVertex2f(0.9999,-0.9999);
	}*/
	glEnd();
	/*glColor3f(1.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(10.0,150.0);
	glVertex2f(150.0,150.0);
	glEnd();*/

 /*glBegin(GL_POLYGON);
	{	glColor3f(0.4,0.0,0.0);
		glVertex2f(-0.99,-0.99);
		glColor3f(0.1,0.3,0.0);
		glVertex2f(-0.99,0.99);
		glColor3f(0.4,0.0,0.0);
		glVertex2f(0.99,0.99);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(0.99,-0.99);
	}
	glEnd();*/
	glColor3f(1.0,1.1,0.0);
 glRasterPos3f(-0.30,0.8,-1.0);
 text("GRAPHICAL  IMPLEMENTATION ");
glRasterPos3f(-0.08,0.7,-1.0);
 text("OF");
 glRasterPos3f(-0.18,0.6,-1.0);
 text("A REALTIME AQUARIUM");
 glColor3f(1.0,0.0,0.0);
 glRasterPos3f(-0.17,0.3,-1.0);
 text("Submitted by  ");
 glColor3f(1.0,1.1,0.0);
 glRasterPos3f(-0.65,0.2,-1.0);
 text("MADHURA U");
 glColor3f(1.0,0.0,0.0);
 //glColor3f(1.0,0.0,0.0);
 glRasterPos3f(-0.65,0.1,-1.0);
 text("(4UB16CS023)");
 glColor3f(1.0,1.1,0.0);
 glRasterPos3f(0.35,0.2,-1.0);
 text("POOJA K N");
 glColor3f(1.0,0.0,0.0);
 //glColor3f(0.1,0.6,1.0);
 glRasterPos3f(0.35,0.1,-1.0);
 text("(4UB16CS029)");
 glColor3f(1.0,0.0,0.0);
 glRasterPos3f(-0.35,-0.5,-1.0);
 text("VIth SEM COMPUTER SCIENCE DEPT. ");
 glRasterPos3f(-0.35,-0.6,-1.0);
 text("UNIVERSITY BDT COLLEGE OF ENGINEERING");
glRasterPos3f(-0.35,-0.7,-1.0);
 text("DAVANGERE");
 glColor3f(1.0,0.0,0.0);
 glRasterPos3f(-0.23,0.0,-1.0);
 text("Under the guidance of  ");
  glColor3f(1.0,1.1,0.0);
 glRasterPos3f(-0.65,-0.2,-1.0);
 text("INDIRA S P");
glRasterPos3f(-0.65,-0.28,-1.0);
  //glColor3f(1.0,0.0,0.0);
 text("Asst.Prof");glRasterPos3f(0.35,-0.2,-1.0);
 glColor3f(1.0,1.1,0.0);
 text("Ms.AMBIKA G.N");glRasterPos3f(0.35,-0.28,-1.0);
 glColor3f(1.0,0.0,0.0);
 text("Asst.Prof");
 
 glColor3f(1.0,0.0,0.0);
glRasterPos3f(0.3,-0.8,-1.0);
 text("Press ---> to continue");
 glFlush();
 glEnd();
}

void form2()
{
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_POLYGON);
	{	glColor3f(0.4,0.0,0.0);
		glVertex2f(-0.9999,-0.9999);
		glColor3f(0.1,0.3,0.0);
		glVertex2f(-0.9999,0.9999);
		glColor3f(0.4,0.0,0.0);
		glVertex2f(0.9999,0.9999);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(0.9999,-0.9999);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.3,0.5);
	glVertex2f(10.0,150.0);
	glVertex2f(200.0,150.0);
	glEnd();
	
 /*glBegin(GL_POLYGON);
	{	glColor3f(0.4,0.2,0.3);
		glVertex2f(-0.9999,-0.9999);
		glColor3f(0.1,0.3,0.5);
		glVertex2f(-0.9999,0.9999);
		glColor3f(0.4,0.0,0.0);
		glVertex2f(0.9999,0.9999);
		glColor3f(0.0,0.1,0.0);
		glVertex2f(0.9999,-0.9999);
	}
	glEnd();*/
	glColor3f(1,1,1);
 glRasterPos3f(-0.55,0.8,-1.0);
 text("NAVIGATION OPTIONS");
  glRasterPos3f(-0.45,0.6,-1.0);
 text("1.Introduction");
  glRasterPos3f(-0.45,0.4,-1.0);
 text("2.Execution");
 glRasterPos3f(-0.45,0.2,-1.0);
 text("3.Help");
 glRasterPos3f(-0.45,0.0,-1.0);
 text("4.quit ");
 glRasterPos3f(-0.45,-0.2,-1.0);
 text("5.back");
 glFlush();
 
 glEnd();
}
void help()
{
 glColor3f(1.0,0.0,0.0);
 glRasterPos3f(-0.55,0.8,-1.0);
 text("Use mouse keys to operate in the output");
 glRasterPos3f(-0.55,0.6,-1.0);
 text("Right Button Click to open the Menu");
 glRasterPos3f(-0.55,0.4,-1.0);
 text("Left Button Click to select the option");
 glRasterPos3f(-0.55,0.2,-1.0);
 text("Keyboard options");
glRasterPos3f(-0.35,0.1,-1.0);
 text("press f/F to eat food"); 
glRasterPos3f(-0.35,0.0,-1.0);
 text("press d/D to make fishes have poisoned food");
glRasterPos3f(-0.35,-0.1,-1.0);
text("press p/P to play");
glRasterPos3f(-0.35,-0.2,-1.0);
text("press Q/q to quit");
 glRasterPos3f(-0.55,-0.6,-1.0);
 text("Press <--- or b/B to go back");
 glFlush();
 glEnd();
}
void introduction()
{
 glColor3f(1.0,0.0,0.0);
 glRasterPos3f(-0.15,0.9,-1.0);
 text("INTRODUCTION");
 glRasterPos3f(-0.75,0.7,-1.0);
 text("This project is about how a fish bowl will actually look. ");
 glRasterPos3f(-0.75,0.6,-1.0);
 text("It consists of different types n different sizes of fishes, ");
 glRasterPos3f(-0.75,0.5,-1.0);
 text("and different colors of fishes. It also consists of grasses and pebbles. ");
glRasterPos3f(-0.75,0.4,-1.0);
 text("It allows the user to see which ever option they wants, such as "); 
glRasterPos3f(-0.75,0.3,-1.0);
 text("Fishes eating food.  ");
glRasterPos3f(-0.75,0.2,-1.0);
text("Fishes moving in bowl. ");
glRasterPos3f(-0.75,0.1,-1.0);
text("Fish dies when it consumes poisoned food.");
 glRasterPos3f(-0.75,0.0,-1.0);
 text("All the fishes assemble at one place.  ");
 glRasterPos3f(-0.75,-0.1,-1.0);
 text("The operations specified above can be carried out with the help of menus ");
 glRasterPos3f(-0.75,-0.2,-1.0);
 text("provided with the right click of the mouse ");
 //glRasterPos3f(-0.75,-0.3,-1.0);
 //text(" carried out with the help of the menus provided with the right click of ");
//glRasterPos3f(-0.75,-0.4,-1.0);
 //text("the mouse.");
 glRasterPos3f(0.3,-0.6,-1.0);
 text("Press <---- or b/B to go back"); 
 glFlush();
 glEnd();
}

void fish1()
{
 glColor3f(1.0,0.0,0.3);//red fish
  glBegin(GL_POLYGON);
   glVertex2f(0.7+a,0.05);

   glVertex2f(0.75+a,0.1);
  
   glVertex2f(0.85+a,0.05);
   glVertex2f(0.75+a,0.0);
  glEnd();
  

  glBegin(GL_TRIANGLES);
  glColor3f(1.0,6.0,0.3);
    glVertex2f(0.83+a,0.05);
   glColor3f(1.0,1.0,0.0);
   glVertex2f(0.9+a,0.09);
   glVertex2f(0.9+a,0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(1.0,6.0,0.3);
    glVertex2f(0.75+a,0.095);
glColor3f(1.0,0.0,0.0);
	glVertex2f(0.79+a,0.125);
	glVertex2f(0.77+a,0.07);
  glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1.0,6.0,0.2);
    glVertex2f(0.75+a,0.007);
glColor3f(1.0,0.0,0.6);
	glVertex2f(0.795+a,-0.035);
	glVertex2f(0.77+a,0.02);
  glEnd();


  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.73+a,0.065);
  glEnd();
 
}


/*void fish11()
{

glColor3f(1.0,0.0,0.0);//red fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.7,0.05);
   glVertex2f(-0.75,0.1);
   glVertex2f(-0.85,0.05);
   glVertex2f(-0.75,0.0);
  glEnd();
  

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.83,0.05);
   glVertex2f(-0.9,0.09);
   glVertex2f(-0.9,0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(-0.75,0.095);
	glVertex2f(-0.79,0.125);
	glVertex2f(-0.77,0.07);
  glEnd();

glBegin(GL_TRIANGLES);
    glVertex2f(-0.75,0.007);
	glVertex2f(-0.795,-0.035);
	glVertex2f(-0.77,0.02);
  glEnd();


  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73,0.065);
  glEnd();
}

*/
void fish11()
{

glColor3f(1.0,0.0,0.0);//red fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.7,0.05);
   glVertex2f(-0.95,0.1);
   glVertex2f(-0.85,0.05);
   glVertex2f(-1,0.0);
  glEnd();
  

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.83,0.05);
   glVertex2f(-0.9,0.09);
   glVertex2f(-0.9,0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(-0.75,0.095);
	glVertex2f(-0.79,0.125);
	glVertex2f(-0.77,0.07);
  glEnd();

glBegin(GL_TRIANGLES);
    glVertex2f(-0.75,0.007);
	glVertex2f(-0.795,-0.035);
	glVertex2f(-0.77,0.02);
  glEnd();


  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73,0.065);
  glEnd();
}


void fish2()
{
 glColor3f(1.0,1.0,0.0);//yellow fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.7-b,-0.05);
   glVertex2f(-0.75-b,-0.1);
   glVertex2f(-0.85-b,-0.05);
   glVertex2f(-0.75-b,0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.8,0.5,0.0); 
  glVertex2f(-0.83-b,-0.05);
   glVertex2f(-0.9-b,-0.09);
   glVertex2f(-0.9-b,-0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.8,0.5,0.0);
  glVertex2f(-0.75-b,-0.095);
	glVertex2f(-0.79-b,-0.125);
	glVertex2f(-0.77-b,-0.07);
  glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.8,0.5,0.0);
    glVertex2f(-0.75-b,-0.007);
	glVertex2f(-0.795-b,0.035);
	glVertex2f(-0.77-b,-0.02);
  glEnd();

 glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73-b,-0.035);
  glEnd();
}

void fish21()
{
 glColor3f(1.0,1.0,0.0);//yellow fish//yellow fish which comes for posion food
  glBegin(GL_POLYGON);
   glVertex2f(-0.7+mm,-0.05);
   glVertex2f(-0.75+mm,-0.1);
   glVertex2f(-0.85+mm,-0.05);
   glVertex2f(-0.75+mm,0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.8,0.5,0.0); 
  glVertex2f(-0.83+mm,-0.05);
   glVertex2f(-0.9+mm,-0.09);
   glVertex2f(-0.9+mm,-0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.8,0.5,0.0);
  glVertex2f(-0.75+mm,-0.095);
	glVertex2f(-0.79+mm,-0.125);
	glVertex2f(-0.77+mm,-0.07);
  glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.8,0.5,0.0);
    glVertex2f(-0.75+mm,-0.007);
	glVertex2f(-0.795+mm,0.035);
	glVertex2f(-0.77+mm,-0.02);
  glEnd();

 glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73+mm,-0.035);
  glEnd();
}

  
void fish22()
{
 glColor3f(1.0,1.0,0.0);//yellow fish
  glBegin(GL_POLYGON);
   glVertex2f(0.7,-0.05);
   glVertex2f(0.75,-0.1);
   glVertex2f(0.85,-0.05);
   glVertex2f(0.75,0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
glVertex2f(0.83,-0.05);
glColor3f(1.8,0.5,0.0); 
glVertex2f(0.9,-0.09);
   glVertex2f(0.9,-0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(1.0,1.0,0.0);
  glVertex2f(0.79,-0.125);
  glVertex2f(0.77,-0.07);
  
  glVertex2f(0.75,-0.095);
	
  glEnd();

glBegin(GL_TRIANGLES);
	glVertex2f(0.795,0.035);
	glVertex2f(0.77,-0.02);

    glVertex2f(0.75,-0.007);

  glEnd();

 glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.73,-0.035);
  glEnd();
}


void fish3()
{  
 glColor3f(0.0,1.0,0.0);//green fish
  glBegin(GL_POLYGON);
   glVertex2f(0.8,0.15);
   glVertex2f(0.85,0.2);
   glVertex2f(0.95,0.15);
   glVertex2f(0.85,0.10);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(0.93,0.15);
   glVertex2f(0.98,0.19);
   glVertex2f(0.98,0.11);
  glEnd();


  glBegin(GL_TRIANGLES);
    glVertex2f(0.855,0.2);
	glVertex2f(0.925,0.25);
	glVertex2f(0.87,0.15);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(0.857,0.1);
	glVertex2f(0.925,0.05);
	glVertex2f(0.87,0.15);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.83,0.165);
  glEnd();

}

void fish333()
{ 
	glColor3f(0.0,1.0,0.0);//green fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.8+x,0.15);
   glVertex2f(-0.85+x,0.2);
   glVertex2f(-0.95+x,0.15);
   glVertex2f(-0.85+x,0.10);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.93+x,0.15);
   glVertex2f(-0.98+x,0.19);
   glVertex2f(-0.98+x,0.11);
  glEnd();


  glBegin(GL_TRIANGLES);
    glVertex2f(-0.855+x,0.2);
	glVertex2f(-0.925+x,0.25);
	glVertex2f(-0.87+x,0.15);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.857+x,0.1);
	glVertex2f(-0.925+x,0.05);
	glVertex2f(-0.87+x,0.15);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.83+x,0.165);
  glEnd();

 
}



void fish33()
{  
 glColor3f(0.0,1.0,0.0);//green fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.8,0.15);
   glVertex2f(-0.85,0.2);
   glVertex2f(-0.95,0.15);
   glVertex2f(-0.85,0.10);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.93,0.15);
   glVertex2f(-0.98,0.19);
   glVertex2f(-0.98,0.11);
  glEnd();


  glBegin(GL_TRIANGLES);
    glVertex2f(-0.855,0.2);
	glVertex2f(-0.925,0.25);
	glVertex2f(-0.87,0.15);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.857,0.1);
	glVertex2f(-0.925,0.05);
	glVertex2f(-0.87,0.15);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.83,0.165);
  glEnd();

}
void fish4()
{
	glColor3f(0.5,0.6,0.0);// green1 fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.7+d,-0.15);
   glVertex2f(-0.75+d,-0.2);
   glVertex2f(-0.85+d,-0.15);
   glVertex2f(-0.75+d,-0.1);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.83+d,-0.15);
   glVertex2f(-0.9+d,-0.19);
   glVertex2f(-0.9+d,-0.11);
  glEnd();

  
  glBegin(GL_TRIANGLES);
    glVertex2f(-0.755+d,-0.2);
	glVertex2f(-0.795+d,-0.25);
	glVertex2f(-0.775+d,-0.15);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.755+d,-0.1);
	glVertex2f(-0.795+d,-0.05);
	glVertex2f(-0.775+d,-0.15);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73+d,-0.135);
  glEnd();
} 


void fish44()
{
	glColor3f(0.5,0.6,0.0);// green1 fish
  glBegin(GL_POLYGON);
   glVertex2f(0.7,-0.15);
   glVertex2f(0.75,-0.2);
   glVertex2f(0.85,-0.15);
   glVertex2f(0.75,-0.1);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(0.83,-0.15);
   glVertex2f(0.9,-0.19);
   glVertex2f(0.9,-0.11);
  glEnd();

  
  glBegin(GL_TRIANGLES);
    glVertex2f(0.755,-0.2);
	glVertex2f(0.795,-0.25);
	glVertex2f(0.775,-0.15);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(0.755,-0.1);
	glVertex2f(0.795,-0.05);
	glVertex2f(0.775,-0.15);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.73,-0.135);
  glEnd();
} 



/*void fish5()
{
 glColor3f(0.0,0.0,1.0);//blue fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.7-e,-0.25);
   glVertex2f(-0.75-e,-0.3);
   glVertex2f(-0.775-e,-0.3);
   glVertex2f(-0.85-e,-0.25);
   glVertex2f(-0.775-e,-0.2);
   glVertex2f(-0.75-e,-0.2);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.83-e,-0.25);
   glVertex2f(-0.9-e,-0.29);
   glVertex2f(-0.9-e,-0.21);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(-0.775-e,-0.2);
	glVertex2f(-0.79-e,-0.125);
	glVertex2f(-0.75-e,-0.2);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.75-e,-0.3);
	glVertex2f(-0.795-e,-0.35);
	glVertex2f(-0.775-e,-0.3);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73-e,-0.235);
  glEnd();
}

*/
/*void fish5()
{glColor3f(0.6,0.6,0.6);//shark
  glBegin(GL_POLYGON);
   glVertex2f(-0.6-e,-0.25);
   glVertex2f(-0.65-e,-0.3);
   glVertex2f(-0.775-e,-0.3);
   glVertex2f(-0.98-e,-0.25);
   glVertex2f(-0.775-e,-0.2);
   glVertex2f(-0.65-e,-0.3);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.87-e,-0.25);
   glVertex2f(-0.98-e,-0.31);
   glVertex2f(-0.98-e,-0.21);
  glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0,0.3,0.5);
   glVertex2f(-0.96-e,-0.25);
   glVertex2f(-0.98-e,-0.31);
   glVertex2f(-0.98-e,-0.21);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.6,0.6,0.6);
    glVertex2f(-0.765-e,-0.25);
	glVertex2f(-0.79-e,-0.125);
	glVertex2f(-0.75-e,-0.2);
  glEnd();
  
  glBegin(GL_TRIANGLES);
  glColor3f(0.6,0.6,0.6);
    glVertex2f(-0.865-e,-0.2);
	glVertex2f(-0.89-e,-0.17);
	glVertex2f(-0.85-e,-0.28);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.75-e,-0.3);
	glVertex2f(-0.795-e,-0.35);
	glVertex2f(-0.775-e,-0.3);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.63-e,-0.265);
  glEnd();
}
*/
void fish5()
{
glColor3f(0.0,0.0,0.0);//shark
  glBegin(GL_POLYGON);
   glVertex2f(-0.55-e,-0.25);
   glVertex2f(-0.63-e,-0.3);
   glVertex2f(-0.775-e,-0.3);
   glVertex2f(-0.99-e,-0.25);
   glVertex2f(-0.775-e,-0.2);
   glVertex2f(-0.65-e,-0.3);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.87-e,-0.25);
   glVertex2f(-0.98-e,-0.31);
   glVertex2f(-0.98-e,-0.21);
  glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0,0.3,0.5);
   glVertex2f(-0.96-e,-0.25);
   glVertex2f(-0.99-e,-0.31);
   glVertex2f(-0.99-e,-0.21);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0,0,0);
    glVertex2f(-0.66-e,-0.25);
	glVertex2f(-0.79-e,-0.125);
	glVertex2f(-0.76-e,-0.21);
  glEnd();
  
  glBegin(GL_TRIANGLES);
  glColor3f(0,0,0);
    glVertex2f(-0.865-e,-0.2);
	glVertex2f(-0.85-e,-0.17);
	glVertex2f(-0.85-e,-0.28);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.75-e,-0.3);
	glVertex2f(-0.795-e,-0.35);
	glVertex2f(-0.675-e,-0.3);
  glEnd();

  glColor3f(1.0,1.0,1.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.62-e,-0.265);
  glEnd();
}
void fish55()
{
 glColor3f(0.0,0.0,1.0);//blue fish
  glBegin(GL_POLYGON);
   glVertex2f(0.7,-0.25);
   glVertex2f(0.75,-0.3);
   glVertex2f(0.775,-0.3);
   glVertex2f(0.85,-0.25);
   glVertex2f(0.775,-0.2);
   glVertex2f(0.75,-0.2);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(0.83,-0.25);
   glVertex2f(0.9,-0.29);
   glVertex2f(0.9,-0.21);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(0.775,-0.2);
	glVertex2f(0.79,-0.125);
	glVertex2f(0.75,-0.2);
  glEnd();

  

 glBegin(GL_TRIANGLES);
    glVertex2f(0.75,-0.3);
	glVertex2f(0.795,-0.35);
	glVertex2f(0.795,-0.3);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.73,-0.235);
  glEnd();

}
void fish6()
{
glColor3f(1.0,0.0,0.0);//red1 fish
  glBegin(GL_POLYGON);
   glVertex2f(0.7+f,0.25);
   glVertex2f(0.75+f,0.3);
   glVertex2f(0.775+f,0.3);
   glVertex2f(0.85+f,0.25);
   glVertex2f(0.775+f,0.2);
   glVertex2f(0.75+f,0.2);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(0.83+f,0.25);
   glVertex2f(0.9+f,0.29);
   glVertex2f(0.9+f,0.21);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(0.775+f,0.3);
	glVertex2f(0.79+f,0.4);
	glVertex2f(0.75+f,0.3);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(0.775+f,0.2);
	glVertex2f(0.79+f,0.1);
	glVertex2f(0.75+f,0.2);
  glEnd();
}
