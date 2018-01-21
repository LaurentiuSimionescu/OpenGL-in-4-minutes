#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();


    glPushMatrix();
    glRotated(45, 1, 1, 1);
    glutWireTeapot(0.3);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.5, 0.5, 0);
    // void glTranslated(	GLdouble x, GLdouble y, GLdouble z);
    glutWireTeapot(0.3);
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5, 1, 0);
    glTranslated(-1.0, 5.0, 0);
    glutWireTeapot(0.4);
    glPopMatrix();


    glFlush();

}

int main() {

    glutCreateWindow("Simple Teapot");
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;

}

