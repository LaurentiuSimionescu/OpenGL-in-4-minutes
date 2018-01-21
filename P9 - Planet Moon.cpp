#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

int gAngle = 0;

void drawPlanetMoon(float radius, int angle){

    glPushMatrix();
    glRotated(angle, 0, 1, 0);
    glPushMatrix();
    glTranslated(radius, 0, 0);
    glutWireSphere(radius, 10, 10);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2 * radius, 0, 0);
    glutWireSphere(radius / 2, 10, 10);
    glPopMatrix();

}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    drawPlanetMoon(0.4, gAngle++);
    glFlush();
    glutSwapBuffers();
}

void timer(int extra){
    glutPostRedisplay();
    glutTimerFunc(30, timer, 0);
}

int main(){
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutCreateWindow("Window");
    glutDisplayFunc(display);
    glutTimerFunc(0, timer, 0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1, 1, -1, 1, 1, 3);
    glTranslated(0, 0, -2);
    glMatrixMode(GL_MODELVIEW);
    glutMainLoop();

}



