#pragma once
#include "myglwidget.h"
#include <cmath>
#include <iostream>
#include "../glm/gtc/matrix_transform.hpp"
#include "glew.h"
#include <QGLWidget>
#include <QTimer>
#include <QKeyEvent>
#include <QtOpenGL>
#include "MyCamera.h"
#include "../glm/glm.hpp"
using namespace std;
class MyFace;
class MyVertex;


class MyHalfEdge : public QListWidgetItem
{
public:
	MyFace * F;
	MyVertex * V;
	MyHalfEdge * NEXT;
	MyHalfEdge * PREV;
	MyHalfEdge * SYM;
	int ID;
	void setNext(MyHalfEdge *);
	void setPrev(MyHalfEdge *);
	void setSym(MyHalfEdge *);
	void setId(int);
	MyHalfEdge(MyFace * f, MyVertex * v, MyHalfEdge * next, MyHalfEdge * sym, MyHalfEdge * PREV);
	MyHalfEdge(MyFace *f, MyVertex *v);
	MyHalfEdge(int ID);
};