#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#define PI 3.14159

float angle = 0;
float theta = 0;

void sun()
{
    glPushMatrix();
    glColor3d(255,50, 0);
    glRotatef(angle, 0, 0, 1);
    glutSolidSphere(2.5, 20, 20);
    glPopMatrix();
}

void Mercury(float x, float z, float planet_size, float rotate_speed) {
    
    glPushMatrix();
    glColor3ub(0, 0, 255);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glTranslatef(x, 0, z);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glutSolidSphere(planet_size, 20, 20);
    glPopMatrix();
    
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++) {
        glColor3d(1, 1, 1);
        theta = i * PI / 180;
        float radius = sqrt(x * x + z * z);
        glVertex3f(radius * cos(theta), 0, radius * sin(theta));
    }
    glEnd();
}

void Venus(float x, float z, float planet_size, float rotate_speed) {

    glPushMatrix();
    glColor3ub(255, 215, 0);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glTranslatef(x, 0, z);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glutSolidSphere(planet_size, 20, 20);
    glPopMatrix();

    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++) {
        glColor3d(1, 1, 1);
        theta = i * PI / 180;
        float radius = sqrt(x * x + z * z);
        glVertex3f(radius * cos(theta), 0, radius * sin(theta));
    }
    glEnd();
}

void Earth(float x, float z, float planet_size, float rotate_speed) {

    glPushMatrix();
    glColor3ub(0, 0,255);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glTranslatef(x, 0, z);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glutSolidSphere(planet_size, 20, 20);
    glPopMatrix();

    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++) {
        glColor3d(1, 1, 1);
        theta = i * PI / 180;
        float radius = sqrt(x * x + z * z);
        glVertex3f(radius * cos(theta), 0, radius * sin(theta));
    }
    glEnd();
}

void Mars(float x, float z, float planet_size, float rotate_speed) {

    glPushMatrix();
    glColor3ub(255, 0,0);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glTranslatef(x, 0, z);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glutSolidSphere(planet_size, 20, 20);
    glPopMatrix();

    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++) {
        glColor3d(1, 1, 1);
        theta = i * PI / 180;
        float radius = sqrt(x * x + z * z);
        glVertex3f(radius * cos(theta), 0, radius * sin(theta));
    }
    glEnd();
}
void Jupiter(float x, float z, float planet_size, float rotate_speed) {

    glPushMatrix();
    glColor3ub(200,100, 0);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glTranslatef(x, 0, z);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glutSolidSphere(planet_size, 20, 20);
    glPopMatrix();

    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++) {
        glColor3d(1, 1, 1);
        theta = i * PI / 180;
        float radius = sqrt(x * x + z * z);
        glVertex3f(radius * cos(theta), 0, radius * sin(theta));
    }
    glEnd();
}
void Saturn(float x, float z, float planet_size, float rotate_speed) {

    glPushMatrix();
    glColor3ub(73, 60, 30);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glTranslatef(x, 0, z);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glutSolidSphere(planet_size, 20, 20);
    glPopMatrix();

   
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++) {
        glColor3d(1, 1, 1);
        theta = i * PI / 180;
        float radius = sqrt(x * x + z * z);
        glVertex3f(radius * cos(theta), 0, radius * sin(theta));
    }
    glEnd();
}

void Uranus(float x, float z, float planet_size, float rotate_speed) {

    glPushMatrix();
    glColor3ub(0, 180, 100);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glTranslatef(x, 0, z);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glutSolidSphere(planet_size, 20, 20);
    glPopMatrix();

    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++) {
        glColor3d(1, 1, 1);
        theta = i * PI / 180;
        float radius = sqrt(x * x + z * z);
        glVertex3f(radius * cos(theta), 0, radius * sin(theta));
    }
    glEnd();
}

void Neptune(float x, float z, float planet_size, float rotate_speed) {

    glPushMatrix();
    glColor3ub(0, 0, 215);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glTranslatef(x, 0, z);
    glRotatef(angle * rotate_speed, 0, 1, 0);
    glutSolidSphere(planet_size, 20, 20);
    glPopMatrix();

    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++) {
        glColor3d(1, 1, 1);
        theta = i * PI / 180;
        float radius = sqrt(x * x + z * z);
        glVertex3f(radius * cos(theta), 0, radius * sin(theta));
    }
    glEnd();
}
void mydisplay() {

    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    sun();
    Mercury(4, 4, 0.5, 2.5);       
    Venus(6, 6, 1.3, 2);  
    Earth(8, 8, 1.5, 1);        
    Mars(10, 10, 1, 1.5);   
    Jupiter(12, 12, 2.5, 0.5);    
    Saturn(14, 14, 2, 0.4); 
    Uranus(16, 16, 1.8, 0.3); 
    Neptune(18, 18, 1.9, 0.1);    

    glFlush();
}

void rotate() {
    angle += 0.1;
    glutPostRedisplay();
}

void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-40.0, 40.0, -40.0, 40.0, -40.0, 40.0);
    gluLookAt(0, -1, 1, 0, 0, 0, 0, 1, 0);
    glMatrixMode(GL_MODELVIEW);
}

void main(int argc, char** argv) {
    glutInitWindowSize(800, 600);
    glutCreateWindow("1092929");
    glutDisplayFunc(mydisplay);
    glutIdleFunc(rotate);
    init();
    glutMainLoop();
}