#pragma once
#include "myglwidget.h"
#include "MyCamera.h"
#include <cmath>
#include <iostream>
#include "../glm/ext.hpp"
#include "../glm/gtc/matrix_transform.hpp"

//using namespace std;

MyCamera::MyCamera() {
	eyePositionE=glm::vec3(0.0f,0.0f,9.9f);
	viewC=glm::vec3(0,0,0);
	upVectorU=glm::vec3(0,1,0);
	theta=45;
	rho=45;
	
        glm::vec3 f = glm::normalize(viewC - eyePositionE);
        glm::vec3 u = glm::normalize(upVectorU);
		glm::vec3 e = glm::cross(f, u);
        glm::vec3 s = glm::normalize(e);
        u = glm::cross(s, f);

        glm::mat4 viewMat = glm::mat4(0.0);
        viewMat[0][0] = s.x;
        viewMat[1][0] = s.y;
        viewMat[2][0] = s.z;
        viewMat[0][1] = u.x;
        viewMat[1][1] = u.y;
        viewMat[2][1] = u.z;
        viewMat[0][2] =-f.x;
        viewMat[1][2] =-f.y;
        viewMat[2][2] =-f.z;

		viewMat =  glm::translate(viewMat, -eyePositionE);
		 viewMat[3][3]=1;
		
		  fovy = 45;
		 float aspectRatio = 1.2;
		 zInLimit = 0.1;
		 zOutLimit = 1000.0;
		 float range = tan(glm::radians(fovy / float(2))) * zInLimit;	
		float left = -range * aspectRatio;
		float right = range * aspectRatio;
		float bottom = -range;
		float top = range;

		glm::mat4 persMat(float(0));
		persMat[0][0] = (float(2) * zInLimit) / (right - left);
		persMat[1][1] = (float(2) * zInLimit) / (top - bottom);
		persMat[2][2] = - (zOutLimit + zInLimit) / (zOutLimit - zInLimit);
		persMat[2][3] = - float(1);
		persMat[3][2] = - (float(2) * zOutLimit * zInLimit) / (zOutLimit - zInLimit);
		
	coords=persMat*viewMat;

}

void MyCamera::rotateDn(float an){
	///////////////////////Anton
	glm::vec3 view_vec = viewC - eyePositionE;
	glm::vec3 crossV = glm::cross(view_vec,upVectorU);
	glm::mat4 rotm = glm::rotate(an,crossV);
	////////////////////////////
	glm::vec4 eyen(1.0);
	eyen[0]=eyePositionE[0];
	eyen[1]=eyePositionE[1];
	eyen[2]=eyePositionE[2];
	eyen[3]=1;
	eyen = rotm*eyen;
	glm::vec4 upn(1.0);
	upn[0]=upVectorU[0];
	upn[1]=upVectorU[1];
	upn[2]=upVectorU[2];
	upn[3]=1;
	upn = rotm*upn;
	eyePositionE[0]=eyen[0];
	eyePositionE[1]=eyen[1];
	eyePositionE[2]=eyen[2];
	upVectorU[0]=upn[0];
	upVectorU[1]=upn[1];
	upVectorU[2]=upn[2];

}
void MyCamera::rotateY(float an){
	glm::mat4 rotm = glm::rotate(an, glm::vec3(0.0,1.0,0.0));

	glm::vec4 eyen(1.0);
	eyen[0]=eyePositionE[0];
	eyen[1]=eyePositionE[1];
	eyen[2]=eyePositionE[2];
	eyen[3]=1;
	eyen = rotm*eyen;
	glm::vec4 upn(1.0);
	upn[0]=upVectorU[0];
	upn[1]=upVectorU[1];
	upn[2]=upVectorU[2];
	upn[3]=1;
	upn = rotm*upn;
	eyePositionE[0]=eyen[0];
	eyePositionE[1]=eyen[1];
	eyePositionE[2]=eyen[2];
	upVectorU[0]=upn[0];
	upVectorU[1]=upn[1];
	upVectorU[2]=upn[2];

}

void MyCamera::setZ(float an){
	////////////////////Anton
	glm::vec3 eyeDir = glm::vec3(eyePositionE - viewC);
	eyeDir = glm::normalize(eyeDir);
	eyePositionE = eyePositionE + glm::vec3(eyeDir.x * an, eyeDir.y * an, eyeDir.z * an);
	/////////////////////////
	//fovy = fovy +an;
	
}

glm::mat4 MyCamera::getmat4  (){

	
        glm::vec3 f = glm::normalize(viewC - eyePositionE);
        glm::vec3 u = glm::normalize(upVectorU);
		glm::vec3 e = glm::cross(f, u);
        glm::vec3 s = glm::normalize(e);
        u = glm::cross(s, f);

        glm::mat4 viewMat = glm::mat4(0.0);
        viewMat[0][0] = s.x;
        viewMat[1][0] = s.y;
        viewMat[2][0] = s.z;
        viewMat[0][1] = u.x;
        viewMat[1][1] = u.y;
        viewMat[2][1] = u.z;
        viewMat[0][2] =-f.x;
        viewMat[1][2] =-f.y;
        viewMat[2][2] =-f.z;

		viewMat =  glm::translate(viewMat, -eyePositionE);
		 viewMat[3][3]=1;

		// float fovy = 45;
		 float aspectRatio = 1.2;
		 
		 float range = tan(glm::radians(fovy / float(2))) * zInLimit;	
		float left = -range * aspectRatio;
		float right = range * aspectRatio;
		float bottom = -range;
		float top = range;

		glm::mat4 persMat(float(0));
		persMat[0][0] = (float(2) * zInLimit) / (right - left);
		persMat[1][1] = (float(2) * zInLimit) / (top - bottom);
		persMat[2][2] = - (zOutLimit + zInLimit) / (zOutLimit - zInLimit);
		persMat[2][3] = - float(1);
		persMat[3][2] = - (float(2) * zOutLimit * zInLimit) / (zOutLimit - zInLimit);
		
	coords=persMat*viewMat;
	return coords;
}


      