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
#include <vector>
#include "../glm/glm.hpp"
using namespace std;
class MyFace;
class MyHalfEdge;
class MyVertex;


class MyFFDGrid
{
public:
	vector<float> BBox;
	vector<MyVertex*> BBvertices;
	vector<vector<MyVertex*>> BBcontrol_points;

	MyFFDGrid(std::vector<MyVertex*>);
	MyFFDGrid(int, int, int, std::vector<MyVertex*>);
	
	void getBoundingBox(std::vector<MyVertex*>);
	void createGrid(int, int, int);
	void constructControlPoints(int, int, int);
};