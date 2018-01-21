#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glutWireTeapot(0.5);
    glFlush();

}

int main() {

    glutCreateWindow("Simple Teapot");
    glutDisplayFunc(display);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotated(45, 1, 1, 1);
    // void glRotated(	GLdouble angle, GLdouble x, GLdouble y, GLdouble z);

    glutMainLoop();
    return 0;

}

