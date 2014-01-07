#include "MyFace.h"
#include "MyHalfEdge.h"
#include "MyVertex.h"

MyHalfEdge::MyHalfEdge(MyFace * _f, MyVertex * _v, MyHalfEdge * _next, MyHalfEdge * _sym, MyHalfEdge * _prev) : F(_f), V(_v), NEXT(_next), SYM(_sym), PREV(_prev){ ID=0;}
MyHalfEdge::MyHalfEdge(int _id){
	ID = _id;
}
MyHalfEdge::MyHalfEdge(MyFace * _f, MyVertex * _v){
	F=_f;
	V=_v;
	ID=0;
	NEXT=nullptr;
	PREV=nullptr;
}
void MyHalfEdge::setNext (MyHalfEdge * _nxt){
	NEXT=_nxt;
}
void MyHalfEdge::setPrev (MyHalfEdge * _prev){
	PREV=_prev;
}
void MyHalfEdge::setSym (MyHalfEdge * _sym){
	SYM=_sym;
}
void MyHalfEdge::setId(int i){
	ID = i;
}