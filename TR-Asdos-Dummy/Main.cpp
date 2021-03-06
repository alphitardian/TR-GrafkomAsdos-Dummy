#include <iostream>
#include <GL/freeglut.h>
using namespace std;

bool mouseDown = false; 

float xrot = 0.0f;
float yrot = 0.0f;

float xdiff = 0.0f;
float ydiff = 0.0f;

class myColor {
public:
	GLfloat glass[3] = { 0.45, 0.749, 0.83 };
	GLfloat line[4] = { 1.0, 1.0, 1.0, 0.3 };


	// Absolute Color
	GLfloat grey[3] = { 0.5, 0.5, 0.5 };
	GLfloat black[3] = { 0,0,0 };
	GLfloat white[3] = { 1,1,1 };
	GLfloat lightGrey[3] = { 0.8,0.8,0.8 };
	GLfloat orange[3] = { 1.0, 0.5, 0.0 };
	GLubyte softBlue[3] = { 181, 234, 255 };
};

void drawOther() {
	glBegin(GL_POLYGON);
	//depan
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 100.0, 0.0);
	glVertex3f(400.0, 100.0, 0.0);
	glVertex3f(400.0, 0.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	//belakang
	glVertex3f(0.0, 0.0, -200.0);
	glVertex3f(0.0, 100.0, -200.0);
	glVertex3f(400.0, 100.0, -400.0);
	glVertex3f(400.0, 0.0, -400.0);
	glEnd();

	glBegin(GL_POLYGON);
	//kiri
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 100.0, 0.0);
	glVertex3f(0.0, 100.0, -200.0);
	glVertex3f(0.0, 0.0, -200.0);
	glEnd();

	glBegin(GL_POLYGON);
	//kanan
	glVertex3f(400.0, 0.0, 0.0);
	glVertex3f(400.0, 100.0, 0.0);
	glVertex3f(400.0, 100.0, -400.0);
	glVertex3f(400.0, 0.0, -400.0);
	glEnd();

	glBegin(GL_POLYGON);
	//atas
	glVertex3f(0.0, 100.0, 0.0);
	glVertex3f(400.0, 100.0, 0.0);
	glVertex3f(400.0, 100.0, -400.0);
	glVertex3f(0.0, 100.0, -200.0);
	glEnd();

	glColor3f(1.0, 0.5, 0.2);
	glBegin(GL_POLYGON);
	//bawah
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(400.0, 0.0, 0.0);
	glVertex3f(400.0, 0.0, -400.0);
	glVertex3f(0.0, 0.0, -200.0);
	glEnd();
}

void drawBuildingBase() {
	//Depan
	glBegin(GL_POLYGON);
	glVertex3f(-400.0, 0.0, 300.0);
	glVertex3f(400.0, 0.0, 400.0);
	glVertex3f(400.0, 50.0, 400.0);
	glVertex3f(-400.0, 50.0, 300.0);
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(-600.0, 0.0, -500.0);
	glVertex3f(400.0, 0.0, -500.0);
	glVertex3f(400.0, 50.0, -500.0);
	glVertex3f(-600.0, 50.0, -500.0);
	glEnd();

	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(400.0, 0.0, -500.0);
	glVertex3f(400.0, 0.0, 400.0);
	glVertex3f(400.0, 50.0, 400.0);
	glVertex3f(400.0, 50.0, -500.0);
	glEnd();

	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(-400.0, 0.0, 300.0);
	glVertex3f(-600.0, 0.0, -500.0);
	glVertex3f(-600.0, 50.0, -500.0);
	glVertex3f(-400.0, 50.0, 300.0);
	glEnd();

	//atas
	glBegin(GL_POLYGON);
	glVertex3f(-400.0, 50.0, 300.0);
	glVertex3f(400.0, 50.0, 400.0);
	glVertex3f(400.0, 50.0, -500.0);
	glVertex3f(-600.0, 50.0, -500.0);
	glEnd();

	//bawah
	glBegin(GL_POLYGON);
	glVertex3f(-400.0, 0.0, 300.0);
	glVertex3f(400.0, 0.0, 400.0);
	glVertex3f(400.0, 0.0, -500.0);
	glVertex3f(-600.0, 0.0, -500.0);
	glEnd();
}

