#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<cmath>


GLfloat angle = 0.0f;

void update(int value) {

    angle += 30.0f;

	glutPostRedisplay();

	glutTimerFunc(1, update, 0);
}

void tree()
{
    //Tree
glColor3ub (0, 102, 0);
glPointSize(2.0);
glBegin(GL_TRIANGLES);
glVertex2f(-0.9f, -0.7f);
glVertex2f(-0.85f, -0.7f);
glVertex2f(-0.85f, -0.35f);
glEnd();
glColor3ub (0, 153, 0);
glBegin(GL_TRIANGLES);
glVertex2f(-0.8f, -0.7f);
glVertex2f(-0.85f, -0.7f);
glVertex2f(-0.85f, -0.35f);
glEnd();
glColor3ub (102, 53, 0);
glBegin(GL_QUADS);
glVertex2f(-0.87f, -0.7f);
glVertex2f(-0.87f, -0.8f);
glVertex2f(-0.83f, -0.8f);
glVertex2f(-0.83f, -0.7f);
glEnd();

//Tree

glColor3ub (0, 102, 0);
glPointSize(2.0);
glBegin(GL_TRIANGLES);
glVertex2f(-0.0f, -0.3f);
glVertex2f(-0.0f, -0.7f);
glVertex2f(-0.08f, -0.7f);
glEnd();
glColor3ub (0, 153, 0);
glBegin(GL_TRIANGLES);
glVertex2f(-0.0f, -0.3f);
glVertex2f(-0.0f, -0.7f);
glVertex2f(0.08f, -0.7f);
glEnd();
glColor3ub (102, 53, 0);
glBegin(GL_QUADS);
glVertex2f(-0.02f, -0.7f);
glVertex2f(-0.02f, -0.8f);
glVertex2f(0.02f, -0.8f);
glVertex2f(0.02f, -0.7f);
glEnd();

//Tree

glColor3ub (0, 102, 0);
glPointSize(2.0);
glBegin(GL_TRIANGLES);
glVertex2f(0.2f, -0.32f);
glVertex2f(0.2f, -0.65f);
glVertex2f(0.13f, -0.65f);
glEnd();
glColor3ub (0, 153, 0);
glBegin(GL_TRIANGLES);
glVertex2f(0.2f, -0.32f);
glVertex2f(0.2f, -0.65f);
glVertex2f(0.27f, -0.65f);
glEnd();
glColor3ub (102, 53, 0);
glBegin(GL_QUADS);
glVertex2f(0.18f, -0.65f);
glVertex2f(0.18f, -0.77f);
glVertex2f(0.22f, -0.77f);
glVertex2f(0.22f, -0.65f);
glEnd();

//Tree

glColor3ub (0, 102, 0);
glPointSize(2.0);
glBegin(GL_TRIANGLES);
glVertex2f(-0.19f, -0.1f);
glVertex2f(-0.19f, -0.4f);
glVertex2f(-0.22f, -0.4f);
glEnd();
glColor3ub (0, 153, 0);
glBegin(GL_TRIANGLES);
glVertex2f(-0.19f, -0.1f);
glVertex2f(-0.19f, -0.4f);
glVertex2f(-0.16f, -0.4f);
glEnd();
glColor3ub (102, 53, 0);
glBegin(GL_QUADS);
glVertex2f(-0.20f, -0.4f);
glVertex2f(-0.20f, -0.45f);
glVertex2f(-0.18f, -0.45f);
glVertex2f(-0.18f, -0.4f);
glEnd();

//Tree

glColor3ub (0, 102, 0);
glPointSize(2.0);
glBegin(GL_TRIANGLES);
glVertex2f(-0.39f, 0.1f);
glVertex2f(-0.39f, -0.1f);
glVertex2f(-0.41f, -0.1f);
glEnd();
glColor3ub (0, 153, 0);
glBegin(GL_TRIANGLES);
glVertex2f(-0.39f, 0.1f);
glVertex2f(-0.39f, -0.1f);
glVertex2f(-0.37f, -0.1f);
glEnd();
glColor3ub (102, 53, 0);
glBegin(GL_QUADS);
glVertex2f(-0.398f, -0.1f);
glVertex2f(-0.398f, -0.13f);
glVertex2f(-0.388f, -0.13f);
glVertex2f(-0.388f, -0.1f);
glEnd();

//Tree

glColor3ub (0, 102, 0);
glPointSize(2.0);
glBegin(GL_TRIANGLES);
glVertex2f(0.4f, 0.1f);
glVertex2f(0.4f, -0.2f);
glVertex2f(0.37f, -0.2f);
glEnd();
glColor3ub (0, 153, 0);
glBegin(GL_TRIANGLES);
glVertex2f(0.4f, 0.1f);
glVertex2f(0.4f, -0.2f);
glVertex2f(0.43f, -0.2f);
glEnd();
glColor3ub (102, 53, 0);
glBegin(GL_QUADS);
glVertex2f(0.39f, -0.2f);
glVertex2f(0.39f, -0.25f);
glVertex2f(0.41f, -0.25f);
glVertex2f(0.41f, -0.2f);
glEnd();
}
void river ()
{
    glColor3ub(62,103,185);
   glBegin(GL_POLYGON);
   glVertex2f(-1.0f, -0.1f);
    glVertex2f(-0.8f, -0.1f);
    glVertex2f(-0.68f, -0.13f);
   glVertex2f(-0.3f, -0.13f);
   glVertex2f(-0.4f, -0.32f);
   glVertex2f(-0.19f, -0.49f);
   glVertex2f(-0.25f, -0.67f);
   glVertex2f(-0.04f, -0.79f);
   glVertex2f(0.016f, -0.86f);
   glVertex2f(0.019f, -0.90f);
   glVertex2f(0.021f, -0.905f);
    glVertex2f(0.02f, -0.91f);
    glVertex2f(0.025f, -0.915f);
    glVertex2f(0.023f, -0.920f);
    glVertex2f(0.025f, -0.925f);
    glVertex2f(0.027f, -1.0f);
   glVertex2f(-1.0, -1.0f);


   glEnd();

}
void hills()
{
    //Hills 1

glColor3ub (0, 102, 0);
glBegin(GL_POLYGON);
glVertex2f(-0.55f, 0.36f);
glVertex2f(-0.8f, -0.1f);
glVertex2f(-0.68f, -0.13f);
glEnd();
glColor3ub (3, 182, 10);
glBegin(GL_TRIANGLES);
glVertex2f(-0.55f, 0.36f);
glVertex2f(-0.68f, -0.13f);
glVertex2f(-0.3f, -0.13f);
glEnd();
//Hills 2

glColor3ub (0, 102, 0);
glBegin(GL_POLYGON);
glVertex2f(-0.15f, 0.3f);
glVertex2f(-0.4f, -0.32f);
glVertex2f(-0.24f, -0.38f);
glEnd();
glColor3ub (3, 182, 10);
glBegin(GL_TRIANGLES);
glVertex2f(-0.15f, 0.3f);
glVertex2f(-0.24f, -0.38f);
glVertex2f(0.1f, -0.38f);
glEnd();

//HILLS 3
glColor3ub (0, 102, 0);
glBegin(GL_POLYGON);
glVertex2f(-0.85f, 0.12f);
glVertex2f(-1.0f, -0.25f);
glVertex2f(-1.0f, -0.55f);
glEnd();
glColor3ub (3, 182, 10);
glBegin(GL_TRIANGLES);
glVertex2f(-0.85f, 0.12f);
glVertex2f(-1.0f, -0.55f);
glVertex2f(-0.69f, -0.55f);
glEnd();

//Hills 4

glColor3ub (0, 102, 0);
glBegin(GL_POLYGON);
glVertex2f(0.25f, 0.28f);
glVertex2f(-0.045f, -0.0f);
glVertex2f(0.0f, -0.3f);
glVertex2f(0.1f, -0.07f);
glVertex2f(0.2f, -0.05f);
glEnd();

glColor3ub (3, 182, 10);
glBegin(GL_TRIANGLES);
glVertex2f(-0.15f, 0.3f);
glVertex2f(-0.24f, -0.38f);
glVertex2f(0.1f, -0.38f);
glEnd();
glColor3ub (3, 182, 10);
glBegin(GL_TRIANGLES);
glVertex2f(0.25f, 0.28f);
glVertex2f(0.2f, -0.05f);
glVertex2f(0.38f, -0.05f);
glEnd();

//Hills 5

glColor3ub (0, 102, 0);
glBegin(GL_POLYGON);
glVertex2f(0.11f, 0.03f);
glVertex2f(-0.12f, -0.4f);
glVertex2f(-0.0f, -0.45f);
glEnd();
glColor3ub (3, 182, 10);
glBegin(GL_TRIANGLES);
glVertex2f(0.11f, 0.03f);
glVertex2f(0.0f, -0.45f);
glVertex2f(0.28f, -0.45f);
glEnd();

//Hills 6

glColor3ub (0, 102, 0);
glBegin(GL_POLYGON);
glVertex2f(0.31f, -0.13f);
glVertex2f(-0.0f, -0.55f);
glVertex2f(0.18f, -0.57f);
glEnd();
glColor3ub (3, 182, 10);
glBegin(GL_TRIANGLES);
glVertex2f(0.31f, -0.13f);
glVertex2f(0.18f, -0.57f);
glVertex2f(0.4f, -0.57f);
glEnd();

//Hills 7

glColor3ub (0, 102, 0);
glBegin(GL_POLYGON);
glVertex2f(0.55f, 0.4f);
glVertex2f(0.3f, 0.0f);
glVertex2f(0.45f, -0.04f);
glEnd();
glColor3ub (3, 182, 10);
glBegin(GL_TRIANGLES);
glVertex2f(0.55f, 0.4f);
glVertex2f(0.45f, -0.04f);
glVertex2f(0.7f, -0.04f);
glEnd();
glColor3ub (3, 182, 10);
glBegin(GL_TRIANGLES);
glVertex2f(0.25f, 0.28f);
glVertex2f(0.2f, -0.05f);
glVertex2f(0.38f, -0.05f);
glEnd();

//Hills 8

glColor3ub (0, 102, 0);
glBegin(GL_POLYGON);
glVertex2f(0.75f, 0.47f);
glVertex2f(0.55f, -0.04f);
glVertex2f(0.65f, -0.08f);
glEnd();
glColor3ub (3, 182, 10);
glBegin(GL_TRIANGLES);
glVertex2f(0.75f, 0.47f);
glVertex2f(0.65f, -0.08f);
glVertex2f(0.9f, -0.08f);
glEnd();

//Hills 8

glColor3ub (0, 102, 0);
glBegin(GL_POLYGON);
glVertex2f(0.978f, 0.3f);
glVertex2f(0.8f, -0.08f);
glVertex2f(0.87f, -0.12f);
glEnd();
glColor3ub (3, 182, 10);
glBegin(GL_POLYGON);
glVertex2f(0.978f, 0.3f);
glVertex2f(0.87f, -0.12f);
glVertex2f(1.0f, -0.16);
glVertex2f(1.0f, 0.2f);

glEnd();

}

