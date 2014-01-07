#ifndef MYGLWIDGET
#define MYGLWIDGET

#include "glew.h"
#include <QGLWidget>
#include <QTimer>
#include <QKeyEvent>
#include "MyCamera.h"
#include "../glm/glm.hpp"
#include <cmath>
#include <iostream>
#include <set>
#include "MyVertex.h"
#include "MyFace.h"
#include "MyHalfEdge.h"

class MyUnitCube;
class MyFFDGrid;

class MyGLWidget : public QGLWidget {
	Q_OBJECT;
private:
	//vertex arrays needed for drawing
	unsigned int vbo;
	unsigned int cbo;
	unsigned int nbo;
	unsigned int ibo;

	//attributes
	unsigned int positionLocation;
	unsigned int normalLocation;
	unsigned int colorLocation;

	// uniforms
	unsigned int u_projMatrixLocation;
	unsigned int u_modelMatrixLocation;
		///////////////////////////////NICK (Define light location uniform variable
	unsigned int u_lightLoc;

	////////////////////////////////END NICK
	//needed to compile and link and use the shaders
	unsigned int vertexShader;
	unsigned int fragmentShader;
	unsigned int shaderProgram;

	//Animation/transformation stuff
	QTimer* timer;

	//helper function to read shader source and put it in a char array
	//thanks to Swiftless
	char* textFileRead(const char*);

	//some other helper functions from CIS 565
	void printLinkInfoLog(int);
	void printShaderInfoLog(int);

public:
	MyCamera* camera;
	MyUnitCube* myCube;
	MyHalfEdge* selectedEdge;
	MyFace* selectedFace;
	MyVertex* selectedVertex;
	float mouseX;
	float mouseY;
	float mouseX2;
	float mouseY2;
		/////////////////////////////NICK lights vec3
	glm::vec3 lights;
	
///////////////////////////////END NICK
	///////////////////////////Anton
	int ffdX;
	int ffdY;
	int ffdZ;
	bool drawFFD;
	MyFFDGrid* ffd;
	float valX;
	float valY;
	float valZ;
	vector<MyVertex*> selected_points;
	bool multiple_point_selection;
	void ffdInterpolate(); 

	//////////////////////////
	glm::mat4 model;
	MyGLWidget(QWidget*);
	~MyGLWidget(void);
	void initializeGL(void);
	void paintGL(void);
	void resizeGL(int, int);
	void createCube(glm::mat4);
	void keyPressEvent(QKeyEvent*);
	void keyReleaseEvent(QKeyEvent*);
	void mousePressEvent(QMouseEvent *e);
	void mouseMoveEvent(QMouseEvent *e);
	void wheelEvent(QWheelEvent *e);
	float ex;
	float ey;
	float ez;
	glm::vec3 A;
	glm::vec3 B;
	glm::vec3 M;
	glm::vec3 H;
	glm::vec3 V;
	glm::vec3 R;
	glm::vec3 E;
	float t;
	float theta;
	float phi;
	glm::vec3 Pw;
	bool hover;

	/////////////Smooth/////////////////
	void smooth(MyUnitCube*);
	///////////////////////////////////
public slots:
	// void setSelectedEdge();
	void setRed(int);
	void setGreen(int);
	void setBlue(int);
	void setX(int);
	void setY(int);
	void setZ(int);
	void splitQuad();
	void addVertToEdge();
	void deleteVertex();
	void addEdgeBtwnFaces();
	void drawRay();
	void highlight();
	void checkForIntersection();
	
	/////////////////Anton
	void changeFFDX(int);   /// FFD
	void changeFFDY(int);	/// FFD
	void changeFFDZ(int);	/// FFD
	void createFFD();		/// FFD
	void selectControlPoint();

	///////////////////////////
	void startSmooth(); ///Denys
		/////////////////////////////////NICK SLOTS TO SET LIGHT SOURCE
	void setXLight(int);
	void setYLight(int);
	void setZLight(int);

	/////////////////////////////////END NICK

signals:
	void addEdge(MyHalfEdge*, int);
	void addFace(MyFace*);
	void addVertex(MyVertex*);
	void clearzz();

	void sendSmooth(); //Denys
};

#endif