void drawBuildingA() {
	myColor color;

	glColor3fv(color.black);
	//bawah
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 55.0, 350.0); //E
	glVertex3f(375.0, 55.0, 100.0); //G
	glVertex3f(200.0, 55.0, 100.0); //H
	glVertex3f(200.0, 55.0, 325.0); //F
	glEnd();

	glColor3fv(color.lightGrey);
	//depan bawah
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 55.0, 330.0); //E
	glVertex3f(200.0, 55.0, 305.0); //F
	glVertex3f(200.0, 80.0, 305.0); //F-up
	glVertex3f(375.0, 80.0, 330.0); //E-up
	glEnd();

	glColor3fv(color.white);
	//depan-atas
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 80.0, 350.0); 
	glVertex3f(200.0, 80.0, 325.0);
	glVertex3f(200.0, 100.0, 325.0);
	glVertex3f(375.0, 100.0, 350.0);
	glEnd();

	glColor3f(1.0, 0.5, 0.7);
	//atapdepan
	glBegin(GL_TRIANGLES);
	glVertex3f(200.0, 100.0, 325.0); //kiri
	glVertex3f(375.0, 100.0, 350.0); //kanan
	glVertex3f(287.5, 120.0, 340.0); //atas
	glEnd();

	glColor3f(1, 1, 1);
	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 55.0, 330.0); //E
	glVertex3f(375.0, 55.0, 100.0); //G
	glVertex3f(375.0, 100.0, 100.0); //G-up
	glVertex3f(375.0, 100.0, 330.0); //E-up
	glEnd();

	glColor3f(1, 1, 1);
	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(200.0, 55.0, 100.0); //H
	glVertex3f(200.0, 55.0, 305.0); //F
	glVertex3f(200.0, 100.0, 305.0); //F-up
	glVertex3f(200.0, 100.0, 100.0); //H-up
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 55.0, 100.0); //G
	glVertex3f(200.0, 55.0, 100.0); //H
	glVertex3f(200.0, 100.0, 100.0); //H-up
	glVertex3f(375.0, 100.0, 100.0); //G-up
	glEnd();

	glColor3f(1.0, 0.5, 0.7);
	//atapbelakang
	glBegin(GL_TRIANGLES);
	glVertex3f(200.0, 100.0, 100.0); //kiri
	glVertex3f(375.0, 100.0, 100.0); //kanan
	glVertex3f(287.5, 120.0, 100.0); //atas
	glEnd();

	glColor3f(0.3, 0.0, 0.0);
	//atapkanan
	glBegin(GL_POLYGON);
	glVertex3f(287.5, 120.0, 340.0); //tengah-depan-atas
	glVertex3f(375.0, 100.0, 350.0); //kanan-depan-bawah
	glVertex3f(375.0, 100.0, 100.0); //kanan-blkg-bawah
	glVertex3f(287.5, 120.0, 100.0); // tengah-blkg atas
	glEnd();

	glColor3f(0.3, 0.0, 0.0);
	//atapkiri
	glBegin(GL_POLYGON);
	glVertex3f(287.5, 120.0, 340.0); //tengah-depan-atas
	glVertex3f(200.0, 100.0, 325.0); //kiri-depan-bawah
	glVertex3f(200.0, 100.0, 100.0); //kiri-blkg-bawah
	glVertex3f(287.5, 120.0, 100.0); // tengah-blkg atas
	glEnd();

	glColor3fv(color.orange);
	//pilar 1
	glBegin(GL_POLYGON);
	glVertex3f(370.0, 55.0, 346.5);
	glVertex3f(365.0, 55.0, 346.0);
	glVertex3f(365.0, 80.0, 346.0);
	glVertex3f(370.0, 80.0, 346.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(370.0, 55.0, 344.5);
	glVertex3f(365.0, 55.0, 344.0);
	glVertex3f(365.0, 80.0, 344.0);
	glVertex3f(370.0, 80.0, 344.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(365.0, 55.0, 344.0);
	glVertex3f(365.0, 55.0, 346.5);
	glVertex3f(365.0, 80.0, 346.5);
	glVertex3f(365.0, 80.0, 344.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(370.0, 55.0, 344.0);
	glVertex3f(370.0, 55.0, 346.5);
	glVertex3f(370.0, 80.0, 346.5);
	glVertex3f(370.0, 80.0, 344.0);
	glEnd();

	// pilar 2
	glBegin(GL_POLYGON);
	glVertex3f(340.0, 55.0, 343.0);
	glVertex3f(335.0, 55.0, 342.5);
	glVertex3f(335.0, 80.0, 342.5);
	glVertex3f(340.0, 80.0, 343.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(340.0, 55.0, 341.0);
	glVertex3f(335.0, 55.0, 340.5);
	glVertex3f(335.0, 80.0, 340.5);
	glVertex3f(340.0, 80.0, 341.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(335.0, 55.0, 343.0);
	glVertex3f(335.0, 55.0, 340.5);
	glVertex3f(335.0, 80.0, 340.5);
	glVertex3f(335.0, 80.0, 343.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(340.0, 55.0, 343.0);
	glVertex3f(340.0, 55.0, 340.5);
	glVertex3f(340.0, 80.0, 340.5);
	glVertex3f(340.0, 80.0, 343.0);
	glEnd();


	// pilar 3

	glBegin(GL_POLYGON);
	glVertex3f(310.0, 55.0, 339.0);
	glVertex3f(305.0, 55.0, 338.5);
	glVertex3f(305.0, 80.0, 338.5);
	glVertex3f(310.0, 80.0, 339.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(310.0, 55.0, 337.0);
	glVertex3f(305.0, 55.0, 336.5);
	glVertex3f(305.0, 80.0, 336.5);
	glVertex3f(310.0, 80.0, 337.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(305.0, 55.0, 336.5);
	glVertex3f(305.0, 55.0, 339.0);
	glVertex3f(305.0, 80.0, 339.0);
	glVertex3f(305.0, 80.0, 336.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(310.0, 55.0, 336.5);
	glVertex3f(310.0, 55.0, 339.0);
	glVertex3f(310.0, 80.0, 339.0);
	glVertex3f(310.0, 80.0, 336.5);
	glEnd();

	// pilar 4

	glBegin(GL_POLYGON);
	glVertex3f(270.0, 55.0, 333.0);
	glVertex3f(265.0, 55.0, 332.5);
	glVertex3f(265.0, 80.0, 332.5);
	glVertex3f(270.0, 80.0, 333.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(270.0, 55.0, 331.0);
	glVertex3f(265.0, 55.0, 330.5);
	glVertex3f(265.0, 80.0, 330.5);
	glVertex3f(270.0, 80.0, 331.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(265.0, 55.0, 332.5);
	glVertex3f(265.0, 55.0, 330.5);
	glVertex3f(265.0, 80.0, 330.5);
	glVertex3f(265.0, 80.0, 332.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(270, 55.0, 333.0);
	glVertex3f(270.0, 55.0, 331.5);
	glVertex3f(270.0, 80.0, 331.5);
	glVertex3f(270.0, 80.0, 333.0);
	glEnd();

	// pilar 5

	glBegin(GL_POLYGON);
	glVertex3f(240.0, 55.0, 329.0);
	glVertex3f(235.0, 55.0, 328.5);
	glVertex3f(235.0, 80.0, 328.5);
	glVertex3f(240.0, 80.0, 329.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(240.0, 55.0, 327.0);
	glVertex3f(235.0, 55.0, 326.5);
	glVertex3f(235.0, 80.0, 326.5);
	glVertex3f(240.0, 80.0, 327.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(240.0, 55.0, 329.0);
	glVertex3f(240.0, 55.0, 327.0);
	glVertex3f(240.0, 80.0, 327.0);
	glVertex3f(240.0, 80.0, 329.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(235.0, 55.0, 328.5);
	glVertex3f(235.0, 55.0, 326.5);
	glVertex3f(235.0, 80.0, 326.5);
	glVertex3f(235.0, 80.0, 328.5);
	glEnd();

	// pilar 6

	glBegin(GL_POLYGON);
	glVertex3f(210.0, 55.0, 324.5);
	glVertex3f(205.0, 55.0, 324.0);
	glVertex3f(205.0, 80.0, 324.0);
	glVertex3f(210.0, 80.0, 324.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(210.0, 55.0, 322.5);
	glVertex3f(205.0, 55.0, 322.0);
	glVertex3f(205.0, 80.0, 322.0);
	glVertex3f(210.0, 80.0, 322.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(210.0, 55.0, 324.5);
	glVertex3f(210.0, 55.0, 322.5);
	glVertex3f(210.0, 80.0, 322.5);
	glVertex3f(210.0, 80.0, 324.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(205.0, 55.0, 324.0);
	glVertex3f(205.0, 55.0, 322.0);
	glVertex3f(205.0, 80.0, 322.0);
	glVertex3f(205.0, 80.0, 324.0);
	glEnd();


	//detail depan
	/*
	glColor3fv(color.grey);
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 80.0, 346.0);
	glVertex3f(200.0, 80.0, 321.0);
	glVertex3f(200.0, 60.0, 321.0);
	glVertex3f(375.0, 60.0, 346.0);
	glEnd();
	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex3f(310.0, 60.0, 341.0);
	glVertex3f(270.0, 60.0, 335.0);
	glVertex3f(270.0, 80.0, 335.0);
	glVertex3f(310.0, 80.0, 341.0);
	glEnd();*/

	glColor3fv(color.white);
	//depan-atas
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 80.0, 350.0);
	glVertex3f(200.0, 80.0, 325.0);
	glVertex3f(200.0, 100.0, 325.0);
	glVertex3f(375.0, 100.0, 350.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(375.0, 80.0, 350.0);
	glVertex3f(200.0, 80.0, 325.0);
	glVertex3f(200.0, 80.0, 100.0);
	glVertex3f(375.0, 80.0, 100.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(375.0, 80.0, 100.0);
	glVertex3f(375.0, 80.0, 350.0);
	glVertex3f(375.0, 100.0, 350.0);
	glVertex3f(375.0, 100.0, 100.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(200.0, 80.0, 100.0);
	glVertex3f(200.0, 80.0, 325.0);
	glVertex3f(200.0, 100.0, 325.0);
	glVertex3f(200.0, 100.0, 100.0);
	glEnd();

	glColor4f(0.4, 0.4, 0.4, 0.5);
	//kaca depan
	glBegin(GL_POLYGON);
	glVertex3f(211.5, 75.0, 306.5);
	glVertex3f(232.5, 75.0, 311.0);
	glVertex3f(232.5, 70.0, 311.0);
	glVertex3f(211.5, 70.0, 306.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(242.5, 75.0, 311.0);
	glVertex3f(262.5, 75.0, 316.5);
	glVertex3f(262.5, 70.0, 316.5);
	glVertex3f(242.5, 70.0, 311.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(270.5, 75.0, 315.0);
	glVertex3f(302.0, 75.0, 320.5);
	glVertex3f(302.0, 70.0, 320.5);
	glVertex3f(270.5, 70.0, 315.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(312.25, 75.0, 321.0);
	glVertex3f(332.5, 75.0, 324.5);
	glVertex3f(332.5, 70.0, 324.5);
	glVertex3f(312.25, 70.0, 321.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(340.75, 75.0, 326.0);
	glVertex3f(362.5, 75.0, 329.0);
	glVertex3f(362.5, 70.0, 329.0);
	glVertex3f(340.75, 70.0, 326.0);
	glEnd();
}

void drawBuildingB() {
	myColor color;

	//bawah
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 55.0, 50.0); //I
	glVertex3f(150.0, 55.0, 50.0); //J
	glVertex3f(150.0, 55.0, -50.0); //K
	glVertex3f(250.0, 55.0, -50.0); //L
	glVertex3f(250.0, 55.0, -300.0); //M
	glVertex3f(375.0, 55.0, -300.0); //N
	glEnd();
	
	glColor3f(0.9, 0.9, 0.9);
	//atas
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 650.0, 50.0); //I
	glVertex3f(150.0, 650.0, 50.0); //J
	glVertex3f(150.0, 650.0, -50.0); //K
	glVertex3f(250.0, 650.0, -50.0); //L
	glVertex3f(250.0, 650.0, -300.0); //M
	glVertex3f(375.0, 650.0, -300.0); //N
	glEnd();

	glColor3f(0.45, 0.749, 0.83);
	//depan
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 55.0, 50.0); //I
	glVertex3f(150.0, 55.0, 50.0); //J
	glVertex3f(150.0, 650.0, 50.0); //J-up
	glVertex3f(375.0, 650.0, 50.0); //I-up
	glEnd();

	//kiri J-K
	glBegin(GL_POLYGON);
	glVertex3f(150.0, 55.0, 50.0); //J
	glVertex3f(150.0, 55.0, -50.0); //K
	glVertex3f(150.0, 650.0, -50.0); //K-up
	glVertex3f(150.0, 650.0, 50.0); //J-up
	glEnd();

	//kiri K-L
	glBegin(GL_POLYGON);
	glVertex3f(150.0, 55.0, -50.0); //K
	glVertex3f(250.0, 55.0, -50.0); //L
	glVertex3f(250.0, 650.0, -50.0); //L-up
	glVertex3f(150.0, 650.0, -50.0); //K-up
	glEnd();

	//kiri L-M
	glBegin(GL_POLYGON);
	glVertex3f(250.0, 55.0, -50.0); //L
	glVertex3f(250.0, 55.0, -300.0); //M
	glVertex3f(250.0, 650.0, -300.0); //M-up
	glVertex3f(250.0, 650.0, -50.0); //L-up
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(250.0, 55.0, -300.0); //M
	glVertex3f(375.0, 55.0, -300.0); //N
	glVertex3f(375.0, 650.0, -300.0); //N-up
	glVertex3f(250.0, 650.0, -300.0); //M-up
	glEnd();

	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 55.0, -300.0); //N
	glVertex3f(375.0, 55.0, 50.0); //I
	glVertex3f(375.0, 650.0, 50.0); //I-up
	glVertex3f(375.0, 650.0, -300.0); //N-up
	glEnd();

	//detail
	glColor4f(0.3, 0.3, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex3f(325.0, 55.0, 50.5); //I
	glVertex3f(315.0, 55.0, 50.5); //J
	glVertex3f(315.0, 650.0, 50.5); //J-up
	glVertex3f(325.0, 650.0, 50.5); //I-up
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(210.0, 55.0, 50.5); //I
	glVertex3f(200.0, 55.0, 50.5); //J
	glVertex3f(200.0, 650.0, 50.5); //J-up
	glVertex3f(210.0, 650.0, 50.5); //I-up
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(275.0, 55.0, 50.5); //I
	glVertex3f(250.0, 55.0, 50.5); //J
	glVertex3f(250.0, 650.0, 50.5); //J-up
	glVertex3f(275.0, 650.0, 50.5); //I-up
	glEnd();

	glColor4f(1.0, 1.0, 1.0, 0.3);
	float spacingC = 630.0;
	for (int i = 0; i < 60; i++) {
		glBegin(GL_LINE_LOOP);
		glVertex3f(375.0, spacingC, 51.0); //I
		glVertex3f(150.0, spacingC, 51.0); //J
		glVertex3f(150.0, spacingC, -50.5); //K
		glVertex3f(250.0, spacingC, -50.5); //L
		glVertex3f(250.0, spacingC, -300.5); //M
		glVertex3f(375.0, spacingC, -300.5); //N
		glEnd();
		spacingC -= 10.0;
	}

	glColor3fv(color.white);
	//depan
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 55.0, 52.0); //I
	glVertex3f(150.0, 55.0, 52.0); //J
	glVertex3f(150.0, 200.0, 52.0); //J-up
	glVertex3f(375.0, 200.0, 52.0); //I-up
	glEnd();

	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(375.5, 55.0, -300.0); //N
	glVertex3f(375.5, 55.0, 50.0); //I
	glVertex3f(375.5, 200.0, 50.0); //I-up
	glVertex3f(375.5, 200.0, -300.0); //N-up
	glEnd();

	glColor3fv(color.glass);
	float spacing = 75.0;
	float spacingB = 80.0;
	for (int i = 0; i < 6; i++) {
		glBegin(GL_POLYGON);
		glVertex3f(376.0, spacing, -250.0); //N
		glVertex3f(376.0, spacing, 0.0); //I
		glVertex3f(376.0, spacingB, 0.0); //I-up
		glVertex3f(376.0, spacingB, -250.0); //N-up
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3f(360.0, spacing, 52.5); //I
		glVertex3f(350.0, spacing, 52.5); //J
		glVertex3f(350.0, spacingB, 52.5); //J-up
		glVertex3f(360.0, spacingB, 52.5); //I-up
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3f(320.0, spacing, 52.5); //I
		glVertex3f(310.0, spacing, 52.5); //J
		glVertex3f(310.0, spacingB, 52.5); //J-up
		glVertex3f(320.0, spacingB, 52.5); //I-up
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3f(267.0, spacing, 52.5); //I
		glVertex3f(257.0, spacing, 52.5); //J
		glVertex3f(257.0, spacingB, 52.5); //J-up
		glVertex3f(267.0, spacingB, 52.5); //I-up
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3f(214.0, spacing, 52.5); //I
		glVertex3f(204.0, spacing, 52.5); //J
		glVertex3f(204.0, spacingB, 52.5); //J-up
		glVertex3f(214.0, spacingB, 52.5); //I-up
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3f(174.0, spacing, 52.5); //I
		glVertex3f(164.0, spacing, 52.5); //J
		glVertex3f(164.0, spacingB, 52.5); //J-up
		glVertex3f(174.0, spacingB, 52.5); //I-up
		glEnd();

		spacing += 20;
		spacingB += 20;
	}

	glColor3fv(color.lightGrey);
	//topdetail
	//bawah
	glBegin(GL_POLYGON);
	glVertex3f(350.0, 650.5, -200.0);
	glVertex3f(350.0, 650.5, -250.0);
	glVertex3f(280.0, 650.5, -250.0);
	glVertex3f(280.0, 650.5, -200.0);
	glEnd();
	//atas
	glBegin(GL_POLYGON);
	glVertex3f(350.0, 670.0, -200.0);
	glVertex3f(350.0, 670.0, -250.0);
	glVertex3f(280.0, 670.0, -250.0);
	glVertex3f(280.0, 670.0, -200.0);
	glEnd();
	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(350.0, 650.5, -200.0);
	glVertex3f(350.0, 650.5, -250.0);
	glVertex3f(350.0, 670.0, -250.0);
	glVertex3f(350.0, 670.0, -200.0);
	glEnd();
	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(280.0, 670.0, -250.0);
	glVertex3f(280.0, 670.0, -200.0);
	glVertex3f(280.0, 650.5, -200.0);
	glVertex3f(280.0, 650.5, -250.0);
	glEnd();
	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(350.0, 650.5, -250.0);
	glVertex3f(280.0, 650.5, -250.0);
	glVertex3f(280.0, 670.0, -250.0);
	glVertex3f(350.0, 670.0, -250.0);
	glEnd();
	//depan
	glBegin(GL_POLYGON);
	glVertex3f(350.0, 650.5, -200.0);
	glVertex3f(280.0, 650.5, -200.0);
	glVertex3f(280.0, 670.0, -200.0);
	glVertex3f(350.0, 670.0, -200.0);
	glEnd();

	glColor3fv(color.lightGrey);
	//bawah
	glBegin(GL_POLYGON);
	glVertex3f(175.0, 650.5, -25.0);
	glVertex3f(175.0, 650.5, 25.0);
	glVertex3f(200.0, 650.5, 25.0);
	glVertex3f(200.0, 650.5, -25.0);
	glEnd();
	//atas
	glBegin(GL_POLYGON);
	glVertex3f(175.0, 670.0, -25.0);
	glVertex3f(175.0, 670.0, 25.0);
	glVertex3f(200.0, 670.0, 25.0);
	glVertex3f(200.0, 670.0, -25.0);
	glEnd();
	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(175.0, 650.5, -25.0);
	glVertex3f(175.0, 650.5, 25.0);
	glVertex3f(175.0, 670.0, 25.0);
	glVertex3f(175.0, 670.0, -25.0);
	glEnd();
	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(200.0, 650.5, 25.0);
	glVertex3f(200.0, 650.5, -25.0);
	glVertex3f(200.0, 670.0, -25.0);
	glVertex3f(200.0, 670.0, 25.0);
	glEnd();
	//depan
	glBegin(GL_POLYGON);
	glVertex3f(175.0, 650.5, 25.0);
	glVertex3f(200.0, 650.5, 25.0);
	glVertex3f(200.0, 670.0, 25.0);
	glVertex3f(175.0, 670.0, 25.0);
	glEnd();
	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(175.0, 650.5, -25.0);
	glVertex3f(200.0, 650.5, -25.0);
	glVertex3f(200.0, 670.0, -25.0);
	glVertex3f(175.0, 670.0, -25.0);
	glEnd();


}

void drawBuildingC() {
	myColor color;

	glColor3fv(color.black);
	//bawah
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 55.0, 300.0); //P
	glVertex3f(125.0, 55.0, 315.0); //O
	glVertex3f(125.0, 55.0, 50.0); //R
	glVertex3f(0.0, 55.0, 35.0); //Q
	glEnd();

	glColor3fv(color.white);
	//atas
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 550.0, 300.0); //P
	glVertex3f(125.0, 550.0, 315.0); //O
	glVertex3f(125.0, 550.0, 50.0); //R
	glVertex3f(0.0, 550.0, 35.0); //Q
	glEnd();

	glColor3fv(color.glass);
	//depan
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 55.0, 300.0); //P
	glVertex3f(125.0, 55.0, 315.0); //O
	glVertex3f(125.0, 550.0, 315.0); //O-up
	glVertex3f(0.0, 550.0, 300.0); //P-up
	glEnd();

	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 55.0, 300.0); //P
	glVertex3f(0.0, 55.0, 35.0); //Q
	glVertex3f(0.0, 550.0, 35.0); //Q-up
	glVertex3f(0.0, 550.0, 300.0); //P-up
	glEnd();

	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(125.0, 55.0, 315.0); //O
	glVertex3f(125.0, 55.0, 50.0); //R
	glVertex3f(125.0, 550.0, 50.0); //R-up
	glVertex3f(125.0, 550.0, 315.0); //O-up
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(125.0, 55.0, 50.0); //R
	glVertex3f(0.0, 55.0, 35.0); //Q
	glVertex3f(0.0, 550.0, 35.0); //Q-up
	glVertex3f(125.0, 550.0, 50.0); //R-up
	glEnd();

	//detail
	glColor3fv(color.white);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.0, 520.0, 300.0); glVertex3f(125.0, 520.0, 315.0); 
	glVertex3f(125.0, 520.0, 50.0); glVertex3f(0.0, 520.0, 35.0); 
	glEnd();

	glColor4fv(color.line);
	float spacing = 525.0;
	for (int i = 0; i < 5; i++) {
		glBegin(GL_LINE_LOOP);
		glVertex3f(0.0, spacing, 300.0); glVertex3f(125.0, spacing, 315.0);
		glVertex3f(125.0, spacing, 50.0); glVertex3f(0.0, spacing, 35.0);
		glEnd();
		spacing += 5.0;
	}

	glColor3fv(color.grey);
	glBegin(GL_POLYGON);
	glVertex3f(-1.0, 200.0, 250.0); 
	glVertex3f(-1.0, 200.0, 85.0); 
	glVertex3f(-1.0, 519.5, 85.0); 
	glVertex3f(-1.0, 519.5, 250.0); 
	glEnd();

	glColor4fv(color.line);
	float spacingA = 515.0;
	float spacingB = 510.0;
	for (int i = 0; i < 21; i++) {
		glBegin(GL_LINE_LOOP);
		glVertex3f(-1.5, spacingA, 300.0); glVertex3f(125.0, spacingA, 315.0);
		glVertex3f(125.0, spacingA, 50.0); glVertex3f(-1.5, spacingA, 35.0);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glVertex3f(-1.5, spacingB, 300.0); glVertex3f(125.0, spacingB, 315.0);
		glVertex3f(125.0, spacingB, 50.0); glVertex3f(-1.5, spacingB, 35.0);
		glEnd();
		spacingA -= 15.0;
		spacingB -= 15.0;
	}

	glColor3fv(color.glass);
	glBegin(GL_QUADS);
	glVertex3f(100.0, 100.0, 350); //P
	glVertex3f(150.0, 100.0, 300); //O
	glVertex3f(150.0, 170.0, 300); //O-up
	glVertex3f(100.0, 170.0, 350); //P-up
	glEnd();

	glColor3fv(color.white);
	glBegin(GL_LINES);
	glVertex3f(100.0, 100.0, 350); //P
	glVertex3f(100.0, 170.0, 350); //P-up
	glEnd();	
	
	glColor3fv(color.white);
	glBegin(GL_LINES);
	glVertex3f(100.0, 170.0, 350); //P
	glVertex3f(62.5, 170.0, 300); //O-up
	glEnd();

	glColor3fv(color.white);
	glBegin(GL_LINES);
	glVertex3f(100.0, 170.0, 350); //P
	glVertex3f(150, 170.0, 300); //O-up
	glEnd();
	
	float triangleSpacing = 0.0f;
	float rowSpacing = 0.0f;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++){
			glColor3ub(160, 205, 219);
			glBegin(GL_TRIANGLES);
			glVertex3f(115.0 + triangleSpacing, 115.0 + rowSpacing, 340 -triangleSpacing);
			glVertex3f(125.0 + triangleSpacing, 115.0 + rowSpacing, 330 -triangleSpacing);
			glVertex3f(115.0 + triangleSpacing, 105.0 + rowSpacing, 340 -triangleSpacing);
			glEnd();
			triangleSpacing += 10.0;
		}
		rowSpacing += 10.0;
		triangleSpacing = 0.0f;
	}

	glColor3fv(color.glass);
	glBegin(GL_QUADS);
	glVertex3f(100.0, 100.0, 350); //P
	glVertex3f(62.5, 100.0, 300); //O
	glVertex3f(62.5, 170.0, 300); //O-up
	glVertex3f(100.0, 170.0, 350); //P-up
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(150.0, 100.0, 300); //P
	glVertex3f(100, 100.0, 220); //O
	glVertex3f(100, 170.0, 220); //O-up
	glVertex3f(150.0, 170.0, 300); //P-up
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(100, 100.0, 350); //P
	glVertex3f(62.5, 100.0, 300); //O
	glVertex3f(100, 100.0, 220); //O
	glVertex3f(150.0, 100.0, 300); //P-up
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(100, 170.0, 350); //P
	glVertex3f(62.5, 170.0, 300); //O
	glVertex3f(100, 170.0, 220); //O
	glVertex3f(150.0, 170.0, 300); //P-up
	glEnd();

	glColor3ubv(color.softBlue);
	//depan
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 55.0, 300.5); //P
	glVertex3f(125.0, 55.0, 315.5); //O
	glVertex3f(125.0, 200.0, 315.5); //O-up
	glVertex3f(0.0, 200.0, 300.5); //P-up
	glEnd();

	float row = 0.0f;
	for (int i = 0; i < 5; i++) {
		float distance = 0.0;
		float deltaZ = 0.0;
		for (int j = 0; j < 5; j++) {
			glColor3fv(color.glass);
			glBegin(GL_QUADS);
			glVertex3f(5.0 + distance, 55.0 + row, 302 + deltaZ); //P
			glVertex3f(15.0 + distance, 55.0 + row, 302.5 + deltaZ); //O
			glVertex3f(15.0 + distance, 75.0 + row, 302.5 + deltaZ); //O-up
			glVertex3f(5.0 + distance, 75.0 + row, 302 + deltaZ); //P-up
			glEnd();

			distance += 25.0;
			deltaZ += 3.3f;
		}

		row += 30.0f;
	}

	glColor3ubv(color.softBlue);
	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, 55.0, 300.0); //P
	glVertex3f(-0.5, 55.0, 35.0); //Q
	glVertex3f(-0.5, 200.0, 35.0); //Q-up
	glVertex3f(-0.5, 200.0, 300.0); //P-up
	glEnd();

	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(125.5, 55.0, 315.0); //O
	glVertex3f(125.5, 55.0, 50.0); //R
	glVertex3f(125.5, 200.0, 50.0); //R-up
	glVertex3f(125.5, 200.0, 315.0); //O-up
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(125.0, 55.0, 49.5); //R
	glVertex3f(0.0, 55.0, 34.5); //Q
	glVertex3f(0.0, 200.0, 34.5); //Q-up
	glVertex3f(125.0, 200.0, 49.5); //R-up
	glEnd();


	//top detail
	glColor3fv(color.lightGrey);
	//atas
	glBegin(GL_POLYGON);
	glVertex3f(15.0, 560.0, 60.0); //P
	glVertex3f(50.0, 560.0, 60.0); //O
	glVertex3f(50.0, 560.0, 225.0); //R
	glVertex3f(15.0, 560.0, 225.0); //Q
	glEnd();

	//depan
	glBegin(GL_POLYGON);
	glVertex3f(50.0, 560.0, 225.0); //P
	glVertex3f(15.0, 560.0, 225.0); //O
	glVertex3f(15.0, 550.0, 225.0); //R
	glVertex3f(50.0, 550.0, 225.0); //Q
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(50.0, 560.0, 60.0); //P
	glVertex3f(15.0, 560.0, 60.0); //O
	glVertex3f(15.0, 550.0, 60.0); //R
	glVertex3f(50.0, 550.0, 60.0); //Q
	glEnd();

	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(50.0, 560.0, 225.0);
	glVertex3f(50.0, 560.0, 60.0);
	glVertex3f(50.0, 550.0, 60.0);
	glVertex3f(50.0, 550.0, 225.0);
	glEnd();

	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(15.0, 560.0, 225.0);
	glVertex3f(15.0, 560.0, 60.0);
	glVertex3f(15.0, 550.0, 60.0);
	glVertex3f(15.0, 550.0, 225.0);
	glEnd();

	//cabang atas
	glBegin(GL_POLYGON);
	glVertex3f(5.0, 560.0, 150.0); //P
	glVertex3f(15.0, 560.0, 150.0); //O
	glVertex3f(15.0, 560.0, 190.0); //R
	glVertex3f(5.0, 560.0, 190.0); //Q
	glEnd();

	// cabang depan
	glBegin(GL_POLYGON);
	glVertex3f(5.0, 560.0, 190.0);
	glVertex3f(15.0, 560.0, 190.0);
	glVertex3f(15.0, 550.0, 190.0);
	glVertex3f(5.0, 550.0, 190.0);
	glEnd();

	//cabang belakang
	glBegin(GL_POLYGON);
	glVertex3f(5.0, 560.0, 150.0);
	glVertex3f(15.0, 560.0, 150.0);
	glVertex3f(15.0, 550.0, 150.0);
	glVertex3f(5.0, 550.0, 150.0);
	glEnd();

	//cabang kanan
	glBegin(GL_POLYGON);
	glVertex3f(15.0, 560.0, 150.0);
	glVertex3f(15.0, 560.0, 190.0);
	glVertex3f(15.0, 550.0, 190.0);
	glVertex3f(15.0, 550.0, 150.0);
	glEnd();

	//cabang kiri
	glBegin(GL_POLYGON);
	glVertex3f(5.0, 560.0, 150.0);
	glVertex3f(5.0, 560.0, 190.0);
	glVertex3f(5.0, 550.0, 190.0);
	glVertex3f(5.0, 550.0, 150.0);
	glEnd();
}

void drawBuildingD() {
	//bawah
	glBegin(GL_POLYGON);
	glVertex3f(-250.0, 55.0, 275.0); //S
	glVertex3f(-350.0, 55.0, 265.0); //T
	glVertex3f(-400.0, 55.0, 250.0); //U
	glVertex3f(-400.0, 55.0, 200.0); //V
	glVertex3f(-250.0, 55.0, 200.0); //W
	glEnd();

	myColor color;
	glColor3fv(color.lightGrey);

	//atas
	glBegin(GL_POLYGON);
	glVertex3f(-250.0, 650.0, 275.0); //S
	glVertex3f(-350.0, 650.0, 265.0); //T
	glVertex3f(-400.0, 650.0, 250.0); //U
	glVertex3f(-400.0, 650.0, 200.0); //V
	glVertex3f(-250.0, 650.0, 200.0); //W
	glEnd();

	glColor3f(0.45, 0.749, 0.83);
	//depan1
	glBegin(GL_POLYGON);
	glVertex3f(-250.0, 55.0, 275.0); //S
	glVertex3f(-350.0, 55.0, 265.0); //T
	glVertex3f(-350.0, 650.0, 265.0); //T
	glVertex3f(-250.0, 650.0, 275.0); //S
	glEnd();

	//depan2
	glBegin(GL_POLYGON);
	glVertex3f(-350.0, 55.0, 265.0); //T
	glVertex3f(-400.0, 55.0, 250.0); //U
	glVertex3f(-400.0, 650.0, 250.0); //U
	glVertex3f(-350.0, 650.0, 265.0); //T
	glEnd();

	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(-400.0, 55.0, 250.0); //U
	glVertex3f(-400.0, 55.0, 200.0); //V
	glVertex3f(-400.0, 650.0, 200.0); //V
	glVertex3f(-400.0, 650.0, 250.0); //U
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(-400.0, 55.0, 200.0); //V
	glVertex3f(-250.0, 55.0, 200.0); //W
	glVertex3f(-250.0, 650.0, 200.0); //W
	glVertex3f(-400.0, 650.0, 200.0); //V
	glEnd();		   

	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(-250.0, 55.0, 200.0); //W
	glVertex3f(-250.0, 55.0, 275.0); //S
	glVertex3f(-250.0, 650.0, 275.0); //S
	glVertex3f(-250.0, 650.0, 200.0); //W
	glEnd();

	//detail
	glColor4f(0.3, 0.3, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex3f(-270.0, 350.0, 273.5); //S
	glVertex3f(-275.0, 350.0, 273.0); //T
	glVertex3f(-275.0, 650.0, 273.0); //T
	glVertex3f(-270.0, 650.0, 273.5); //S
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-300.0, 350.0, 270.0); //S
	glVertex3f(-310.0, 350.0, 269.2); //T
	glVertex3f(-310.0, 650.0, 269.2); //T
	glVertex3f(-300.0, 650.0, 270.0); //S
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-345.0, 350.0, 266.0); //S
	glVertex3f(-355.0, 350.0, 264.0); //T
	glVertex3f(-355.0, 650.0, 264.0); //T
	glVertex3f(-345.0, 650.0, 266.0); //S
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-385.0, 350.0, 255.0); //T
	glVertex3f(-390.0, 350.0, 253.5); //U
	glVertex3f(-390.0, 650.0, 253.5); //U
	glVertex3f(-385.0, 650.0, 255.0); //T
	glEnd();
	//depan1
	glBegin(GL_POLYGON);
	glVertex3f(-250.0, 345.0, 275.5); //S
	glVertex3f(-350.0, 345.0, 265.5); //T
	glVertex3f(-350.0, 350.0, 265.5); //T
	glVertex3f(-250.0, 350.0, 275.5); //S
	glEnd();
	//depan2
	glBegin(GL_POLYGON);
	glVertex3f(-350.0, 345.0, 265.5); //T
	glVertex3f(-400.0, 345.0, 250.5); //U
	glVertex3f(-400.0, 350.0, 250.5); //U
	glVertex3f(-350.0, 350.0, 265.5); //T
	glEnd();
	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(-400.5, 345.0, 250.0); //U
	glVertex3f(-400.5, 345.0, 200.0); //V
	glVertex3f(-400.5, 350.0, 200.0); //V
	glVertex3f(-400.5, 350.0, 250.0); //U
	glEnd();
	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(-249.5, 345.0, 200.0); //W
	glVertex3f(-249.5, 345.0, 275.0); //S
	glVertex3f(-249.5, 350.0, 275.0); //S
	glVertex3f(-249.5, 350.0, 200.0); //W
	glEnd();

	float spacing = 345.0;
	float spacingB = 350.0;
	for (int i = 0; i < 15; i++) {
		//depan1
		glBegin(GL_POLYGON);
		glVertex3f(-250.0, spacing, 275.5); //S
		glVertex3f(-350.0, spacing, 265.5); //T
		glVertex3f(-350.0, spacingB, 265.5); //T
		glVertex3f(-250.0, spacingB, 275.5); //S
		glEnd();
		//depan2
		glBegin(GL_POLYGON);
		glVertex3f(-350.0, spacing, 265.5); //T
		glVertex3f(-400.0, spacing, 250.5); //U
		glVertex3f(-400.0, spacingB, 250.5); //U
		glVertex3f(-350.0, spacingB, 265.5); //T
		glEnd();
		//kiri
		glBegin(GL_POLYGON);
		glVertex3f(-400.5, spacing, 250.0); //U
		glVertex3f(-400.5, spacing, 200.0); //V
		glVertex3f(-400.5, spacingB, 200.0); //V
		glVertex3f(-400.5, spacingB, 250.0); //U
		glEnd();
		//kanan
		glBegin(GL_POLYGON);
		glVertex3f(-249.5, spacing, 200.0); //W
		glVertex3f(-249.5, spacing, 275.0); //S
		glVertex3f(-249.5, spacingB, 275.0); //S
		glVertex3f(-249.5, spacingB, 200.0); //W
		glEnd();

		spacing -= 10.0;
		spacingB -= 10.0;
	}

	glColor3f(1.0,1.0,1.0);
	//depan1
	glBegin(GL_POLYGON);
	glVertex3f(-250.0, 55.0, 275.5); //S
	glVertex3f(-350.0, 55.0, 265.5); //T
	glVertex3f(-350.0, 200.0, 265.5); //T
	glVertex3f(-250.0, 200.0, 275.5); //S
	glEnd();
	//depan2
	glBegin(GL_POLYGON);
	glVertex3f(-350.0, 55.0, 265.5); //T
	glVertex3f(-400.0, 55.0, 250.5); //U
	glVertex3f(-400.0, 200.0, 250.5); //U
	glVertex3f(-350.0, 200.0, 265.5); //T
	glEnd();
	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(-400.5, 55.0, 250.0); //U
	glVertex3f(-400.5, 55.0, 200.0); //V
	glVertex3f(-400.5, 200.0, 200.0); //V
	glVertex3f(-400.5, 200.0, 250.0); //U
	glEnd();
	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(-400.0, 55.0, 199.5); //V
	glVertex3f(-250.0, 55.0, 199.5); //W
	glVertex3f(-250.0, 200.0, 199.5); //W
	glVertex3f(-400.0, 200.0, 199.5); //V
	glEnd();
	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(-249.5, 55.0, 200.0); //W
	glVertex3f(-249.5, 55.0, 275.0); //S
	glVertex3f(-249.5, 200.0, 275.0); //S
	glVertex3f(-249.5, 200.0, 200.0); //W
	glEnd();
	
	glColor4fv(color.lightGrey);
	//depan1
	glBegin(GL_POLYGON);
	glVertex3f(-250.0, 640.0, 275.9); //S
	glVertex3f(-350.0, 640.0, 265.9); //T
	glVertex3f(-350.0, 650.0, 265.9); //T
	glVertex3f(-250.0, 650.0, 275.9); //S
	glEnd();
	//depan2
	glBegin(GL_POLYGON);
	glVertex3f(-350.0, 640.0, 265.9); //T
	glVertex3f(-400.0, 640.0, 250.9); //U
	glVertex3f(-400.0, 650.0, 250.9); //U
	glVertex3f(-350.0, 650.0, 265.9); //T
	glEnd();	
	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(-400.5, 640.0, 250.0); //U
	glVertex3f(-400.5, 640.0, 200.0); //V
	glVertex3f(-400.5, 650.0, 200.0); //V
	glVertex3f(-400.5, 650.0, 250.0); //U
	glEnd();
	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(-400.0, 640.0, 199.5); //V
	glVertex3f(-250.0, 640.0, 199.5); //W
	glVertex3f(-250.0, 650.0, 199.5); //W
	glVertex3f(-400.0, 650.0, 199.5); //V
	glEnd();
	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(-249.5, 640.0, 200.0); //W
	glVertex3f(-249.5, 640.0, 275.0); //S
	glVertex3f(-249.5, 650.0, 275.0); //S
	glVertex3f(-249.5, 650.0, 200.0); //W
	glEnd();

	float spacingC = 640.0;
	//garis
	glColor4fv(color.line);
	for (int i = 0; i < 30; i++) {
		glBegin(GL_LINE_LOOP);
		glVertex3f(-250.0, spacingC, 275.9); //S
		glVertex3f(-350.0, spacingC, 265.9); //T
		glVertex3f(-350.0, spacingC, 265.9); //T
		glVertex3f(-400.0, spacingC, 250.9); //U
		glVertex3f(-400.5, spacingC, 250.0); //U
		glVertex3f(-400.5, spacingC, 200.0); //V
		glVertex3f(-400.0, spacingC, 199.5); //V
		glVertex3f(-250.0, spacingC, 199.5); //W
		glVertex3f(-249.5, spacingC, 200.0); //W
		glVertex3f(-249.5, spacingC, 275.0); //S
		glEnd();

		spacingC -= 10.0;
	}
}

void drawBuildingE() {
	myColor color;

	//bawah
	glBegin(GL_POLYGON);
	glVertex3f(-50.0, 55.0, 300.0); //Z
	glVertex3f(-100.0, 55.0, 300.0); //A1
	glVertex3f(-100.0, 55.0, 200.0); //B1
	glVertex3f(-65.0, 55.0, 200.0); //E1
	glVertex3f(-50.0, 55.0, 245.0); //F1
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-200.0, 55.0, 265.0); //C1
	glVertex3f(-100.0, 55.0, 265.0); //C1
	glVertex3f(-100.0, 55.0, 200.0); //D1
	glVertex3f(-200.0, 55.0, 200.0); //D1
	glEnd();

	glColor3fv(color.lightGrey);
	//atas
	glBegin(GL_POLYGON);
	glVertex3f(-50.0, 350.0, 300.0); //Z
	glVertex3f(-100.0, 350.0, 300.0); //A1
	glVertex3f(-100.0, 350.0, 200.0); //B1
	glVertex3f(-65.0, 350.0, 200.0); //E1
	glVertex3f(-50.0, 350.0, 245.0); //F1
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-200.0, 350.0, 265.0); //C1
	glVertex3f(-100.0, 350.0, 265.0); //C1
	glVertex3f(-100.0, 350.0, 200.0); //D1
	glVertex3f(-200.0, 350.0, 200.0); //D1
	glEnd();

	glColor3fv(color.glass);
	//depan
	glBegin(GL_POLYGON);
	glVertex3f(-50.0, 55.0, 300.0); //Z
	glVertex3f(-100.0, 55.0, 300.0); //A1
	glVertex3f(-100.0, 350.0, 300.0); //A1
	glVertex3f(-50.0, 350.0, 300.0); //Z
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-100.0, 55.0, 300.0); //A1
	glVertex3f(-100.0, 55.0, 200.0); //B1
	glVertex3f(-100.0, 250.0, 200.0); //B1
	glVertex3f(-100.0, 250.0, 300.0); //A1
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-200.0, 55.0, 265.0); //C1
	glVertex3f(-100.0, 55.0, 265.0); //C1
	glVertex3f(-100.0, 350.0, 265.0); //C1
	glVertex3f(-200.0, 350.0, 265.0); //C1
	glEnd();

	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(-200.0, 55.0, 265.0); //C1
	glVertex3f(-200.0, 55.0, 200.0); //D1
	glVertex3f(-200.0, 350.0, 200.0); //D1
	glVertex3f(-200.0, 350.0, 265.0); //C1
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(-200.0, 55.0, 200.0); //D1
	glVertex3f(-65.0, 55.0, 200.0); //E1
	glVertex3f(-65.0, 350.0, 200.0); //E1
	glVertex3f(-200.0, 350.0, 200.0); //D1
	glEnd();

	//kanan1
	glBegin(GL_POLYGON);
	glVertex3f(-65.0, 55.0, 200.0); //E1
	glVertex3f(-50.0, 55.0, 245.0); //F1
	glVertex3f(-50.0, 350.0, 245.0); //F1
	glVertex3f(-65.0, 350.0, 200.0); //E1
	glEnd();

	//kanan2
	glBegin(GL_POLYGON);
	glVertex3f(-50.0, 55.0, 245.0); //F1
	glVertex3f(-50.0, 55.0, 300.0); //Z
	glVertex3f(-50.0, 350.0, 300.0); //Z
	glVertex3f(-50.0, 350.0, 245.0); //F1
	glEnd();

	//detail
	glColor4f(1.0, 1.0, 1.0, 0.3);
	float spacing = 350.0;
	for (int i = 0; i < 20; i++) {
		glBegin(GL_LINES);
		glVertex3f(-50.0, spacing, 300.5); //Z
		glVertex3f(-100.0, spacing, 300.5); //A1
		glVertex3f(-100.5, spacing, 300.5); //A1
		glVertex3f(-100.5, spacing, 200.5); //B1
		glVertex3f(-200.0, spacing, 266.0); //C1
		glVertex3f(-100.0, spacing, 266.0); //C1
		glVertex3f(-200.5, spacing, 265.5); //C1
		glVertex3f(-200.5, spacing, 200.5); //D1
		glVertex3f(-64.5, spacing, 200.5); //E1
		glVertex3f(-49.5, spacing, 245.5); //F1
		glVertex3f(-200.0, spacing, 200.0); //D1
		glVertex3f(-65.0, spacing, 200.0); //E1
		glVertex3f(-49.5, spacing, 245.5); //F1
		glVertex3f(-49.5, spacing, 300.5); //Z
		glEnd();
		spacing -= 10.0;
	}

	glBegin(GL_LINE_LOOP);
	glVertex3f(-50.0, 55.0, 300.0); //Z
	glVertex3f(-100.0, 55.0, 300.0); //A1
	glVertex3f(-100.0, 350.0, 300.0); //A1
	glVertex3f(-50.0, 350.0, 300.0); //Z
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	//depan
	glBegin(GL_POLYGON);
	glVertex3f(-50.0, 55.0, 300.5); //Z
	glVertex3f(-100.0, 55.0, 300.5); //A1
	glVertex3f(-100.0, 150.0, 300.5); //A1
	glVertex3f(-50.0, 150.0, 300.5); //Z
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-100.5, 55.0, 300.0); //A1
	glVertex3f(-100.5, 55.0, 200.0); //B1
	glVertex3f(-100.5, 150.0, 200.0); //B1
	glVertex3f(-100.5, 150.0, 300.0); //A1
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-200.0, 55.0, 265.5); //C1
	glVertex3f(-100.0, 55.0, 265.5); //C1
	glVertex3f(-100.0, 150.0, 265.5); //C1
	glVertex3f(-200.0, 150.0, 265.5); //C1
	glEnd();

	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(-200.5, 55.0, 265.0); //C1
	glVertex3f(-200.5, 55.0, 200.0); //D1
	glVertex3f(-200.5, 150.0, 200.0); //D1
	glVertex3f(-200.5, 150.0, 265.0); //C1
	glEnd();

	//kanan1
	glBegin(GL_POLYGON);
	glVertex3f(-64.5, 55.0, 200.0); //E1
	glVertex3f(-49.5, 55.0, 245.0); //F1
	glVertex3f(-49.5, 150.0, 245.0); //F1
	glVertex3f(-64.5, 150.0, 200.0); //E1
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-49.5, 55.0, 245.0); //F1
	glVertex3f(-49.5, 55.0, 300.0); //Z
	glVertex3f(-49.5, 150.0, 300.0); //Z
	glVertex3f(-49.5, 150.0, 245.0); //F1
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(-200.0, 55.0, 199.5); //D1
	glVertex3f(-65.0, 55.0, 199.5); //E1
	glVertex3f(-65.0, 150.0, 199.5); //E1
	glVertex3f(-200.0, 150.0, 199.5); //D1
	glEnd();

	//detail kaca depan
	glColor3fv(color.white);
	glBegin(GL_POLYGON);
	glVertex3f(-50.0, 55.0, 301.0); //Z
	glVertex3f(-55.0, 55.0, 301.0); //A1
	glVertex3f(-55.0, 350.0, 301.0); //A1
	glVertex3f(-50.0, 350.0, 301.0); //Z
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-95.0, 55.0, 301.0); //Z
	glVertex3f(-100.0, 55.0, 301.0); //A1
	glVertex3f(-100.0, 350.0, 301.0); //A1
	glVertex3f(-95.0, 350.0, 301.0); //Z
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-50.0, 345.0, 301.0); //Z
	glVertex3f(-100.0, 345.0, 301.0); //A1
	glVertex3f(-100.0, 350.0, 301.0); //A1
	glVertex3f(-50.0, 350.0, 301.0); //Z
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-50.0, 315.0, 301.0); //Z
	glVertex3f(-100.0, 315.0, 301.0); //A1
	glVertex3f(-100.0, 320.0, 301.0); //A1
	glVertex3f(-50.0, 320.0, 301.0); //Z
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-70.0, 315.0, 301.0); //Z
	glVertex3f(-80.0, 315.0, 301.0); //A1
	glVertex3f(-80.0, 350.0, 301.0); //A1
	glVertex3f(-70.0, 350.0, 301.0); //Z
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-100.5, 345.0, 300.0); //A1
	glVertex3f(-100.5, 345.0, 200.0); //B1
	glVertex3f(-100.5, 350.0, 200.0); //B1
	glVertex3f(-100.5, 350.0, 300.0); //A1
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-200.0, 345.0, 265.5); //C1
	glVertex3f(-100.0, 345.0, 265.5); //C1
	glVertex3f(-100.0, 350.0, 265.5); //C1
	glVertex3f(-200.0, 350.0, 265.5); //C1
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-200.0, 55.0, 266.5); //C1
	glVertex3f(-195.0, 55.0, 266.5); //C1
	glVertex3f(-195.0, 350.0, 266.5); //C1
	glVertex3f(-200.0, 350.0, 266.5); //C1
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-75.0, 55.0, 301.0); //Z
	glVertex3f(-100.0, 55.0, 301.0); //A1
	glVertex3f(-100.0, 200.0, 301.0); //A1
	glVertex3f(-75.0, 200.0, 301.0); //Z
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-100.5, 195.0, 300.0); //A1
	glVertex3f(-100.5, 195.0, 200.0); //B1
	glVertex3f(-100.5, 200.0, 200.0); //B1
	glVertex3f(-100.5, 200.0, 300.0); //A1
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-200.0, 55.0, 265.6); //C1
	glVertex3f(-100.0, 55.0, 265.6); //C1
	glVertex3f(-100.0, 200.0, 265.6); //C1
	glVertex3f(-200.0, 200.0, 265.6); //C1
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-165.0, 100.0, 266.5); //C1
	glVertex3f(-160.0, 100.0, 266.5); //C1
	glVertex3f(-160.0, 195.0, 266.5); //C1
	glVertex3f(-165.0, 195.0, 266.5); //C1
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-135.0, 100.0, 266.5); //C1
	glVertex3f(-130.0, 100.0, 266.5); //C1
	glVertex3f(-130.0, 195.0, 266.5); //C1
	glVertex3f(-135.0, 195.0, 266.5); //C1
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-105.0, 55.0, 266.5); //C1
	glVertex3f(-100.0, 55.0, 266.5); //C1
	glVertex3f(-100.0, 350.0, 266.5); //C1
	glVertex3f(-105.0, 350.0, 266.5); //C1
	glEnd();
	glColor3fv(color.glass);
	glBegin(GL_POLYGON);
	glVertex3f(-80.0, 150.0, 301.2); //Z
	glVertex3f(-95.0, 150.0, 301.2); //A1
	glVertex3f(-95.0, 195.0, 301.2); //A1
	glVertex3f(-80.0, 195.0, 301.2); //Z
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-200.0, 150.0, 265.9); //C1
	glVertex3f(-100.0, 150.0, 265.9); //C1
	glVertex3f(-100.0, 195.0, 265.9); //C1
	glVertex3f(-200.0, 195.0, 265.9); //C1
	glEnd();
}