void windMills()
{
    float x1,y1,x2,y2;
    float x3,y3,x4,y4;
    float a;
    double radius=0.027;

      x1=0.53, y1= -0.30;
      x3=0.81, y3= 0.0;
//Wind mills 1

glColor3ub (255, 255 , 255);
glBegin(GL_POLYGON);
glVertex2f(0.52f, -0.3f);
glVertex2f(0.51f, -1.0f);
glVertex2f(0.55f, -1.0f);
glVertex2f(0.54f, -0.3f);
glEnd();

//propeller for mill 1

        glBegin(GL_TRIANGLE_FAN);
        glColor3f(255,255,255);
        for (a=1.0f;a<360.0f;a+=0.2)
        {
            x2 = x1+sin(a)*radius;
            y2 = y1+cos(a)*radius;
            glVertex2f(x2,y2);
        }
       glEnd();


glPushMatrix();
    glRotatef(angle, 0.0, 0.0, 0.0);
 glBegin(GL_POLYGON);
glVertex2f(0.52f, -0.29f);
glVertex2f(0.35f, -0.5f);
glVertex2f(0.37f, -0.51f);
glVertex2f(0.53f, -0.32f);
glEnd();

 glBegin(GL_POLYGON);
glVertex2f(0.54f, -0.31f);
glVertex2f(0.77f, -0.35f);
glVertex2f(0.75f, -0.32f);
glVertex2f(0.56f, -0.29f);
glVertex2f(0.54f, -0.30f);
glEnd();

 glBegin(GL_POLYGON);
glVertex2f(0.52f, -0.29f);
glVertex2f(0.45f, 0.0f);
glVertex2f(0.47f, 0.02f);
glVertex2f(0.54f, -0.30f);
glEnd();
glPopMatrix();
//Wind mills 2

glColor3ub (255, 255 , 255);
glBegin(GL_POLYGON);
glVertex2f(0.8f, 0.0f);
glVertex2f(0.78f, -0.75f);
glVertex2f(0.84f, -0.75f);
glVertex2f(0.82f, 0.0f);
glEnd();

//propeller for mill 2
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(255,255,255);
        for (a=1.0f;a<360.0f;a+=0.2)
        {
            x4 = x3+sin(a)*radius;
            y4 = y3+cos(a)*radius;
            glVertex2f(x4,y4);
        }

       glEnd();
       glPushMatrix();
        glRotatef(angle, 0.0, 0.0, 0.0);
 glBegin(GL_POLYGON);
glVertex2f(0.805f, 0.0f);
glVertex2f(0.91f, -0.29f);
glVertex2f(0.94f, -0.31f);
glVertex2f(0.825f, 0.01f);
glEnd();

 glBegin(GL_POLYGON);
glVertex2f(0.795f, 0.0f);
glVertex2f(0.91f, 0.29f);
glVertex2f(0.94f, 0.31f);
glVertex2f(0.825f, 0.01f);
glEnd();

 glBegin(GL_POLYGON);
glVertex2f(0.79f, 0.015f);
glVertex2f(0.6f, 0.01f);
glVertex2f(0.585f, -0.02f);
glVertex2f(0.79f, -0.015f);
glEnd();
glPopMatrix();
}

