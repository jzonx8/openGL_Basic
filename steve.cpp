#include <iostream>
#include <GL/glut.h>
#include "steve.h"

void lineSteve(){
	glBegin(GL_LINES); // head
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,16.0f);
	glVertex2f(4.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glVertex2f(-4.0f,8.0f);
	glEnd();
	
	glBegin(GL_LINES); // Torso
	glColor3f(0.08f,0.8f,0.87f);
	glVertex2f(-4.0f, 4.0f); //G
	glVertex2f(-4.0f,-2.0f); //H
	
	glVertex2f(-4.0f,-2.0f); //H
	glVertex2f(4.0f,-2.0f); //I
	
	glVertex2f(4.0f,-2.0f); //I
	glVertex2f(4.0f,4.0f); //J
	
	glVertex2f(4.0f,4.0f); //J
	glVertex2f(8.0f,4.0f); //K
	
	glVertex2f(8.0f,4.0f); //K
	glVertex2f(8.0f,8.0f); //L
	
	glVertex2f(8.0f,8.0f); //L
	glVertex2f(-8.0f,8.0f); //E
	
	glVertex2f(-8.0f,8.0f); //E
	glVertex2f(-8.0f,4.0f); //F
	
	glVertex2f(-8.0f,4.0f); //F
	glVertex2f(-4.0f, 4.0f); //G
	glEnd();
	
	glBegin(GL_LINES); // r arm
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(-8.0f,-4.0f);
	glVertex2f(-4.0f,-4.0f);
	glVertex2f(-4.0f,-4.0f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(-8.0f,8.0f);
	glVertex2f(-8.0f,8.0f);
	glVertex2f(-8.0f,-4.0f);
	glEnd();
	
	glBegin(GL_LINES); // l arm
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(4.0f,-4.0f);
	glVertex2f(8.0f,-4.0f);
	glVertex2f(8.0f,-4.0f);
	glVertex2f(8.0f,8.0f);
	glVertex2f(8.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,-4.0f);
	glEnd();
	
	glBegin(GL_LINES); //mid
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, -2.0f);
	glVertex2f(0.0f, -16.0f);
	glEnd();
	
	glBegin(GL_LINES); // r leg
	glColor3f(0.28f,0.09,0.68f);
	glVertex2f(-4.0f,-14.0f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(-4.0f,-2.0f);
	glVertex2f(-4.0f,-2.0f);
	glVertex2f(-4.0f,-14.0f);
	glEnd();
	
	glBegin(GL_LINES); // l leg
	glColor3f(0.28f,0.09,0.68f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(4.0f,-14.0f);
	glVertex2f(4.0f,-14.0f);
	glVertex2f(4.0f,-2.0f);
	glVertex2f(4.0f,-2.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(0.0f,-14.0f);
	glEnd();
	
	glBegin(GL_LINES); // foot
	glColor3f(0.7f,0.7f,0.7f);
	glVertex2f(-4.0f, -16.0f);
	glVertex2f(4.0f, -16.0f);
	glVertex2f(4.0f, -16.0f);
	glVertex2f(4.0f, -14.0f);
	glVertex2f(4.0f, -14.0f);
	glVertex2f(-4.0f, -14.0f);
	glVertex2f(-4.0f, -14.0f);
	glVertex2f(-4.0f, -16.0f);
	glEnd();
}

void coloredSteve(){	

	glBegin(GL_POINTS); //Patches
	glPointSize(10.0);	
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-2.5, 11.5); // r eye
	glColor3f(0.29f, 0.15f, 0.56f);
	glVertex2f(-1.5, 11.5);
	glEnd();
	
	glBegin(GL_QUADS); // head
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glEnd();
	
	glBegin(GL_POLYGON); // Torso
	glColor3f(0.08f,0.8f,0.87f);
	glVertex2f(-4.0f, 4.0f); //G
	glVertex2f(-4.0f,-2.0f); //H
	glVertex2f(4.0f,-2.0f); //I
	glVertex2f(4.0f,4.0f); //J
	glVertex2f(8.0f,4.0f); //K
	glVertex2f(8.0f,8.0f); //L
	glVertex2f(-8.0f,8.0f); //E
	glVertex2f(-8.0f,4.0f); //F
	glEnd();
	
	glBegin(GL_QUADS); // r arm
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(-8.0f,-4.0f);
	glVertex2f(-4.0f,-4.0f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(-8.0f,8.0f);
	glEnd();
	
	glBegin(GL_QUADS); // l arm
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(4.0f,-4.0f);
	glVertex2f(8.0f,-4.0f);
	glVertex2f(8.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glEnd();
	
	glBegin(GL_LINES); //mid
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, -2.0f);
	glVertex2f(0.0f, -16.0f);
	glEnd();
	
	glBegin(GL_QUADS); // r leg
	glColor3f(0.28f,0.09,0.68f);
	glVertex2f(-4.0f,-14.0f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(-4.0f,-2.0f);
	glEnd();
	
	glBegin(GL_QUADS); // l leg
	glColor3f(0.28f,0.09,0.68f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(4.0f,-14.0f);
	glVertex2f(4.0f,-2.0f);
	glVertex2f(0.0f,-2.0f);
	glEnd();
	
	glBegin(GL_QUADS); // foot
	glColor3f(0.7f,0.7f,0.7f);
	glVertex2f(-4.0f, -16.0f);
	glVertex2f(4.0f, -16.0f);
	glVertex2f(4.0f, -14.0f);
	glVertex2f(-4.0f, -14.0f);
	glEnd();
	
	glutSwapBuffers();
}