void drawBuildingF() {
	myColor color;
	glColor3fv(color.lightGrey);

	//bawah
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 55.0, 50.0);  //depan
	glVertex3f(375.0, 55.0, -750.0); //belakang
	glVertex3f(225.0, 55.0, -750.0); //belakang
	glVertex3f(225.0, 55.0, -300.0); //kiri
	glVertex3f(0.0, 55.0, -300.0); //kiri
	glVertex3f(0.0, 55.0, 50.0); // depan
	glEnd();

	//atas
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 200.0, 50.0);  //depan
	glVertex3f(375.0, 200.0, -750.0); //belakang
	glVertex3f(225.0, 200.0, -750.0); //belakang
	glVertex3f(225.0, 200.0, -300.0); //kiri
	glVertex3f(0.0, 200.0, -300.0); //kiri
	glVertex3f(0.0, 200.0, 50.0); // depan
	glEnd();

	glColor3fv(color.white);
	//depan
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 55.0, 50.0);  //depan
	glVertex3f(0.0, 55.0, 50.0); // depan
	glVertex3f(0.0, 200.0, 50.0); // depan
	glVertex3f(375.0, 200.0, 50.0);  //depan
	glEnd();

	//kiri
	glColor3fv(color.glass);
	glBegin(GL_POLYGON);
	glVertex3f(225.0, 55.0, -300.0); //kiri
	glVertex3f(0.0, 55.0, -300.0); //kiri
	glVertex3f(0.0, 200.0, -300.0); //kiri	
	glVertex3f(225.0, 200.0, -300.0); //kiri
	glEnd();
	glColor3fv(color.white);
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 55.0, -300.0); //kiri
	glVertex3f(0.0, 55.0, 50.0); // depan
	glVertex3f(0.0, 200.0, 50.0); // depan
	glVertex3f(0.0, 200.0, -300.0); //kiri
	glEnd();
	glColor3fv(color.glass);
	glBegin(GL_POLYGON);
	glVertex3f(225.0, 55.0, -750.0); //kiri
	glVertex3f(225.0, 55.0, -300.0); //kiri
	glVertex3f(225.0, 200.0, -300.0); //kiri
	glVertex3f(225.0, 200.0, -750.0); //kiri
	glEnd();

	glColor3fv(color.white);
	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 55.0, -750.0); //belakang
	glVertex3f(225.0, 55.0, -750.0); //belakang
	glVertex3f(225.0, 200.0, -750.0); //belakang
	glVertex3f(375.0, 200.0, -750.0); //belakang
	glEnd();

	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(374.0, 55.0, -750.0); //belakang
	glVertex3f(374.0, 55.0, 50.0);  //depan
	glVertex3f(374.0, 200.0, 50.0);  //depan
	glVertex3f(374.0, 200.0, -750.0); //belakang
	glEnd();

	//detail
	float spacing = 75.0;
	float spacingB = 80.0;
	for (int i = 0; i < 6; i++) {
		glColor3fv(color.glass);
		glBegin(GL_POLYGON);
		glVertex3f(374.5, spacing, -700.0); //belakang
		glVertex3f(374.5, spacing, -350.0);  //depan
		glVertex3f(374.5, spacingB, -350.0);  //depan
		glVertex3f(374.5, spacingB, -700.0); //belakang
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3f(355.0, spacing, -750.5); //belakang
		glVertex3f(350.0, spacing, -750.5); //belakang
		glVertex3f(350.0, spacingB, -750.5); //belakang
		glVertex3f(355.0, spacingB, -750.5); //belakang
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3f(300.0, spacing, -750.5); //belakang
		glVertex3f(295.0, spacing, -750.5); //belakang
		glVertex3f(295.0, spacingB, -750.5); //belakang
		glVertex3f(300.0, spacingB, -750.5); //belakang
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3f(250.0, spacing, -750.5); //belakang
		glVertex3f(245.0, spacing, -750.5); //belakang
		glVertex3f(245.0, spacingB, -750.5); //belakang
		glVertex3f(250.0, spacingB, -750.5); //belakang
		glEnd();

		glColor4fv(color.line);
		glBegin(GL_LINES);
		glVertex3f(224.5, spacing, -300.5); //kiri
		glVertex3f(0.0, spacingB, -300.5); //kiri
		glVertex3f(224.5, spacing, -750.0); //kiri
		glVertex3f(224.5, spacingB, -300.0); //kiri
		glEnd();

		spacing += 20.0;
		spacingB += 20.0;
	}
}

