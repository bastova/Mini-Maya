#include "MyFace.h"
#include "MyHalfEdge.h"


MyFace::MyFace(float _r, float _g, float _b, int _id, MyHalfEdge* _mhe) : R(_r), G(_g), B(_b), ID(_id), HalfEdge(_mhe){}

MyFace::MyFace(int _id){
	ID= _id;
	R=1;
	G=1;
	B=1;
	HalfEdge = nullptr;
	high=false;
	fHover=false;
}
void MyFace::setHalfEdge (MyHalfEdge* mhe){
	HalfEdge = mhe;
}
void MyFace::highl(bool h){
	high=h;
}