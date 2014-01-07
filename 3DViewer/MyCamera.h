#pragma once
#include "myglwidget.h"
#include <cmath>
#include <iostream>
#include "../glm/gtc/matrix_transform.hpp"
using namespace std;


class MyCamera
{
public:
	MyCamera();


	glm::mat4 coords;
	glm::vec3 eyePositionE;
	glm::vec3 viewC;

	glm::vec3 upVectorU;
	float theta;
	float fovy;
	float zInLimit;
	float zOutLimit;
	float rho;
	glm::mat4 getmat4();
	void rotateDn(float);
	void rotateY(float);
	void setZ(float);
};