void drawBuildingG() {
	myColor color;
	glColor3fv(color.lightGrey);
	//bawah
	glBegin(GL_POLYGON);
	glVertex3f(125.0, 55.0, 314.9); //O
	glVertex3f(-400.0, 55.0, 200.0); //V
	glVertex3f(-450.0, 55.0, 0.0);
	glVertex3f(125.0, 55.0, 0.0);
	glEnd();

	//atas
	glBegin(GL_POLYGON);
	glVertex3f(125.0, 200.0, 314.9); //O
	glVertex3f(-400.0, 200.0, 200.0); //V
	glVertex3f(-450.0, 200.0, 0.0);
	glVertex3f(125.0, 200.0, 0.0);
	glEnd();
	
	//depan
	glBegin(GL_POLYGON);
	glVertex3f(125.0, 55.0, 314.0); //O
	glVertex3f(-400.0, 55.0, 200.0); //V
	glVertex3f(-400.0, 200.0, 200.0); //V
	glVertex3f(125.0, 200.0, 314.0); //O
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glVertex3f(-450.0, 55.0, 0.0);
	glVertex3f(125.0, 55.0, 0.0);
	glVertex3f(125.0, 200.0, 0.0);
	glVertex3f(-450.0, 200.0, 0.0);
	glEnd();

	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(-400.0, 55.0, 200.0); //V
	glVertex3f(-450.0, 55.0, 0.0);
	glVertex3f(-450.0, 200.0, 0.0);
	glVertex3f(-400.0, 200.0, 200.0); //V
	glEnd();

	//kanan
	glBegin(GL_POLYGON);
	glVertex3f(125.0, 55.0, 314.0); //O
	glVertex3f(125.0, 55.0, 0.0);
	glVertex3f(125.0, 200.0, 0.0);
	glVertex3f(125.0, 200.0, 314.0); //O
	glEnd();

}

