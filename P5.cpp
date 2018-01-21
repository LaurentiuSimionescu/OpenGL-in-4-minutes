#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    glutWireTeapot(0.9);

    glFlush();

}

int main() {

    glutCreateWindow("Simple Teapot");
    glutDisplayFunc(display);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1, 1, -1, 1, 1, 3);
    glTranslated(0, 0, -2);

    glutMainLoop();
    return 0;

}
