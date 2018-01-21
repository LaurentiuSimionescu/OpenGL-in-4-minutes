#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

int gAngle = 0;

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();
    glRotated(gAngle, 0, 1, 0);
    glutWireTeapot(0.9);

    gAngle++;

    glFlush();
    glutSwapBuffers();

}

void timer(int extra){

    glutPostRedisplay();
    glutTimerFunc(30, timer, 0);
}


int main() {

    glutCreateWindow("Window");
    glutDisplayFunc(display);

    glutTimerFunc(0, timer, 0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1, 1, -1, 1, 1, 3);
    glTranslated(0, 0, -2);
    glMatrixMode(GL_MODELVIEW);

    glutMainLoop()
    return 0;

}