void myTree(float startPoint) {
	// Batang
	glColor3ub(139, 69, 19);
	glBegin(GL_QUADS);
	glVertex3f(startPoint, 55, 340);
	glVertex3f(startPoint-10, 55, 340);
	glVertex3f(startPoint -10, 120, 340);
	glVertex3f(startPoint, 120, 340);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(startPoint, 55, 330);
	glVertex3f(startPoint -10, 55, 330);
	glVertex3f(startPoint -10, 120, 330);
	glVertex3f(startPoint, 120, 330);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(startPoint -10, 55, 330);
	glVertex3f(startPoint -10, 55, 340);
	glVertex3f(startPoint -10, 120, 340);
	glVertex3f(startPoint -10, 120, 330);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(startPoint, 55, 330);
	glVertex3f(startPoint, 55, 340);
	glVertex3f(startPoint, 120, 340);
	glVertex3f(startPoint, 120, 330);
	glEnd();

	// daun
	glColor3ub(1, 50, 32);
	glBegin(GL_QUADS);
	glVertex3f(startPoint -20, 90, 380);
	glVertex3f(startPoint+20, 90, 380);
	glVertex3f(startPoint+20, 90, 300);
	glVertex3f(startPoint -20, 90, 300);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(startPoint -20, 180, 380);
	glVertex3f(startPoint+20, 180, 380);
	glVertex3f(startPoint+20, 180, 300);
	glVertex3f(startPoint -20, 180, 300);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(startPoint -20, 90, 380);
	glVertex3f(startPoint -20, 180, 380);
	glVertex3f(startPoint -20, 180, 300);
	glVertex3f(startPoint -20, 90, 300);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(startPoint+20, 90, 380);
	glVertex3f(startPoint+20, 180, 380);
	glVertex3f(startPoint+20, 180, 300);
	glVertex3f(startPoint+20, 90, 300);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(startPoint -20, 90, 300);
	glVertex3f(startPoint+20, 90, 300);
	glVertex3f(startPoint+20, 180, 300);
	glVertex3f(startPoint -20, 180, 300);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(startPoint-20, 90, 380);
	glVertex3f(startPoint+20, 90, 380);
	glVertex3f(startPoint+20, 180, 380);
	glVertex3f(startPoint -20, 180, 380);
	glEnd();
}