void sun()
{
    float x1,y1,x2,y2;
    float a;
    double radius=0.1;

      x1=-0.8, y1= 0.7;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,0);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x2 = x1+sin(a)*radius;
            y2 = y1+cos(a)*radius;
            glVertex2f(x2,y2);
        }

       glEnd();

}
void moon()
{
    float x1,y1,x2,y2;
    float a;
    double radius=0.08;

      x1=-0.55, y1= 0.8;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(255,255,255);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x2 = x1+sin(a)*radius;
            y2 = y1+cos(a)*radius;
            glVertex2f(x2,y2);
        }

       glEnd();

}

void clouds1()
{
    float x1,y1,x2,y2;
    float x3,y3,x4,y4;
    float x5,y5,x6,y6;
    float x7,y7,x8,y8;
    float x9,y9,x0,y0;
    float x11,y11,x12,y12;
    float x13,y13,x14,y14;
    float a;
    double radius=0.07;

      x1=-0.4, y1= 0.65;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x2 = x1+sin(a)*radius;
            y2 = y1+cos(a)*radius;
            glVertex2f(x2,y2);
        }

       glEnd();

       x3=-0.35, y3= 0.56;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x4 = x3+sin(a)*radius;
            y4 = y3+cos(a)*radius;
            glVertex2f(x4,y4);
        }

       glEnd();

       x5=-0.35, y5= 0.7;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x6 = x5+sin(a)*radius;
            y6 = y5+cos(a)*radius;
            glVertex2f(x6,y6);
        }

       glEnd();

       x7=-0.26, y7= 0.56;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x8 = x7+sin(a)*radius;
            y8 = y7+cos(a)*radius;
            glVertex2f(x8,y8);
        }

       glEnd();

       x9=-0.26, y9= 0.7;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x0 = x9+sin(a)*radius;
            y0 = y9+cos(a)*radius;
            glVertex2f(x0,y0);
        }

       glEnd();

       x11=-0.18, y11= 0.63;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x12 = x11+sin(a)*radius;
            y12 = y11+cos(a)*radius;
            glVertex2f(x12,y12);
        }

       glEnd();

       x13=-0.3, y13= 0.63;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x14 = x13+sin(a)*radius;
            y14 = y13+cos(a)*radius;
            glVertex2f(x14,y14);
        }

       glEnd();

}

