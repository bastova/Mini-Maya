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
#include "../glm/glm.hpp"
using namespace std;
class MyHalfEdge;


class MyFace : public QListWidgetItem
{
public:
	float R;
	float G;
	float B;
	int ID;
	bool high;
	bool fHover;
	MyHalfEdge* HalfEdge;
	MyFace(float r, float g, float b, int id, MyHalfEdge* mhe);
	MyFace(int id);
	void setHalfEdge(MyHalfEdge*);
	void highl(bool h);
};