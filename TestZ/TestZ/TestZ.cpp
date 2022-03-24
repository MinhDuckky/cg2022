#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <time.h>
#include <fstream>
#include <iostream>
#pragma warning(disable:4996)

void drawCloset()
{
	glPushMatrix();
	glDisable(GL_LIGHTING);
	// Closet handle
	glPushMatrix();
	glColor3f(1, 0.9, 1);
	glTranslated(0.3, 0, 0.5);
	glScaled(0.15, 0.65, 0.15);
	glScaled(.5, .5, .5);
	glutSolidSphere(1, 15, 15);
	glPopMatrix();
	// Closet handle

	// Closet corner line decoration thing
	glPushMatrix();
	glColor3f(0.5, 1, 0.8);
	glTranslated(0, 0.7, 0.5);
	glScaled(1, 0.1, 0.05);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.5 , 1 , 0.8);
	glTranslated(0, 0.9, 0.5);
	glScaled(1, 0.1, 0.05);
	glutSolidCube(1);
	glPopMatrix();

	// Closet corner line decoration thing
	glEnable(GL_LIGHTING);

	glScaled(1, 3, 1);
	glColor3f(0.6 , 0.4 , 0);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
}

void drawCoatHanger()
{
	glPushMatrix();
	glutSolidCone(1, 3, 15, 15);
	glTranslated(0, 0, 3);
	glDisable(GL_LIGHTING);
	glutSolidSphere(1, 15, 15);
	glPopMatrix();
	glEnable(GL_LIGHTING);
}

void drawBed()
{
	glPushMatrix();
	glScaled(2, 2.5, 1.5);
	glDisable(GL_LIGHTING);
	// BACKSIDE
	glPushMatrix();
	glColor3f(0.7 , 0.3 , 0.2 );
	glScaled(1, 1, 0.1);
	glutSolidCube(1);
	glPopMatrix();
	

	// BODY
	glPushMatrix();
	glTranslated(0, -0.25, 2);
	glPushMatrix();
	glColor3f(.1 , 1 , 0.3 ); // Mattress green(ish) color
	glScaled(1, 0.5, 4);
	glutSolidCube(1);
	glPopMatrix();
	// END PART THING ?
	glPushMatrix();
	glColor3f(0.7, 0.3, 0.2);
	glTranslated(0, 0.1, 2.1);
	glScaled(1, 0.7, 0.3);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();

	glPopMatrix();
	glEnable(GL_LIGHTING);
	
}

void drawCounter()
{
	glDisable(GL_LIGHTING);
	glPushMatrix();

	// LAMP/DECORATION THING
	glPushMatrix();
	glTranslated(0, 0.55, 0);
	glScaled(0.2, 0.2, 0.2);
	// STAND BASE
	glPushMatrix();
	glColor3f(0, 0, 0);
	glScaled(0.3, 4, 0.3);
	glutSolidCube(1);
	glPopMatrix();
	// STAND BASE
	glPushMatrix();
	glColor3f(1, 1, 0.1);
	glTranslated(0, 2.75, 0);
	glutSolidIcosahedron();
	glPopMatrix();
	glPopMatrix();
	// LAMP/DECORATION THING

	// TOP PART
	glPushMatrix();
	glColor3f(0.6, 1, 0.7);
	glTranslated(0, 0.5, 0);
	glScaled(1.2, 0.1, 1.2);
	glutSolidCube(1);
	glPopMatrix();
	// TOP PART
	glEnable(GL_LIGHTING);

	// BODY
	glPushMatrix();
	glColor3f(0.8, 0.4, 0);
	glutSolidCube(1);
	glPopMatrix();
	// BODY

	// LEGS
	glPushMatrix();
	glColor3f(0.8, 0.4, 0);
	glTranslated(0.3, -0.5, -0.3);
	glScaled(0.2, 1.2, 0.2);
	glPushMatrix();
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 0, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 0, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPopMatrix();
	// LEGs

	glPopMatrix();
}

void bedroom()
{
	glPushMatrix();
	glTranslated(5.6, 0.5, 0.5);
	glPushMatrix();
	glRotated(-90, 0, 1, 0);
	glScaled(0.25, 0.25, 0.15);
	glTranslated(2, 0.6, 0.3);
	drawBed();
	glPopMatrix();
	// COUNTER
	glPushMatrix();
	glTranslated(-0.2, 0.1, 1.1);
	glScaled(0.2, 0.3, 0.2);
	drawCounter();
	glPopMatrix();
	// COUNTER
	glPopMatrix();
	// CLOSET
	glPushMatrix();
	glTranslated(5.6, 1, 0.1);
	glScaled(0.5, 0.7, 0.2);
	drawCloset();
	glPopMatrix();
	// CLOSET
	// HANGERS
	glPushMatrix();
	glColor3f(0.81,0.71, 0.23);
	glTranslated(4.8, 1.8, 0.1);
	glScaled(0.02, 0.02, 0.02);
	drawCoatHanger();
	glPushMatrix();
	glTranslated(-3, 0, 0);
	drawCoatHanger();
	glPushMatrix();
	glTranslated(-3, 0, 0);
	drawCoatHanger();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	// HANGERS
	//glDisable(GL_LIGHTING);
	// TRASH BIN
	glPushMatrix();
	glTranslated(4.4, 0.45, -0.13);
	glColor3f(0, 0.2, 0);
	glTranslated(0.15, 0.2, 0.2);
	glRotated(90, 1, 0, 0);
	glScaled(0.04, 0.04, 0.04);
	gluCylinder(gluNewQuadric(), 1, 1, 10, 20, 20);
	glPopMatrix();
	// TRASH BIN
	//glEnable(GL_LIGHTING);
}

void drawOrange()
{
	// ORANGE THING
	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glScaled(0.7, 0.7, 0.7);
	// ROOT THING
	glPushMatrix();
	glColor3f(0, 1, 0);
	glScaled(0.4, 2.3, 0.4);
	glTranslated(0, 0.04, 0);
	glRotated(-90, 1, 0, 0);
	glutSolidCube(0.01);
	glPopMatrix();
	// ROOT THING
	glColor3f(1, 0.6, 0);
	glutSolidSphere(0.05, 15, 15);
	glPopMatrix();
	// ORANGE THING

	// ORANGE THING
	glPushMatrix();
	glTranslated(0.05, 0.5, -0.1);
	glScaled(0.7, 0.7, 0.7);
	// ROOT THING
	glPushMatrix();
	glColor3f(0, 1, 0);
	glScaled(0.4, 1.7, 0.4);
	glTranslated(0, 0.04, 0);
	glRotated(-90, 1, 0, 0);
	glutSolidCube(0.01);
	glPopMatrix();
	// ROOT THING
	glColor3f(1, 0.6, 0);
	glutSolidSphere(0.05, 15, 15);
	glPopMatrix();
	// ORANGE THING

	// ORANGE THING
	glPushMatrix();
	glTranslated(0.05, 0.5, 0.05);
	glScaled(0.7, 0.7, 0.7);
	// ROOT THING
	glPushMatrix();
	glColor3f(0, 1, 0);
	glScaled(0.4, 1.3, 0.4);
	glTranslated(0, 0.04, 0);
	glRotated(-90, 1, 0, 0);
	glutSolidCube(0.01);
	glPopMatrix();
	// ROOT THING
	glColor3f(1, 0.6, 0);
	glutSolidSphere(0.05, 15, 15);
	glPopMatrix();
	// ORANGE THING
}