void baseGrid(float x, float z, float dx, float dz) {
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(x + dx, -500.0, (z + dz) + dz);
	glVertex3f(x + dx, -500.0, z + dz);
	glVertex3f((x + dx) + dx, -500.0, z + dz);
	glVertex3f((x + dx) + dx, -500.0, (z + dz) + dz);
	glEnd();
}

void createBaseGrid() {
	int x = -500.0;
	int z = -500.0;
	int dx = 50.0;
	int dz = 50.0;
	for (int x = -500; x < 500; x += dx) {
		for (int z = -500; z < 500; z += dz) {
			baseGrid(x, z, dx, dz);
		}
	}
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	glColor3f(0.0, 1.0, 0.0);

	drawBuildingBase();
	drawBuildingA();
	drawBuildingB();
	drawBuildingC();
	drawBuildingD();
	drawBuildingE();
	drawBuildingF();
	drawBuildingG();

	myTree(170.0);
	myTree(0.0);
	myTree(-100.0);
	myTree(-200.0);
	myTree(-330.0);

	glPopMatrix();
	glFlush();
	glutSwapBuffers();
}

void keyFun(unsigned char key, int x, int y) {
	switch (key) {
		// Right - Left
	case 'a':
		glRotatef(-5.0, 0.0, 1.0, 0.0);
		break;
	case 'd':
		glRotatef(5.0, 0.0, 1.0, 0.0);
		break;

		// Up - Down
	case 'w':
		glRotatef(-5.0, 1.0, 0.0, 0.0);
		break;
	case 's':
		glRotatef(5.0, 1.0, 0.0, 0.0);
		break;

		// Rotate - Z
	case 'q':
		glRotatef(5.0, 0.0, 0.0, 1.0);
		break;
	case 'e':
		glRotatef(-5.0, 0.0, 0.0, 1.0);
		break;

		// Zoom In - Out
	case '1':
		glScalef(1.025, 1.025, 1.025);
		break;
	case '2':
		glScalef(0.975, 0.975, 0.975);
		break;
	case 'r':
		glTranslatef(0.0, 0.0, 0.0);
		break;
	}

	glutPostRedisplay();
}

