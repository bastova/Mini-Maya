#pragma once
#include "myglwidget.h"
#include <cmath>
#include <iostream>
#include "../glm/gtc/matrix_transform.hpp"
#include "glew.h"
#include <QGLWidget>
#include <QTimer>
#include <QtOpenGL>
#include <QKeyEvent>
#include "MyCamera.h"
#include <vector>
#include "../glm/glm.hpp"
using namespace std;
class MyFace;
class MyHalfEdge;
class MyVertex;


class MyUnitCube 
{
public:
	MyUnitCube();
	int faceCt;
	int edgeCt;
	int vertCt;

	std::vector<MyFace*> faces;
	std::vector<MyHalfEdge*> edges;
	std::vector<MyVertex*> vertices;
	std::vector<float> getVertPoints();
	std::vector<float> getColorPoints();
	std::vector<float> getNormPoints();
	std::vector<unsigned short> getIndiciesPoints();
	void splitQuad(MyFace*);
};