void drawTableLeg(double thick, double len)
{
	glPushMatrix();
	glTranslated(0, len / 2, 0);
	glScaled(thick, len, thick);
	glutSolidCube(1.0);
	glPopMatrix();
}

void drawTable(double topWid, double topThick, double legThick, double legLen)
{
	glDisable(GL_LIGHTING);
	glPushMatrix();
	glTranslated(0, legLen, 0);
	glColor3f(0.3, 0.5, 0.5);
	glScaled(topWid, topThick, topWid);
	glutSolidCube(1.0);
	glPopMatrix();
	glEnable(GL_LIGHTING);

	double dist = 0.95 * topWid / 2.0 - legThick / 2.0;
	glPushMatrix();
	glTranslated(dist, 0, dist);
	drawTableLeg(legThick, legLen);
	glTranslated(0, 0, -2 * dist);
	drawTableLeg(legThick, legLen);
	glTranslated(-2 * dist, 0, 2 * dist);
	drawTableLeg(legThick, legLen);
	glTranslated(0, 0, -2 * dist);
	drawTableLeg(legThick, legLen);
	glPopMatrix();
}

void drawCup() {
	glDisable(GL_LIGHTING);
	glPushMatrix();
	glScaled(0.02, 0.1, 0.02);
	glTranslated(4, -6, 4);

	// TOP PART
	glPushMatrix();
	glColor3f(0.22, 0.69, 0.87);
	glScaled(1, 0.5, 1);
	glTranslated(0, 24, 0);
	glRotated(90, -1, 0, 0);
	gluCylinder(gluNewQuadric(), 1, 2, 5, 20, 20);
	glPopMatrix();
	// TOP PART

	glPopMatrix();
	glEnable(GL_LIGHTING);
}

void drinkingtable()
{
	glPushMatrix();
	glTranslated(3.6, 0, 0.6);
	
	drawTable(0.3, 0.02, 0.02, 0.6);
	//glDisable(GL_LIGHTING);
	glPushMatrix();
	glTranslated(-0.05, 0.7, 0);
	glScaled(0.8, 1, 0.8);
	glRotated(-30, 0, 1, 0);
	glutSolidTeapot(0.08);
	glPopMatrix();
	drawCup();
	glPopMatrix();
}

void drawLamp()
{
	glPushMatrix();
	glScaled(0.05, 0.09, 0.05);
	glTranslated(10, 0, -8);

	// BODY THING
	glPushMatrix();
	glColor3f(0.6, 0.3, 0.1);
	glScaled(0.35, 20, 0.35);
	glutSolidCube(1);
	glPopMatrix();
	// BODY THING

	// BASE
	glPushMatrix();
	glColor3f(0, 0.3, 0.5);
	glTranslated(0, -10, 0);
	glRotated(90, 1, 0, 0);
	glutSolidTorus(0.9, 1, 20, 20);
	glPopMatrix();
	// BASE

	// TOP PART
	glPushMatrix();
	glColor3f(0, 0.8, 0.5);
	glScaled(1, 0.5, 1);
	glTranslated(0, 24, 0);
	glRotated(90, 1, 0, 0);
	gluCylinder(gluNewQuadric(), 1, 2, 5, 20, 20);
	glPopMatrix();
	// TOP PART

	glPopMatrix();
}

int nightmode = 1;

void drawMoon()
{
	glDisable(GL_LIGHTING);
	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslated(4, 4, 3);
	glPushMatrix();
	glTranslated(-30, 120, -100);
	glScaled(1, 1, 1);
	glutSolidSphere(7, 25, 25);
	glPopMatrix();
	glPopMatrix();
	glEnable(GL_LIGHTING);
}


#define MAX_PARTICLES 25000
#define RAIN	0
#define SNOW	1


float slowdown = 2.0;
float velocity = 0.0;
float zoom = -100.0;
float pan = 0.0;
float tilt = 0.0;

int loop;
int fall = 2;

typedef struct {
	// Life
	bool alive;	// is the particle alive?
	float life;	// particle lifespan
	float fade; // decay
	// Position/direction
	float xpos;
	float ypos;
	float zpos;
	// Velocity/Direction, only goes down in y dir
	float vel;
	// Gravity
	float gravity;
}particles;

// Paticle System
particles par_sys[MAX_PARTICLES];


// Initialize/Reset Particles - give them their attributes
void initParticles(int i) {
	par_sys[i].alive = true;
	par_sys[i].life = 12.0;
	par_sys[i].fade = float(rand() % 100) / 1000.0f + 0.003f;

	par_sys[i].xpos = (float)(rand() % 130);
	par_sys[i].ypos = 100;
	par_sys[i].zpos = (float)(rand() % 130);

	par_sys[i].vel = velocity;
	par_sys[i].gravity = -0.8;//-0.8;
}

void init() {
	glClearDepth(1.0);

	// Initialize particles
	for (loop = 0; loop < MAX_PARTICLES; loop++) {
		initParticles(loop);
	}
}

// For Rain
void drawRain() {
	float x, y, z;
	for (loop = 0; loop < MAX_PARTICLES; loop = loop + 2) {
		if (par_sys[loop].alive == true) {
			x = par_sys[loop].xpos - 65.0;
			y = par_sys[loop].ypos;
			z = par_sys[loop].zpos - 55.0;

			// Draw particles
			glDisable(GL_LIGHTING);
			glColor3f(0.22, 0.69, 0.87);
			glLineWidth(2);
			glBegin(GL_LINES);
			glVertex3f(x, y, z);
			glVertex3f(x, y + 2, z);
			glEnd();
			glEnable(GL_LIGHTING);

			// Update values
			//Move
			// Adjust slowdown for speed!
			par_sys[loop].ypos += par_sys[loop].vel / (slowdown * 1000);
			par_sys[loop].vel += par_sys[loop].gravity;
			// Decay
			par_sys[loop].life -= par_sys[loop].fade;

			if (par_sys[loop].ypos <= -10) {
				par_sys[loop].life = -1.0;
			}
			//Revive
			if (par_sys[loop].life < 0.0) {
				initParticles(loop);
			}
		}
	}
}

// For Snow
void drawSnow() {
	float x, y, z;
	for (loop = 0; loop < MAX_PARTICLES/2; loop = loop + 2) {
		if (par_sys[loop].alive == true) {
			x = par_sys[loop].xpos - 65.0;
			y = par_sys[loop].ypos;
			z = par_sys[loop].zpos + zoom;

			// Draw particles
			glDisable(GL_LIGHTING);
			glColor3f(1.0, 1.0, 1.0);
			glPushMatrix();
			glTranslatef(x, y, z);
			glutSolidSphere(0.2, 16, 16);
			glPopMatrix();
			glEnable(GL_LIGHTING);

			// Update values
			//Move
			par_sys[loop].ypos += par_sys[loop].vel / (slowdown * 1000);
			par_sys[loop].vel += par_sys[loop].gravity;
			// Decay
			par_sys[loop].life -= par_sys[loop].fade;

			if (par_sys[loop].ypos <= -10) {
				par_sys[loop].life = -1.0;
			}

			//Revive
			if (par_sys[loop].life < 0.0) {
				initParticles(loop);
			}
		}
	}
}

void idle() {
	glutPostRedisplay();
}