void keySpecialFun(int key, int x, int y) {
	switch (key) {
		// Left
	case 100:
		glTranslatef(-5.0, 0.0, 0.0);
		break;
		// Up
	case 101:
		glTranslatef(0.0, 5.0, 0.0);
		break;
		// Right
	case 102:
		glTranslatef(5.0, 0.0, 0.0);
		break;
		// Down
	case 103:
		glTranslatef(0.0, -5.0, 0.0);
		break;
	}
	glutPostRedisplay();
}

void reshape(int width, int height) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, width / height, 5.0, 1000.0);
	glTranslatef(-25.0, -100.0, -500.0);
	if (width >= height)
		glViewport(0, 0, (GLsizei)width, (GLsizei)height);
	else
		glViewport(0, 0, (GLsizei)width, (GLsizei)width);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void mouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		mouseDown = true;
		xdiff = (x + xrot);
		ydiff = (-y + yrot);
	}
	else
		mouseDown = false;
}

void mouseMotion(int x, int y){
	if (mouseDown)
	{
		xrot = (y + ydiff) / 150;
		yrot = (x - xdiff) / 150;

		glutPostRedisplay();


		glRotatef(xrot, 1.0f, 0.0f, 0.0f); 
		glRotatef(yrot, 0.0f, 1.0f, 0.0f); 
	}
}

void myinit() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glPointSize(2.0);
	glLineWidth(2.5);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST); 
	glEnable(GL_LINE_SMOOTH);
	glEnable(GL_POINT_SMOOTH);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	//glEnable(GL_LIGHTING);
	//glEnable(GL_LIGHT0);
	//gluOrtho2D(-500.0, 500.0, -500.0, 500.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1920, 1080);
	glutInitWindowPosition(-10, -50);
	glutCreateWindow("Ardian Pramudya Alphita - 672018150");

	glutDisplayFunc(display);
	glutKeyboardFunc(keyFun);
	glutSpecialFunc(keySpecialFun);
	glutReshapeFunc(reshape);
	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);

	myinit();
	glutMainLoop();

	return 0;
}