#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    glutWireTeapot(0.5);

    glFlush();

}

void timer(int extra){
    Beep(1000, 100);
    glutTimerFunc(1000, timer, 0);
}


int main() {

    glutCreateWindow("Window");
    glutDisplayFunc(display);

    glutTimerFunc(1000, timer, 0);

    glutMainLoop();
    return 0;

}
