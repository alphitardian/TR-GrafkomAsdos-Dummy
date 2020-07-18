#include <iostream>
#include <GL/freeglut.h>
using namespace std;

void drawRectangle(float x, float y, float z, float dx, float dy, float dz) {
	// Belakang
	//glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(x - dx, y + dy, z - dz);
	glVertex3f(x + dx, y + dy, z - dz);
	glVertex3f(x + dx, y - dy, z - dz);
	glVertex3f(x - dx, y - dy, z - dz);
	glEnd();

	// Depan
	//glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(x - dx, y + dy, z + dz);
	glVertex3f(x + dx, y + dy, z + dz);
	glVertex3f(x + dx, y - dy, z + dz);
	glVertex3f(x - dx, y - dy, z + dz);
	glEnd();

	// Kanan
	//glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(x + dx, y + dy, z - dz);
	glVertex3f(x + dx, y + dy, z + dz);
	glVertex3f(x + dx, y - dy, z + dz);
	glVertex3f(x + dx, y - dy, z - dz);
	glEnd();

	// Kiri
	//glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(x - dx, y + dy, z - dz);
	glVertex3f(x - dx, y + dy, z + dz);
	glVertex3f(x - dx, y - dy, z + dz);
	glVertex3f(x - dx, y - dy, z - dz);
	glEnd();

	// Bawah
	//glColor3f(1.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(x + dx, y - dy, z - dz);
	glVertex3f(x - dx, y - dy, z - dz);
	glVertex3f(x - dx, y - dy, z + dz);
	glVertex3f(x + dx, y - dy, z + dz);
	glEnd();

	// Atas
	//glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(x + dx, y + dy, z - dz);
	glVertex3f(x - dx, y + dy, z - dz);
	glVertex3f(x - dx, y + dy, z + dz);
	glVertex3f(x + dx, y + dy, z + dz);
	glEnd();
}

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
	glColor3f(1.0, 0.2, 0.2);
	//bawah
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 55.0, 350.0); //E
	glVertex3f(375.0, 55.0, 100.0); //G
	glVertex3f(200.0, 55.0, 100.0); //H
	glVertex3f(200.0, 55.0, 325.0); //F
	glEnd();

	glColor3f(0.9, 0.9, 0.9);
	//depan
	glBegin(GL_POLYGON);
	glVertex3f(375.0, 55.0, 350.0); //E
	glVertex3f(200.0, 55.0, 325.0); //F
	glVertex3f(200.0, 80.0, 325.0); //F-up
	glVertex3f(375.0, 80.0, 350.0); //E-up
	glEnd();

	glColor3f(1, 1, 1);
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
	glVertex3f(375.0, 55.0, 350.0); //E
	glVertex3f(375.0, 55.0, 100.0); //G
	glVertex3f(375.0, 100.0, 100.0); //G-up
	glVertex3f(375.0, 100.0, 350.0); //E-up
	glEnd();

	glColor3f(1, 1, 1);
	//kiri
	glBegin(GL_POLYGON);
	glVertex3f(200.0, 55.0, 100.0); //H
	glVertex3f(200.0, 55.0, 325.0); //F
	glVertex3f(200.0, 100.0, 325.0); //F-up
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

	glColor3f(1.0, 0.5, 0.0);
	//pilar
	glBegin(GL_POLYGON);
	glVertex3f(370.0, 55.0, 349.5);
	glVertex3f(365.0, 55.0, 349.0);
	glVertex3f(365.0, 80.0, 349.0);
	glVertex3f(370.0, 80.0, 349.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(340.0, 55.0, 345.0);
	glVertex3f(335.0, 55.0, 344.5);
	glVertex3f(335.0, 80.0, 344.5);
	glVertex3f(340.0, 80.0, 345.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(310.0, 55.0, 341.0);
	glVertex3f(305.0, 55.0, 340.5);
	glVertex3f(305.0, 80.0, 340.5);
	glVertex3f(310.0, 80.0, 341.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(270.0, 55.0, 335.0);
	glVertex3f(265.0, 55.0, 334.5);
	glVertex3f(265.0, 80.0, 334.5);
	glVertex3f(270.0, 80.0, 335.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(240.0, 55.0, 331.0);
	glVertex3f(235.0, 55.0, 330.5);
	glVertex3f(235.0, 80.0, 330.5);
	glVertex3f(240.0, 80.0, 331.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(210.0, 55.0, 326.5);
	glVertex3f(205.0, 55.0, 326.0);
	glVertex3f(205.0, 80.0, 326.0);
	glVertex3f(210.0, 80.0, 326.5);
	glEnd();

	glColor3f(0.3, 0.3, 0.3);
	//detail depan
	glBegin(GL_POLYGON);
	glVertex3f(310.0, 55.0, 341.0);
	glVertex3f(270.0, 55.0, 335.0);
	glVertex3f(270.0, 80.0, 335.0);
	glVertex3f(310.0, 80.0, 341.0);
	glEnd();

	glColor4f(0.4, 0.4, 0.4, 0.5);
	//kaca depan
	glBegin(GL_POLYGON);
	glVertex3f(211.5, 75.0, 326.5);
	glVertex3f(232.5, 75.0, 331.0);
	glVertex3f(232.5, 70.0, 331.0);
	glVertex3f(211.5, 70.0, 326.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(242.5, 75.0, 331.0);
	glVertex3f(262.5, 75.0, 334.5);
	glVertex3f(262.5, 70.0, 334.5);
	glVertex3f(242.5, 70.0, 331.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(270.5, 75.0, 335.0);
	glVertex3f(302.0, 75.0, 340.5);
	glVertex3f(302.0, 70.0, 340.5);
	glVertex3f(270.5, 70.0, 335.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(312.25, 75.0, 341.0);
	glVertex3f(332.5, 75.0, 344.5);
	glVertex3f(332.5, 70.0, 344.5);
	glVertex3f(312.25, 70.0, 341.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(340.75, 75.0, 345.0);
	glVertex3f(362.5, 75.0, 349.0);
	glVertex3f(362.5, 70.0, 349.0);
	glVertex3f(340.75, 70.0, 345.0);
	glEnd();
}

void drawBuildingB() {
	glColor3f(0.5, 0.5, 1.0);
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

}

void drawBuildingC() {
	glColor3f(0.3, 0.5, 1.0);
	//bawah
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 55.0, 300.0); //P
	glVertex3f(125.0, 55.0, 315.0); //O
	glVertex3f(125.0, 55.0, 50.0); //R
	glVertex3f(0.0, 55.0, 35.0); //Q
	glEnd();

	glColor3f(0.8, 0.8, 0.8);
	//atas
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 550.0, 300.0); //P
	glVertex3f(125.0, 550.0, 315.0); //O
	glVertex3f(125.0, 550.0, 50.0); //R
	glVertex3f(0.0, 550.0, 35.0); //Q
	glEnd();

	glColor3f(0.45, 0.749, 0.83);
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
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.0, 520.0, 300.0); glVertex3f(125.0, 520.0, 315.0); 
	glVertex3f(125.0, 520.0, 50.0); glVertex3f(0.0, 520.0, 35.0); 
	glEnd();

	glColor4f(1.0, 1.0, 1.0, 0.3);
	float spacing = 525.0;
	for (int i = 0; i < 5; i++) {
		glBegin(GL_LINE_LOOP);
		glVertex3f(0.0, spacing, 300.0); glVertex3f(125.0, spacing, 315.0);
		glVertex3f(125.0, spacing, 50.0); glVertex3f(0.0, spacing, 35.0);
		glEnd();
		spacing += 5.0;
	}

	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-1.0, 200.0, 250.0); //P
	glVertex3f(-1.0, 200.0, 85.0); //Q
	glVertex3f(-1.0, 519.5, 85.0); //Q-up
	glVertex3f(-1.0, 519.5, 250.0); //P-up
	glEnd();

	glColor4f(1.0, 1.0, 1.0, 0.2);
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

	glColor3f(1.0, 1.0, 1.0);
	//depan
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 55.0, 300.5); //P
	glVertex3f(125.0, 55.0, 315.5); //O
	glVertex3f(125.0, 200.0, 315.5); //O-up
	glVertex3f(0.0, 200.0, 300.5); //P-up
	glEnd();

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
}

void drawBuildingD() {
	glColor3f(1.0, 0.0, 0.0);
	//bawah
	glBegin(GL_POLYGON);
	glVertex3f(-250.0, 55.0, 275.0); //S
	glVertex3f(-350.0, 55.0, 265.0); //T
	glVertex3f(-400.0, 55.0, 250.0); //U
	glVertex3f(-400.0, 55.0, 200.0); //V
	glVertex3f(-250.0, 55.0, 200.0); //W
	glEnd();

	glColor3f(0.8, 0.8, 0.8);
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

	glColor3f(0.45, 0.749, 0.83);
	//depan2
	glBegin(GL_POLYGON);
	glVertex3f(-350.0, 55.0, 265.0); //T
	glVertex3f(-400.0, 55.0, 250.0); //U
	glVertex3f(-400.0, 650.0, 250.0); //U
	glVertex3f(-350.0, 650.0, 265.0); //T
	glEnd();

	glColor3f(0.45, 0.749, 0.83);
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
}

void drawBuildingE() {
	glColor3f(1.0, 0.0, 0.0);
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

	glColor3f(1.0, 1.0, 1.0);
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

	glColor3f(0.6, 0.6, 1.0);
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

	glPopMatrix();

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
	glMatrixMode(GL_MODELVIEW);
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
	gluOrtho2D(-500.0, 500.0, -500.0, 500.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Ardian Pramudya Alphita - 672018150");

	glutDisplayFunc(display);
	glutKeyboardFunc(keyFun);
	glutSpecialFunc(keySpecialFun);
	glutReshapeFunc(reshape);

	myinit();
	glutMainLoop();

	return 0;
}