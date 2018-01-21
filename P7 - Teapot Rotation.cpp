#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

int gAngle = 0;

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();
    glRotated(gAngle, 0, 1, 0);
    glutWireTeapot(0.5);

    gAngle++;

    glFlush();

}

void timer(int extra){

    glutPostRedisplay();
    glutTimerFunc(30, timer, 0);
}


int main() {

    glutCreateWindow("Window");
    glutDisplayFunc(display);

    glutTimerFunc(0, timer, 0);

    glutMainLoop();
    return 0;

}
