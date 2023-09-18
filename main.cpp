#include <iostream>
#include <GL/glut.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

float lineWidth = 2.0f;

void handleKeypress(unsigned char key, int x, int y);
void initRendering();
void handleResize(int w, int h);
void drawScene();
void backgroundColor();
int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Jazon Remig");
	
	initRendering();
	glutDisplayFunc(drawScene);
	backgroundColor();
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);
	glutMainLoop();
	return 0;
}

void handleKeypress(unsigned char key, int x, int y){
	switch (key){
		case 27:
		exit(0);
	}
}

void initRendering(){
	glEnable(GL_DEPTH_TEST);
}

void handleResize(int w, int h){
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluPerspective(45.0, (double)w/ (double)h, 1.0, 200.0);
	glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);
	glMatrixMode(GL_MODELVIEW);

}

void drawScene(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.8f, 0.5f);  //1
	glVertex2f(-0.6f, 0.1f);  //2
	
	glVertex2f(-0.6f, 0.1f);  //2
	glVertex2f(-0.3f, 0.1f);  //3
	
	glVertex2f(-0.3f, 0.1f);  //3
	glVertex2f(-0.1f, 0.5f);  //4
	
	glVertex2f(-0.1f, 0.5f);  //4
	glVertex2f(-0.3f, 0.8f);  //5
	
	glVertex2f(-0.3f, 0.8f);  //5
	glVertex2f(-0.6f, 0.8f);  //6
	
	glVertex2f(-0.6f, 0.8f);  //6
	glVertex2f(-0.8f, 0.5f); //1
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.8f, -0.5f);  //1
	glVertex2f(-0.6f, -0.9f); // 2
	glVertex2f(-0.3f, -0.9f); // 3
	glColor3f(.0f, 1.0f, 0.0f);
	glVertex2f(-0.1f, -0.5f); // 4
	glVertex2f(-0.3f, -0.1f); // 5
	glVertex2f(-0.6f, -0.1f); // 6
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.1f, -0.5f);  //1
	glVertex2f(0.3f, -0.9f); // 2
	glVertex2f(0.6f, -0.9f); // 3
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.8f, -0.5f); // 4
	glVertex2f(0.6f, -0.1f); // 5
	glVertex2f(0.3f, -0.1f); // 6
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.1f, 0.5f);  //1
	glVertex2f(0.3f, 0.1f); // 2
	glVertex2f(0.7f, 0.1f); // 3
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.8f, 0.5f); // 4
	glVertex2f(0.7f, 0.9f); // 5
	glVertex2f(0.3f, 0.9f); // 6
	glEnd();
	
	glutSwapBuffers();
}

void backgroundColor(){
	glClearColor(0.0,0.0,1.0,1.0); //red, green, blue, alpha
}
