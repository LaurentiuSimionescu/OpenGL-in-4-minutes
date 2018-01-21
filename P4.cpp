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

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10, 10, -10, 10, -10, 10);


    glutMainLoop();
    return 0;

}