void clouds2()
{
    float x1,y1,x2,y2;
    float x3,y3,x4,y4;
    float x5,y5,x6,y6;
    float x7,y7,x8,y8;
    float x9,y9,x0,y0;
    float x11,y11,x12,y12;
    float x13,y13,x14,y14;
    float a;
    double radius=0.07;

      x1=0.5, y1= 0.65;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x2 = x1+sin(a)*radius;
            y2 = y1+cos(a)*radius;
            glVertex2f(x2,y2);
        }

       glEnd();

       x3=0.45, y3= 0.56;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x4 = x3+sin(a)*radius;
            y4 = y3+cos(a)*radius;
            glVertex2f(x4,y4);
        }

       glEnd();

       x5=0.45, y5= 0.7;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x6 = x5+sin(a)*radius;
            y6 = y5+cos(a)*radius;
            glVertex2f(x6,y6);
        }

       glEnd();

       x7=0.36, y7= 0.56;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x8 = x7+sin(a)*radius;
            y8 = y7+cos(a)*radius;
            glVertex2f(x8,y8);
        }

       glEnd();

       x9=0.36, y9= 0.7;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x0 = x9+sin(a)*radius;
            y0 = y9+cos(a)*radius;
            glVertex2f(x0,y0);
        }

       glEnd();

       x11=0.28, y11= 0.63;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x12 = x11+sin(a)*radius;
            y12 = y11+cos(a)*radius;
            glVertex2f(x12,y12);
        }

       glEnd();

       x13=0.4, y13= 0.63;

      glBegin(GL_TRIANGLE_FAN);
        glColor3f(239,255,84);
        for (a=0.0f; a<360.0f; a+=0.2)
        {
            x14 = x13+sin(a)*radius;
            y14 = y13+cos(a)*radius;
            glVertex2f(x14,y14);
        }

       glEnd();

}
void sky()
{

    glBegin(GL_POLYGON); //Sky
	glColor3f(0.4, 0.5, 1.0);
	glVertex2f(-1,1);
	glVertex2f(1, 1);
	glColor3f(0.7, 0.7, 1.0);
	glVertex2f(1, -.1);
	glVertex2f(-1, -.1);
	glEnd();
}
void ship()
{
    //base
    glColor3ub(255,110,0);
    glBegin(GL_POLYGON);
   glVertex2f(-0.45f, -0.42f);
   glVertex2f(-0.65f, -0.42f);
   glVertex2f(-0.69f, -0.34f);
   glVertex2f(-0.41f, -0.34f);
   glEnd();

   //stick
   glColor3ub(160,82,35);
   glLineWidth(2);
   glBegin(GL_LINES);
   glVertex2f(-0.55,-0.36);
   glVertex2f(-0.55,-0.06);
   glEnd();


}
void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPointSize(2.0);
    sky();
    river();
    ship();
    hills();
    tree();
    windMills();
    sun();
    clouds1();
    clouds2();
    moon();


    glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 125.0, 255.0, 0.0);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
//gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}



int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1200, 680);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");

myInit ();

glutDisplayFunc(myDisplay);
 //glutTimerFunc(1000, update, 0);
glutMainLoop();
}