double w = 1024, h = 720;
double view[3] = { 2,2,13.0 };
double look[3] = { 2,2,2 };
int flag = -1;
void steps(void);
void window(void);
void sgate(void);
void gate(void);
double angle = 0, speed = 5, maino = 0, romo = 0, tro = 0, mgo = 0, sgo = 0;
//declarating quadric objects
GLUquadricObj* Cylinder;
GLUquadricObj* Disk;
struct tm* newtime;
time_t ltime;
GLfloat angle1;
//initialisation
void myinit(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0, 1.0, -1 * w / h, 1 * w / h, 1, 200.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	//defining new quadric object
	Cylinder = gluNewQuadric();
	//to set drawing style
	gluQuadricDrawStyle(Cylinder, GLU_FILL);
	//to set automatic normals
	gluQuadricNormals(Cylinder, GLU_SMOOTH);
	Disk = gluNewQuadric();
	gluQuadricDrawStyle(Disk, GLU_FILL);
	gluQuadricNormals(Disk, GLU_SMOOTH);GLfloat gam[] = { 0.2,.2,.2,1 };
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, gam);
}
//set material property
void matprop(GLfloat amb[], GLfloat dif[], GLfloat spec[], GLfloat shi[])
{
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, amb);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, dif);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, spec);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, shi);
}
//to create wall
void wall(double thickness)
{
	glPushMatrix();
	glTranslated(2, .5 * thickness, 2);
	glScaled(4.0, thickness, 4.0);
	glutSolidCube(1.0);
	glPopMatrix();
}
//to create compound wall
void wall2(double thickness)
{
	glPushMatrix();
	glTranslated(.8, .5 * thickness * 4, 3.5);
	glScaled(1.6, thickness * 4, 7.0);
	glutSolidCube(1.0);
	glPopMatrix();
}
//to create earth
void earth(void)
{
	GLfloat ambient[] = { 1,0,0,1 };
	GLfloat specular[] = { 0,1,1,1 };
	GLfloat diffuse[] = { .5,.5,.5,1 };GLfloat shininess[] = { 250 };
	matprop(ambient, diffuse, specular, shininess);
	GLfloat lightIntensity[] = { .7,.7,.7,1 };
	GLfloat light_position[] = { 2,5,-3,0 };
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightIntensity);
	glPushMatrix();
	glTranslated(0, -.25, 0);
	glScaled(10000, .5, 1000000);
	glutSolidCube(1.0);
	glPopMatrix();
	glFlush();
}
void compound(void)
{
	GLfloat ambient[] = { 1,0,0,1 };
	GLfloat specular[] = { 0,1,1,1 };
	GLfloat diffuse[] = { .7,1,.7,1 };
	GLfloat shininess[] = { 50 };
	matprop(ambient, diffuse, specular, shininess);
	GLfloat lightIntensity[] = { .7,.7,.7,1 };
	GLfloat light_position[] = { 2,6,1.5,0 };
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightIntensity);
	//left wall of compound
	glPushMatrix();
	glPushMatrix();
	glTranslated(-4, 0, -1 - .04);
	glRotated(90.0, 0, 0, 1);
	wall2(0.08);
	glPopMatrix();//right wall of compound
	glPushMatrix();
	glTranslated(8, 0, -1 - .02);
	glRotated(90.0, 0, 0, 1);
	wall2(0.08);
	glPopMatrix();
	//back wall of compound
	glPushMatrix();
	glTranslated(2, .8, -1);
	glRotated(-90, 1, 0, 0);
	glScaled(12, .02 * 4, 1.6);
	glutSolidCube(1.0);
	glPopMatrix();
	//front left wall of compound
	glPushMatrix();
	glTranslated(-3, .8, 6 - .08);
	glRotated(-90, 1, 0, 0);
	glScaled(2, .02 * 4, 1.6);
	glutSolidCube(1.0);
	glPopMatrix();
	//front middle wall of compound
	glPushMatrix();
	glTranslated(2.5, .8, 6 - .08);
	glRotated(-90, 1, 0, 0);
	glScaled(6, .02 * 4, 1.6);
	glutSolidCube(1.0);
	glPopMatrix();
	//front right wall of compound
	glPushMatrix();
	glTranslated(7, .8, 6 - .08);
	glRotated(-90, 1, 0, 0);
	glScaled(2, .02 * 4, 1.6);
	glutSolidCube(1.0);
	glPopMatrix();
	glPopMatrix();
	GLfloat ambient2[] = { 0,1,0,1 };GLfloat specular2[] = { 1,1,1,1 };
	GLfloat diffuse2[] = { .2,.6,0.1,1 };
	GLfloat shininess2[] = { 50 };
	matprop(ambient2, diffuse2, specular2, shininess2);
	//floor
	glPushMatrix();
	glTranslated(-4, -0.05, -1);
	glScaled(3, 3, 1.7);
	wall(0.08);
	glPopMatrix();
	gate();
	sgate();
	glFlush();
}
void room()
{
	GLfloat ambient1[] = { 1,0,1,1 };
	GLfloat specular1[] = { 1,1,1,1 };
	GLfloat diffuse1[] = { 0.5,0.5,0.5,1 };
	GLfloat mat_shininess[] = { 50 };
	matprop(ambient1, diffuse1, specular1, mat_shininess);
	glPushMatrix();
	glTranslated(.5, 4, .5);
	//roof
	glPushMatrix();
	glTranslated(-.02 * 4, .7 * 3.9, -.02 * 4);
	glScaled(.6 + .02, 1.5, .5 + .02 + .1);wall(0.08);
	glPopMatrix();
	GLfloat ambient2[] = { 1,0,0,1 };
	GLfloat specular2[] = { 1,1,1,1 };
	GLfloat diffuse2[] = { 1,1,.7,1 };
	GLfloat shininess1[] = { 50 };
	matprop(ambient2, diffuse2, specular2, shininess1);
	//left wall
	glPushMatrix();
	glTranslated(0, 0, -.02);
	glScaled(1, .7, .5);
	glRotated(90.0, 0, 0, 1);
	wall(0.08);
	glPopMatrix();
	//right wall
	glPushMatrix();
	glTranslated(2.4, 0, -.02);
	glScaled(1, .7, .5);
	glRotated(90.0, 0, 0, 1);
	wall(0.08);
	glPopMatrix();
	//back wall
	glPushMatrix();
	glTranslated(-.08, 0, 0);
	glScaled(.62, .7, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.08);
	glPopMatrix();
	//front wall
	glPushMatrix();
	glTranslated(-0.08, 0, 2);
	glScaled(.5, .7, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.08);glPopMatrix();
	//wall above the room door
	glPushMatrix();
	glTranslated(1.9, .7 * 3, 2);
	glScaled(.11, .7 * .25, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.08);
	glPopMatrix();
	GLfloat ambient[] = { 1,0.5,.5,1 };
	GLfloat specular[] = { 1,1,1,1 };
	GLfloat diffuse[] = { 1,0.5,0.5,1 };
	matprop(ambient, diffuse, specular, mat_shininess);
	//door
	glPushMatrix();
	glTranslated(2.3, 0, (2 - .05));
	glRotated(-tro, 0, 1, 0);
	glTranslated(-2.3, 0, -(2 - .05));
	glPushMatrix();
	glTranslated(1.927, 0, 2);
	glScaled(.09, .525, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.02);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2.3, 0, 2 - .05);
	glScaled(.6, .7, .8);
	glRotated(-90, 1, 0, 0);
	gluCylinder(Cylinder, 0.05, 0.05, 3, 16, 16);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
}
void tankwall(float thk)
{
	glTranslated(.5, .5 * thk, .5);
	glScaled(1, thk, 1);glutSolidCube(1);
}
void watertank(void)
{
	float thk = .04, hght = 1, wdth = 1, bdth = 1;
	GLfloat ambient1[] = { .5,0,1,1 };
	GLfloat specular1[] = { 1,1,1,1 };
	GLfloat diffuse1[] = { .5,.8,1,1 };
	GLfloat mat_shininess[] = { 50 };
	matprop(ambient1, diffuse1, specular1, mat_shininess);
	glPushMatrix();
	glTranslated(1.5, 4 + 4 * .7, 1.5);
	glScaled(.8, .8, .8);
	//tank floor
	glPushMatrix();
	glScaled(wdth, 1, bdth);
	tankwall(thk);
	glPopMatrix();
	//tank left wall
	glPushMatrix();
	glScaled(1, hght, bdth);
	glRotated(90.0, 0, 0, 1);
	tankwall(thk);
	glPopMatrix();
	//tank right wall
	glPushMatrix();
	glTranslated(wdth, 0, 0);
	glScaled(1, hght, bdth);
	glRotated(90.0, 0, 0, 1);
	tankwall(thk);
	glPopMatrix();
	//tank back wall
	glPushMatrix();
	glScaled(wdth, hght, 1);
	glRotated(-90.0, 1, 0, 0);
	tankwall(0.04);glPopMatrix();
	//tank front wall
	glPushMatrix();
	glTranslated(0, 0, bdth);
	glScaled(wdth, hght, 1);
	glRotated(-90.0, 1, 0, 0);
	tankwall(0.04);
	glPopMatrix();
	//tank roof
	glPushMatrix();
	glTranslated(-thk, hght, 0);
	glScaled(wdth * .8, 1, bdth);
	tankwall(0.04);
	glPopMatrix();
	glPushMatrix();
	glTranslated(wdth * .8 - thk, hght, 0);
	glScaled(wdth * .2 + thk, 1, bdth * .6);
	tankwall(0.04);
	glPopMatrix();
	glPopMatrix();
}
void terece(void)
{
	GLfloat ambient1[] = { 1,0,1,1 };
	GLfloat specular1[] = { 1,1,1,1 };
	GLfloat diffuse1[] = { 0.5,0.5,0.5,1 };
	GLfloat mat_shininess[] = { 50 };
	matprop(ambient1, diffuse1, specular1, mat_shininess);
	glPushMatrix();
	glTranslated(0, 4, 0);
	glScaled(1, .1, 1);
	//left wall
	glPushMatrix();
	glTranslated(0, 0, -.02 - .25);glScaled(1, 1, .95);
	glRotated(90.0, 0, 0, 1);
	wall(0.08);
	glPopMatrix();
	//right wall
	glPushMatrix();
	glTranslated(6 + .12, 0, -.02 - .27);
	glScaled(1, 1, 1.1);
	glRotated(90.0, 0, 0, 1);
	wall(0.08);
	glPopMatrix();
	//back wall
	glPushMatrix();
	glTranslated(-.08, 0, -.21);
	glScaled(1.5 + .05, 1, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.08);
	glPopMatrix();
	//front wall
	glPushMatrix();
	glTranslated(-.08, 0, 4 + .11);
	glScaled(1.5 + .05, 1, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.08);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-.04, 2, 4);
	glScaled(.08, 4, .1);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
}
void fanwing(float winglen)
{
	glPushMatrix();glRotated(90, 1, 0, 0);
	glRotated(90, 0, 1, 0);
	glScaled(1, 15, 1);
	gluCylinder(Cylinder, .01, .01, 1, 4, 1);
	glPopMatrix();
}
void fanbottom()
{
	glPushMatrix();
	glTranslated(1, 3.2, 1);
	glPushMatrix();
	glRotated(90, 1, 0, 0);
	gluCylinder(Cylinder, .2, .2, .05, 128, 16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 0.00025, 0);
	glRotated(90, 1, 0, 0);
	gluDisk(Disk, 0, .2, 32, 16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, -.05, 0);
	glRotated(90, 1, 0, 0);
	gluCylinder(Cylinder, .2, .15, .1, 128, 16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, -.1, 0);
	glRotated(90, 1, 0, 0);
	gluDisk(Disk, 0, .15, 32, 16);
	glPopMatrix();
	glPushMatrix();
	glTranslated(0.1, 0.0, 0);
	fanwing(.6);
	glPopMatrix();
	glPushMatrix();glRotated(120, 0, 1, 0);
	glTranslated(.1, 0, 0);
	fanwing(.6);
	glPopMatrix();
	glPushMatrix();
	glRotated(240, 0, 1, 0);
	glTranslated(0.1, 0.0, 0);
	fanwing(.6);
	glPopMatrix();
	glPopMatrix();
}
void fan(void)
{
	glPushMatrix();
	glTranslated(2.2, 1.9, 0);
	glScaled(.5, .5, .5);
	GLfloat mat_ambient[] = { .5,0,0,1 };
	GLfloat mat_specular[] = { 0,1,1,0 };
	GLfloat mat_diffuse[] = { .8,1,.8,1 };
	GLfloat mat_shininess[] = { 50 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	if (flag == -1)
	{
		glPushMatrix();
		fanbottom();
		glPopMatrix();
	}
	else
	{
		angle += speed;
		glPushMatrix();
		glTranslated(1, 0, 1);glRotated(angle, 0, 1, 0);
		glTranslated(-1, 0, -1);
		fanbottom();
		glPopMatrix();
	}
	glPushMatrix();
	glTranslatef(1, 3.3, 1);
	glRotated(-90, 1, 0, 0);
	gluCylinder(Cylinder, .1, 0.005, .25, 16, 16);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1, 4, 1);
	glRotated(90, 1, 0, 0);
	gluCylinder(Cylinder, .006, 0.006, .6, 16, 16);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1, 3.96, 1);
	glRotated(90, 1, 0, 0);
	gluCylinder(Cylinder, .1, 0.005, .25, 16, 16);
	glPopMatrix();
	glPopMatrix();
	if (flag == 1)
		glutPostRedisplay();
}
void tableg(float llen, float lthk)
{
	glPushMatrix();
	glRotated(-90, 1, 0, 0);
	gluCylinder(Cylinder, lthk, lthk, llen, 32, 32);
	glPopMatrix();
}
void table(float tabwid, float tablen, float tabthk, float llen, float lthk)
{
	glPushMatrix();
	GLfloat ambient1[] = { 1,0,0,1 };
	GLfloat specular1[] = { 0,0,0,1 };
	GLfloat diffuse1[] = { 0.5,0.5,0.5,1 };
	GLfloat mat_shininess[] = { 50 };
	matprop(ambient1, diffuse1, specular1, mat_shininess);
	glPushMatrix();
	glTranslated(0, llen, 0);
	glScaled(tabwid, tabthk, tablen);glutSolidCube(1);
	glPopMatrix();
	float dist1 = .95 * tablen / 2 - lthk / 2;
	float dist2 = .95 * tabwid / 2 - lthk / 2;
	// front right leg
	glPushMatrix();
	glTranslated(dist2, 0, dist1);
	tableg(llen, lthk);
	glPopMatrix();
	//back right leg
	glPushMatrix();
	glTranslated(dist2, 0, -dist1);
	tableg(llen, lthk);
	glPopMatrix();
	//back left leg
	glPushMatrix();
	glTranslated(-dist2, 0, -dist1);
	tableg(llen, lthk);
	glPopMatrix();
	//front left leg
	glPushMatrix();
	glTranslated(-dist2, 0, dist1);
	tableg(llen, lthk);
	glPopMatrix();
	glPopMatrix();
}
void cleg(float cllen, float clwid)
{
	glRotated(90, 1, 0, 0);
	gluCylinder(Cylinder, clwid, clwid, cllen, 32, 32);
}
void chair(float cblen, float cbwid, float cbthk, float cllen, float clwid)
{
	GLfloat ambient1[] = { .5,1,.5,1 };
	GLfloat specular1[] = { 1,1,1,1 };
	GLfloat diffuse1[] = { 0.5,0.5,0.5,1 };
	GLfloat mat_shininess[] = { 50 };
	matprop(ambient1, diffuse1, specular1, mat_shininess);
	glPushMatrix();
	glTranslated(0, cllen, 0);
	//chair base
	glPushMatrix();
	glScaled(cblen, cbthk, cbwid);
	glutSolidCube(1);
	glPopMatrix();
	float dist = cblen / 2 - clwid / 2;
	//chair legs
	glPushMatrix();
	glTranslated(dist, 0, dist);
	cleg(cllen, clwid);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-dist, 0, dist);
	cleg(cllen, clwid);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-dist, 0, -dist);
	cleg(cllen, clwid);
	glPopMatrix();
	glPushMatrix();
	glTranslated(dist, 0, -dist);
	cleg(cllen, clwid);
	glPopMatrix();
	//base pipes
	glPushMatrix();
	glTranslated(-.085, -clwid / 2, cbwid / 3);
	glRotated(90, 0, 1, 0);
	gluCylinder(Cylinder, -clwid, clwid, cblen, 32, 32);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-.085, clwid / 2, -cbwid / 3);
	glRotated(90, 0, 1, 0);
	gluCylinder(Cylinder, clwid, clwid, cblen, 32, 32);
	glPopMatrix();
	//back support pipes
	glPushMatrix();
	glTranslated(-.085, -clwid / 2, cbwid / 3);
	glRotated(-90, 1, 0, 0);
	gluCylinder(Cylinder, clwid, clwid, cllen, 32, 32);
	glPopMatrix();
	glPushMatrix();glTranslated(-.085, -clwid / 2, -cbwid / 3);
	glRotated(-90, 1, 0, 0);
	gluCylinder(Cylinder, clwid, clwid, cllen, 32, 32);
	glPopMatrix();
	//back support
	glPushMatrix();
	glTranslated(-cblen / 2, cllen / 2 + cblen / 2, 0);
	glRotated(90, 0, 0, 1);
	glScaled(cblen, .01, cbwid);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
}
void diningtable()
{
	glPushMatrix();
	glTranslated(2.7, 0, 1);
	glScaled(1.5, 1.5, 1.5);
	table(.3, .5, .025, .4, .005);
	//front left chair
	glPushMatrix();
	glTranslated(-.1, 0, .1);
	chair(.15, .15, .02, .3, .005);
	glPopMatrix();
	//back left chair
	glPushMatrix();
	glTranslated(-.1, 0, -.1);
	chair(.15, .15, .02, .3, .005);
	glPopMatrix();
	//front right chair
	glPushMatrix();
	glTranslated(.1, 0, .1);
	glRotated(180, 0, 1, 0);
	chair(.15, .15, .02, .3, .005);
	glPopMatrix();
	//back right chair
	glPushMatrix();
	glTranslated(.1, 0, -.1);glRotated(180, 0, 1, 0);
	chair(.15, .15, .02, .3, .005);
	glPopMatrix();
	//back chair
	glPushMatrix();
	glTranslated(0, 0, -.27);
	glRotated(-90, 0, 1, 0);
	chair(.15, .15, .02, .3, .005);
	glPopMatrix();
	//front chair
	glPushMatrix();
	glTranslated(0, 0, .27);
	glRotated(90, 0, 1, 0);
	chair(.15, .15, .02, .3, .005);
	glPopMatrix();

	glDisable(GL_LIGHTING);
	drawLamp();
	drawOrange();
	glPopMatrix();
	glEnable(GL_LIGHTING);
}
void steps(void)
{
	int i;
	GLfloat ambient1[] = { 1,0,1,1 };
	GLfloat specular1[] = { 1,1,1,1 };
	GLfloat diffuse1[] = { 0.5,0.5,0.5,1 };
	GLfloat mat_shininess[] = { 50 };
	matprop(ambient1, diffuse1, specular1, mat_shininess);
	glPushMatrix();
	glTranslated(-.25, .1, .2);
	for (i = 0;i < 19;i++)
	{
		glPushMatrix();
		glTranslated(0, i * .2, i * .2);
		glScaled(.4, .2, .3);
		glutSolidCube(1);
		glPopMatrix();
	}
	glPopMatrix();glPushMatrix();
	glRotated(-45, 1, 0, 0);
	glTranslated(-.45, .3, 2.7);
	glScaled(.04, 1, 5.4);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-.45, 4, 3.6);
	glScaled(.04, .8, .75);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-.25, 4, 3.96);
	glScaled(.4, .8, .04);
	glutSolidCube(1);
	glPopMatrix();
}
void sleg(float len, float thk)
{
	glScaled(thk, len, thk);
	glutSolidCube(1);
}
void solar(void)
{
	GLfloat ambient1[] = { .1,.1,.1,1 };
	GLfloat specular1[] = { 1,1,1,1 };
	GLfloat diffuse1[] = { 1,1,1,1 };
	GLfloat mat_shininess[] = { 50 };
	matprop(ambient1, diffuse1, specular1, mat_shininess);
	GLfloat lightIntensity[] = { .7,.7,.7,1 };
	GLfloat light_position[] = { -20,4,60,0 };
	glLightfv(GL_LIGHT2, GL_POSITION, light_position);
	glLightfv(GL_LIGHT2, GL_DIFFUSE, lightIntensity);
	glEnable(GL_LIGHT2);//base
	glPushMatrix();
	glTranslated(4, 4, 3);
	glPushMatrix();
	glTranslated(0.4, .4, 0);
	glScaled(1, .8, 1);
	glutSolidCube(1);
	glPopMatrix();
	GLfloat ambient2[] = { .7,.7,.7,1 };
	GLfloat specular2[] = { 1,1,1,1 };
	GLfloat diffuse2[] = { 1,1,1,1 };
	matprop(ambient2, diffuse2, specular2, mat_shininess);
	glPushMatrix();
	glTranslated(0, .8, 0);
	glPushMatrix();
	glTranslated(.6, .6, 0);
	gluCylinder(Cylinder, .1, .1, .4, 32, 32);
	glPopMatrix();
	GLfloat ambient3[] = { 1,0,.2,1 };
	GLfloat specular3[] = { 1,1,1,1 };
	GLfloat diffuse3[] = { 1,0,.5,1 };
	GLfloat mat_shininess3[] = { 50 };
	matprop(ambient3, diffuse3, specular3, mat_shininess3);
	glPushMatrix();
	glTranslated(.6, .6, 0);
	gluDisk(Disk, 0, .1, 32, 32);
	glPopMatrix();
	glPushMatrix();
	glTranslated(.6, .6, 0.4);
	gluDisk(Disk, 0, .1, 32, 32);
	glPopMatrix();
	GLfloat ambient4[] = { 0,0,0,1 };
	GLfloat specular4[] = { 1,1,1,1 };
	GLfloat diffuse4[] = { 0,0,0,1 };
	GLfloat mat_shininess4[] = { 50 };matprop(ambient4, diffuse4, specular4, mat_shininess4);
	glPushMatrix();
	glTranslated(.5, .3, .05);
	sleg(.6, .01);
	glPopMatrix();
	glPushMatrix();
	glTranslated(.7, .3, .05);
	sleg(.6, .01);
	glPopMatrix();
	glPushMatrix();
	glTranslated(.5, .3, .35);
	sleg(.6, .01);
	glPopMatrix();
	glPushMatrix();
	glTranslated(.7, .3, .35);
	sleg(.6, .01);
	glPopMatrix();
	glPushMatrix();
	glRotated(45, 0, 0, 1);
	glTranslated(.3, .015, .2);
	glScaled(.6, .03, .4);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(.4, .21, 0);
	sleg(.425, .01);
	glPopMatrix();
	glPushMatrix();
	glTranslated(.4, .21, .4);
	sleg(.425, .01);
	glPopMatrix();
	glPushMatrix();glTranslated(.4, .4, 0);
	glRotated(30, 0, 0, 1);
	glRotated(90, 0, 1, 0);
	gluCylinder(Cylinder, .01, .01, .2, 32, 32);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
}
void myclock()
{
	GLfloat mat_ambient[] = { .4,.8,.4,1 };
	GLfloat mat_specular[] = { 1,1,1,1 };
	GLfloat mat_diffuse[] = { 0.4,.8,.4,1 };
	GLfloat mat_shininess[] = { 50 };
	matprop(mat_ambient, mat_diffuse, mat_specular, mat_shininess);
	int hour_ticks, sec_ticks;
	glPushMatrix();
	glTranslated(2.25, 2.5, -.02);
	glScaled(.03, .06, .03);
	glPushMatrix(); // Draw clock face
	glTranslatef(0, 0, 1.0);
	gluDisk(Disk, 0, 7, 32, 16);
	glPopMatrix();
	GLfloat mat_ambien[] = { 1,0,0,1 };
	matprop(mat_ambien, mat_diffuse, mat_specular, mat_shininess);
	glPushMatrix();
	glTranslatef(0, 0, 1.95);
	gluDisk(Disk, 0, .8, 32, 16);glPopMatrix();
	GLfloat ambient[] = { 0,0,0,1 };
	GLfloat specular[] = { 1,1,1,1 };
	GLfloat diffuse[] = { 0,0,0,1 };
	matprop(ambient, diffuse, specular, mat_shininess);
	// Draw hour hand
	glPushMatrix();
	glColor3f(1.0, 0.5, 0.5);
	glTranslatef(0, 0, 1.5);
	glRotatef(-(360 / 12) * (newtime->tm_hour + newtime->tm_min / 60.0), 0.0,
		0.0, 1.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(Cylinder, 0.45, 0, 4, 16, 16);
	glPopMatrix();
	GLfloat ambient1[] = { 0,0,1,1 };
	GLfloat specular1[] = { 1,1,1,1 };
	GLfloat diffuse1[] = { 0,0,1,1 };
	matprop(ambient1, diffuse1, specular1, mat_shininess);
	// Draw minute hand
	glPushMatrix();
	glColor3f(1.0, 0.5, 1.0);
	glTranslatef(0, 0, 1.25);
	glRotatef(-(360 / 60) * newtime->tm_min, 0.0, 0.0, 1.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(Cylinder, 0.4, 0, 6, 16, 16);
	glPopMatrix();
	GLfloat ambient2[] = { 1,0,0,1 };
	GLfloat specular2[] = { 1,1,1,1 };
	GLfloat diffuse2[] = { 1,0,0,1 };
	matprop(ambient2, diffuse2, specular2, mat_shininess);
	// Draw second hand
	glPushMatrix();
	glTranslatef(0, 0, 1);
	glRotatef(-(360 / 60) * newtime->tm_sec, 0.0, 0.0, 1.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(Cylinder, 0.3, 0, 6, 16, 16);glPopMatrix();
	GLfloat ambient3[] = { 1,1,1,1 };
	GLfloat specular3[] = { 1,1,1,1 };
	GLfloat diffuse3[] = { 1,0,1,1 };
	matprop(ambient3, diffuse3, specular3, mat_shininess);
	for (hour_ticks = 0; hour_ticks < 12; hour_ticks++)
	{
		glPushMatrix();// Draw next arm axis.
		glTranslatef(0.0, 0.0, 1);
		glRotatef((360 / 12) * hour_ticks, 0.0, 0.0, 1.0);
		glTranslatef(6.0, 0.0, 0.0);
		glutSolidCube(.8);
		glPopMatrix();
	}
	for (sec_ticks = 0; sec_ticks < 60; sec_ticks++)
	{
		glPushMatrix();
		glTranslatef(0.0, 0.0, 1.1);
		glRotatef((360 / 60) * sec_ticks, 0.0, 0.0, 1.0);
		glTranslatef(6.0, 0.0, 0.0);
		glutSolidCube(0.25);
		glPopMatrix();
	}
	glPopMatrix();
}
void window(void)
{
	int i;
	GLfloat lightIntensity[] = { .7,.7,.7,1 };
	GLfloat light_position[] = { -20,4,-60,0 };
	glLightfv(GL_LIGHT1, GL_POSITION, light_position);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, lightIntensity);glEnable(GL_LIGHT1);
	glPushMatrix();
	glTranslated(3.185, 1, 3.95);
	//left edge of window
	glPushMatrix();
	glTranslated(.02, 1, .02);
	glScaled(.04, 2.2, .04);
	glutSolidCube(1);
	glPopMatrix();
	//right edge
	glPushMatrix();
	glTranslated(1.6 + .02, 1, 0.02);
	glScaled(.04, 2.2, .04);
	glutSolidCube(1);
	glPopMatrix();
	//top edge
	glPushMatrix();
	glTranslated(.9, 2 + .02, 0.02);
	glScaled(1.8, .04, .04);
	glutSolidCube(1);
	glPopMatrix();
	//bottom edge
	glPushMatrix();
	glTranslated(.8, .02, 0.02);
	glScaled(1.8, .04, .04);
	glutSolidCube(1);
	glPopMatrix();
	for (i = 1;i <= 3;i++)
	{
		glPushMatrix();
		glTranslated(.4 * i, 0, 0);
		glRotated(-90, 1, 0, 0);
		gluCylinder(Cylinder, .01, .01, 2, 32, 32);
		glPopMatrix();
	}for (i = 1;i <= 3;i++)
	{
		glPushMatrix();
		glTranslated(.1 + .4 * i, 0, 0);
		glRotated(-90, 1, 0, 0);
		gluCylinder(Cylinder, .01, .01, 2, 32, 32);
		glPopMatrix();
	}
	for (i = 1;i <= 4;i++)
	{
		glPushMatrix();
		glTranslated(0, .4 * i, 0);
		glRotated(90, 0, 1, 0);
		gluCylinder(Cylinder, .03, .03, 1.6, 32, 32);
		glPopMatrix();
	}
	glPopMatrix();
}
void gate(void)
{
	int i;
	GLfloat ambient1[] = { 1,.5,1,1 };
	GLfloat specular1[] = { 1,1,1,1 };
	GLfloat diffuse1[] = { .5,.5,.5,1 };
	GLfloat mat_shininess[] = { 120 };
	matprop(ambient1, diffuse1, specular1, mat_shininess);
	glPushMatrix();
	//if flag mgo=1 the open the main gate
	if (mgo == 1)
		glTranslated(1.5, 0, 0);
	glTranslated(-1.3, 0, 6);
	//top frame of the main gate
	glPushMatrix();
	glTranslated(0, 1.5, 0);
	glScaled(1.7, .04, .04);
	glutSolidCube(1);
	glPopMatrix();
	//bottom frame of main gate
	glPushMatrix();
	glTranslated(0, .05, 0);
	glScaled(1.7, .04, .04);
	glutSolidCube(1);
	glPopMatrix();
	//left frame of the main gate
	glPushMatrix();
	glTranslated(-.8, .75, 0);
	glScaled(.04, 1.5, .04);
	glutSolidCube(1);
	glPopMatrix();
	//right frame of the main gate
	glPushMatrix();
	glTranslated(.8, .75, 0);
	glScaled(.04, 1.5, .04);
	glutSolidCube(1);
	glPopMatrix();
	//horizantal pipes of the main gate
	for (i = 1;i <= 3;i++)
	{
		glPushMatrix();
		glTranslated(-.85, .4 * i, 0);
		glRotated(90, 0, 1, 0);
		gluCylinder(Cylinder, .02, .02, 1.7, 32, 32);
		glPopMatrix();
	}
	//vertical strips of the main gate
	for (i = 1;i <= 5;i++)
	{
		glPushMatrix();
		glTranslated(-.9 + .3 * i, .75, 0);
		glScaled(.2, 1.5, .02);
		glutSolidCube(1);
		glPopMatrix();
	}
	glPopMatrix();
}
void sgate(void)
{
	int i;
	GLfloat ambient1[] = { 1,.5,1,1 };
	GLfloat specular1[] = { 1,1,1,1 };
	GLfloat diffuse1[] = { .5,.5,.5,1 };
	GLfloat mat_shininess[] = { 120 };
	matprop(ambient1, diffuse1, specular1, mat_shininess);
	glPushMatrix();
	//to open the sub gate
	glTranslated(5.75 - .25, .05, 6);
	glRotated(sgo, 0, 1, 0);
	glTranslated(-5.75 + .25, -.05, -6);
	//to translate sub gate to required position
	glTranslated(5.75, .05, 6);
	//top edge of the sub gate
	glPushMatrix();
	glTranslated(0, 1.5, 0);
	glScaled(.5, .08, .08);
	glutSolidCube(1);
	glPopMatrix();
	//bottom edge of the sub gate
	glPushMatrix();
	glTranslated(0, .05, 0);
	glScaled(.5, .08, .08);
	glutSolidCube(1);
	glPopMatrix();
	//left edge of the sub gate
	glPushMatrix();
	glTranslated(-.25, .85, 0);
	glScaled(.04, 1.7, .04);
	glutSolidCube(1);
	glPopMatrix();
	//right edge of the sub gateglPushMatrix();
	glPushMatrix();
	glTranslated(.25, .8, 0);
	glScaled(.04, 1.6, .04);
	glutSolidCube(1);
	glPopMatrix();
	//vertical pipes of the sub gate
	for (i = 1;i <= 4;i++)
	{
		glPushMatrix();
		glTranslated(-.25 + .1 * i, 0, 0);
		glRotated(-90, 1, 0, 0);
		gluCylinder(Cylinder, .01, .01, 1.5, 32, 32);
		glPopMatrix();
	}
	//horizantal pipes of the sub gate
	for (i = 1;i <= 4;i++)
	{
		glPushMatrix();
		glTranslated(-.25, .05 + .3 * i, 0);
		glRotated(90, 0, 1, 0);
		gluCylinder(Cylinder, .02, .02, .5, 32, 32);
		glPopMatrix();
	}
	glPopMatrix();
}
void house(void)
{
	GLfloat mat_ambient[] = { 1,0,0,1 };
	GLfloat mat_specular[] = { 1,1,1,1 };
	GLfloat mat_diffuse[] = { 1,1,.7,1 };
	GLfloat mat_shininess[] = { 50 };
	matprop(mat_ambient, mat_diffuse, mat_specular, mat_shininess);
	GLfloat lightIntensity4[] = { .7,.7,.7,.7 };
	GLfloat light_position4[] = { 3,1,.5,1 };
	glLightfv(GL_LIGHT6, GL_POSITION, light_position4);
	glLightfv(GL_LIGHT6, GL_DIFFUSE, lightIntensity4);
	glEnable(GL_LIGHT6);glPushMatrix();
	glTranslated(0, .15, 0);
	//roof
	glPushMatrix();
	glTranslated(-.02 * 4, 3.9, -.01 * 4 - .25);
	glScaled(1.5 + .05, 1.5, 1.1);
	wall(0.08);
	glPopMatrix();
	GLfloat ambient2[] = { 1,0,0,1 };
	GLfloat specular2[] = { 1,1,1,1 };
	GLfloat diffuse2[] = { .7,1,0.8,1 };
	GLfloat shininess[] = { 50 };
	matprop(ambient2, diffuse2, specular2, shininess);
	//floor
	glPushMatrix();
	glTranslated(-.02 * 3, -0.05, -.01 * 4);
	glScaled(1.5 + .01, 1.5, 1);
	wall(0.08);
	glPopMatrix();
	GLfloat ambient1[] = { 1,0,0,1 };
	GLfloat specular1[] = { 1,1,1,1 };
	GLfloat diffuse1[] = { 1,1,.7,1 };
	GLfloat shininess1[] = { 50 };
	matprop(ambient1, diffuse1, specular1, shininess1);
	//left wall
	glPushMatrix();
	glRotated(90.0, 0, 0, 1);
	wall(0.08);
	glPopMatrix();
	//right wall
	glPushMatrix();
	glTranslated(6, 0, 0);glRotated(90.0, 0, 0, 1);
	wall(0.08);
	glPopMatrix();
	//back wall
	glPushMatrix();
	glTranslated(-.08, 0, 0);
	glScaled(1.5 + .02, 1, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.08);
	glPopMatrix();
	//room vertical wall
	glPushMatrix();
	glTranslated(4, 0, 0);
	glScaled(1, 1, .5);
	glRotated(90.0, 0, 0, 1);
	wall(0.08);
	glPopMatrix();
	//room horizantal wall
	glPushMatrix();
	glTranslated(4.4, 0, 2);
	glScaled(.4, 1, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.08);
	glPopMatrix();
	//wall above the room door
	glPushMatrix();
	glTranslated(4, 3, 2);
	glScaled(.11, .25, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.08);
	glPopMatrix();
	//left room horizantal wall
	glPushMatrix();
	glTranslated(0, 0, 2);
	glScaled(.4, 1, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.08);
	glPopMatrix();//lroom vertical wall
	glPushMatrix();
	glTranslated(1.6, 0, 0);
	glScaled(1, 1, .35);
	glRotated(90.0, 0, 0, 1);
	wall(0.08);
	glPopMatrix();
	//entrance room right wall
	glPushMatrix();
	glTranslated(1.6, 0, 2.59);
	glScaled(1, 1, .35);
	glRotated(90.0, 0, 0, 1);
	wall(0.08);
	glPopMatrix();
	//wall above main door
	glPushMatrix();
	glTranslated(-0.02, 3, 4);
	glScaled(.13, .27, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.08);
	glPopMatrix();
	//wall right to the main door
	glPushMatrix();
	glTranslated(.48, 0, 4);
	glScaled(.68, 1, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.08);
	glPopMatrix();
	//wall right to the window
	glPushMatrix();
	glTranslated(4.8, 0, 4);
	glScaled(.3, 1, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.08);
	glPopMatrix();
	//wall below the window
	glPushMatrix();
	glTranslated(3.2, 0, 4);
	glScaled(.4, .25, 1);
	glRotated(-90.0, 1, 0, 0);wall(0.08);
	glPopMatrix();
	//wall above the window
	glPushMatrix();
	glTranslated(3.2, 3.03, 4);
	glScaled(.4, .25, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.08);
	glPopMatrix();
	room();
	watertank();
	terece();
	steps();
	window();
	fan();
	diningtable();
	drinkingtable();
	bedroom();
	myclock();
	solar();
	GLfloat ambient[] = { 1,0.5,.5,1 };
	GLfloat specular[] = { 1,1,1,1 };
	GLfloat diffuse[] = { 1,.5,.5,1 };
	matprop(ambient, diffuse, specular, mat_shininess);
	//main door
	glPushMatrix();
	glTranslated(0, 0, 4);
	glRotated(maino, 0, 1, 0);
	glTranslated(0, 0, -4);
	glPushMatrix();
	glTranslated(0, 0, 4);
	glScaled(.12, .75, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.04);
	glPopMatrix();glPushMatrix();
	glTranslated(0, 0, 4);
	glScaled(.5, 1, .2);
	glRotated(-90, 1, 0, 0);
	gluCylinder(Cylinder, 0.05, 0.05, 3, 16, 16);
	glPopMatrix();
	glPopMatrix();
	//bolow room door
	glPushMatrix();
	glTranslated(4, 0, (2 - .025));
	glRotated(romo, 0, 1, 0);
	glTranslated(-4, 0, -(2 - .025));
	glPushMatrix();
	glTranslated(4, 0, 2);
	glScaled(.099, .75, 1);
	glRotated(-90.0, 1, 0, 0);
	wall(0.01);
	glPopMatrix();
	glPushMatrix();
	glTranslated(4.01, 0, 2 - .025);
	glScaled(.5, 1, .6);
	glRotated(-90, 1, 0, 0);
	gluCylinder(Cylinder, 0.05, 0.05, 3, 16, 16);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glFlush();
}
void display(void)
{
	time(&ltime); // Get time
	newtime = localtime(&ltime); // Convert to local time
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	gluLookAt(view[0], view[1], view[2], look[0], look[1], look[2], 0.0, 1.0, 0.0);earth();
	compound();
	house();
	glRotatef(pan, 0.0, 1.0, 0.0);
	glRotatef(tilt, 1.0, 0.0, 0.0);

	// Which Particles
	if (fall == RAIN) {
		drawRain();
	}
	else if (fall == SNOW) {
		drawSnow();
	}

	if (fall == RAIN) {
		glClearColor(0.6, 0.6, 0.6, 0);
	}
	else if (fall == SNOW) {
		glClearColor(0.4, 0.4, 0.4, 0);
	}
	else {
		glClearColor(0.22, 0.69, 0.87, 0);
	}
	if (nightmode == 1) {
		glClearColor(0, 0, 0, 0);
		drawMoon();
	}
	
	glFlush();
	glutSwapBuffers();
	if (nightmode == -1) {
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
	}
	glutPostRedisplay();
}
void Keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
		//to move the look position along -ve x axis
	case 'a':
	case 'A':
		look[0] -= .1;
		break;
		//to move the look position along +ve x axis
	case 'd':
	case 'D':
		look[0] += .1;
		break;
		//to move the look position along +ve y axis
	case 'w':
	case 'W':
		look[1] += .1;
		break;
		//to move the look position along -ve y axis
	case 's':
	case 'S':
		look[1] -= .1;
		break;
		//to move the camera along -ve z axis
	case 'e':
	case 'E':
		view[2] -= .1;
		glutPostRedisplay();
		break;
		//to move the camera along +ve z axis
	case 'r':
	case 'R':
		view[2] += .1;
		glutPostRedisplay();
		break;
		//to run and stop the fan
	case 'f':
	case 'F':
		flag *= -1;
		glutPostRedisplay();
		break;
		//to toggle nightmode
	case 'n':
	case 'N':
		nightmode *= -1;
		glutPostRedisplay();
		break;
		//to open and close the main door
	case 'u':
	case 'U':
		if (maino == 0)
			maino = 85;
		else
			maino = 0;
		break;
		//to open and close the below room door
	case 'O':
	case 'o':
		if (romo == 0)
			romo = 75;
		else
			romo = 0;
		break;
		//to open and close the above room door
	case 'p':
	case 'P':
		if (tro == 0)
			tro = 70;
		else
			tro = 0;
		break;
		//to open and close the main gate
	case 'g':
	case 'G':
		if (mgo == 0)
			mgo = 1;
		else
			mgo = 0;
		break;
		//to open and close the sub gate
	case 'h':
	case 'H':if (sgo == 0)
		sgo = 50;
			else
		sgo = 0;
		break;
		//inside view
	case 'i':
	case 'I':
		view[0] = 2.8;
		view[1] = 2;
		view[2] = 4.8;
		look[0] = 2.8;
		look[1] = 2;
		look[2] = 1;
		break;
		//top view
	case 'b':
	case 'B':
		view[0] = 3.3;
		view[1] = 2;
		view[2] = 1;
		look[0] = 3.8;
		look[1] = 2;
		look[2] = 1;
		break;
		//bedroom view
	case 'T':
	case 't':
		view[0] = 6;
		view[1] = 12;
		view[2] = 10;
		look[0] = 2;
		look[1] = 4;
		look[2] = 2;
		break;
		//front view
	case 'j':
	case 'J':
		view[0] = 2;
		view[1] = 2;
		view[2] = 13.0;
		look[0] = 2;
		look[1] = 2;
		look[2] = 2;
		break;
		//back view
	case 'k':
	case 'K':
		view[0] = 1;
		view[1] = 6;view[2] = -7;
		look[0] = 2;
		look[1] = 4;
		look[2] = 2;
		break;

	case 'y':
	case 'Y':
		if (fall == 2) {
			fall = RAIN;
		}
		else if (fall == RAIN) {
			fall = SNOW;
		}
		else {
			fall = 2;
		}
		glutPostRedisplay();
		break;
	}
}
void mySpecialKeyFunc(int key, int x, int y)
{
	switch (key) {
	case GLUT_KEY_UP: //to move the camera along +ve y axis
		view[1] += .1;
		glutPostRedisplay();
		break;

	case GLUT_KEY_DOWN: //to move the camera along -ve y axis
		if (view[1] > 1.9)
			view[1] -= .1;
		glutPostRedisplay();
		break;

	case GLUT_KEY_RIGHT: //to move the camera along +ve x axis
		view[0] += .1;
		glutPostRedisplay();
		break;

	case GLUT_KEY_LEFT: //to move the camera along -ve x axis
		view[0] -= .1;
		glutPostRedisplay();
		break;
	}
}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);//to initialize the glut library
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(w, h);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("3D House");
	myinit();
	glutDisplayFunc(display);
	glutKeyboardFunc(Keyboard);
	glutSpecialFunc(mySpecialKeyFunc);
	glutFullScreen();//to see o/p in full screen on monitor
	//glEnable(GL_LIGHTING);
	//glEnable(GL_LIGHT0);
	
	glShadeModel(GL_SMOOTH);//smooth shaded
	glEnable(GL_DEPTH_TEST);//to remove hidden surface
	glEnable(GL_NORMALIZE);//to make normal vector to unit vector
	init();
	glViewport(0, 0, w, h);
	glutIdleFunc(idle);
	glutMainLoop();
}