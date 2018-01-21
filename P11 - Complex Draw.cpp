#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 192/255.0, 203/255.0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 300.0);
    glVertex2f(300.0, 300.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 224 / 225.0);
    glVertex2f(600, 300);
    glVertex2f(900, 300);
    glVertex2f(900, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(300, 300);
    glVertex2f(600, 300);
    glVertex2f(600, 600);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(300, 300);
    glVertex2f(300, 600);
    glVertex2f(600, 600);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0, 600);
    glVertex2f(300, 600);
    glVertex2f(300, 900);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(600, 600);
    glVertex2f(600, 900);
    glVertex2f(900, 900);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(600, 600);
    glVertex2f(900, 600);
    glVertex2f(900, 900);
    glEnd();

    glFlush ();
}

void reshape (int w, int h) {
    glViewport(0, 0, (GLsizei) w,(GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity ();
    gluOrtho2D(0.0, (GLdouble) w, 0.0, (GLdouble) h);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (900, 900);
    glutInitWindowPosition(100,100);
    glutCreateWindow (argv[0]);
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;


}
