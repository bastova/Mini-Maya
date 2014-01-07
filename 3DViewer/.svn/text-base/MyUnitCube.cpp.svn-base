#include "MyUnitCube.h"
#include "MyVertex.h"
#include "MyFace.h"
#include "MyHalfEdge.h"

MyUnitCube::MyUnitCube(){
	faceCt=6;
	edgeCt=24;
	vertCt=8;
		// cube ///////////////////////////////////////////////////////////////////////
	//    v6----- v5
	//   /|      /|
	//  v1------v0|
	//  | |     | |
	//  | |v7---|-|v4
	//  |/      |/
	//  v2------v3	
	
	// vertex coords array, remember the homogeneous representation?
	//float vertices[]
	
	//= {1,1,1,1,  -1,1,1,1,  -1,-1,1,1,  1,-1,1,1,        // v0-v1-v2-v3
 //                       1,1,1,1,  1,-1,1,1,  1,-1,-1,1,  1,1,-1,1,        // v0-v3-v4-v5
 //                       1,1,1,1,  1,1,-1,1,  -1,1,-1,1,  -1,1,1,1,        // v0-v5-v6-v1
 //                       -1,1,1,1,  -1,1,-1,1,  -1,-1,-1,1,  -1,-1,1,1,    // v1-v6-v7-v2
 //                       -1,-1,-1,1,  1,-1,-1,1,  1,-1,1,1,  -1,-1,1,1,    // v7-v4-v3-v2
 //                       1,-1,-1,1,  -1,-1,-1,1,  -1,1,-1,1,  1,1,-1,1};   // v4-v7-v6-v5

	MyFace * face0= new MyFace(0);
	MyFace * face1= new MyFace(1);
	MyFace * face2= new MyFace(2);
	MyFace * face3= new MyFace(3);
	MyFace * faceT= new MyFace(4);
	MyFace * faceB= new MyFace(5);
	
	faces.push_back(face0);
	faces.push_back(face1);
	faces.push_back(face2);
	faces.push_back(face3);
	faces.push_back(faceT);
	faces.push_back(faceB);
	MyVertex * vertex0= new MyVertex(1,1,1,0);
	MyVertex * vertex1= new MyVertex(-1,1,1,1);
	MyVertex * vertex2= new MyVertex(-1,-1,1,2);
	MyVertex * vertex3= new MyVertex(1,-1,1,3);
	MyVertex * vertex4= new MyVertex(1,-1,-1,4);
	MyVertex * vertex5= new MyVertex(1,1,-1,5);
	MyVertex * vertex6= new MyVertex(-1,1,-1,6);
	MyVertex * vertex7= new MyVertex(-1,-1,-1,7);
	vertices.push_back(vertex0);
	vertices.push_back(vertex1);
	vertices.push_back(vertex2);
	vertices.push_back(vertex3);
	vertices.push_back(vertex4);
	vertices.push_back(vertex5);
	vertices.push_back(vertex6);
	vertices.push_back(vertex7);
	//face 0
	MyHalfEdge * halfEdgeF0V3V0 = new MyHalfEdge(face0,vertex0);
	halfEdgeF0V3V0->setId(0);
	MyHalfEdge * halfEdgeF0V0V1 = new MyHalfEdge(face0,vertex1);
	halfEdgeF0V0V1->setId(1);
	face0->setHalfEdge(halfEdgeF0V3V0);
	MyHalfEdge * halfEdgeF0V1V2 = new MyHalfEdge(face0,vertex2);
	halfEdgeF0V1V2->setId(2);
	MyHalfEdge * halfEdgeF0V2V3 = new MyHalfEdge(face0,vertex3);
	halfEdgeF0V2V3->setId(3);
	
	//begin face 1
	
	MyHalfEdge * halfEdgeF1V2V1 = new MyHalfEdge(face1,vertex1);
	halfEdgeF1V2V1->setId(4);
	MyHalfEdge * halfEdgeF1V1V6 = new MyHalfEdge(face1,vertex6);
	halfEdgeF1V1V6->setId(5);
	face1->setHalfEdge(halfEdgeF1V2V1);
	MyHalfEdge * halfEdgeF1V6V7 = new MyHalfEdge(face1,vertex7);
	halfEdgeF1V6V7->setId(6);
	MyHalfEdge * halfEdgeF1V7V2 = new MyHalfEdge(face1,vertex2);
	halfEdgeF1V7V2->setId(7);
	//begin face 2
	
	MyHalfEdge * halfEdgeF2V5V4 = new MyHalfEdge(face2,vertex4);
	halfEdgeF2V5V4->setId(8);
	MyHalfEdge * halfEdgeF2V6V5 = new MyHalfEdge(face2,vertex5);
	halfEdgeF2V6V5->setId(9);
	face2->setHalfEdge(halfEdgeF2V5V4);
	MyHalfEdge * halfEdgeF2V4V7 = new MyHalfEdge(face2,vertex7);
	halfEdgeF2V4V7->setId(10);
	MyHalfEdge * halfEdgeF2V7V6 = new MyHalfEdge(face2,vertex6);
	halfEdgeF2V7V6->setId(11);
	//begin face 3
	MyHalfEdge * halfEdgeF3V5V0 = new MyHalfEdge(face3,vertex0);
	halfEdgeF3V5V0->setId(12);
	face3->setHalfEdge(halfEdgeF3V5V0);
	MyHalfEdge * halfEdgeF3V0V3 = new MyHalfEdge(face3,vertex3);
	halfEdgeF3V0V3->setId(13);
	MyHalfEdge * halfEdgeF3V3V4 = new MyHalfEdge(face3,vertex4);
	halfEdgeF3V3V4->setId(14);
	MyHalfEdge * halfEdgeF3V4V5 = new MyHalfEdge(face3,vertex5);
	halfEdgeF3V4V5->setId(15);
	//begin face T
	MyHalfEdge * halfEdgeFTV1V0 = new MyHalfEdge(faceT,vertex0);
	halfEdgeFTV1V0->setId(16);
	faceT->setHalfEdge(halfEdgeFTV1V0);
	MyHalfEdge * halfEdgeFTV0V5 = new MyHalfEdge(faceT,vertex5);
	halfEdgeFTV0V5->setId(17);
	MyHalfEdge * halfEdgeFTV5V6 = new MyHalfEdge(faceT,vertex6);
	halfEdgeFTV5V6->setId(18);
	MyHalfEdge * halfEdgeFTV6V1 = new MyHalfEdge(faceT,vertex1);
	halfEdgeFTV6V1->setId(19);
	//begin face B
	
	MyHalfEdge * halfEdgeFBV2V7 = new MyHalfEdge(faceB,vertex7);
	halfEdgeFBV2V7->setId(20);
	MyHalfEdge * halfEdgeFBV3V2 = new MyHalfEdge(faceB,vertex2);
	halfEdgeFBV3V2->setId(21);
	faceB->setHalfEdge(halfEdgeFBV2V7);
	MyHalfEdge * halfEdgeFBV7V4 = new MyHalfEdge(faceB,vertex4);
	halfEdgeFBV7V4->setId(22);
	MyHalfEdge * halfEdgeFBV4V3 = new MyHalfEdge(faceB,vertex3);
	halfEdgeFBV4V3->setId(23);
	//set next F0
	halfEdgeF0V0V1->setNext(halfEdgeF0V1V2);
	halfEdgeF0V1V2->setNext(halfEdgeF0V2V3);
	halfEdgeF0V2V3->setNext(halfEdgeF0V3V0);
	halfEdgeF0V3V0->setNext(halfEdgeF0V0V1);

	
	//set sym F0
	halfEdgeF0V0V1->setSym(halfEdgeFTV1V0);
	halfEdgeF0V1V2->setSym(halfEdgeF1V2V1);
	halfEdgeF0V2V3->setSym(halfEdgeFBV3V2);
	halfEdgeF0V3V0->setSym(halfEdgeF3V0V3);
	//set prev F0
	halfEdgeF0V1V2->setPrev(halfEdgeF0V0V1);
	halfEdgeF0V2V3->setPrev(halfEdgeF0V1V2);
	halfEdgeF0V3V0->setPrev(halfEdgeF0V2V3);
	halfEdgeF0V0V1->setPrev(halfEdgeF0V3V0);


	//set next F1
	halfEdgeF1V1V6->setNext(halfEdgeF1V6V7);
	halfEdgeF1V6V7->setNext(halfEdgeF1V7V2);
	halfEdgeF1V7V2->setNext(halfEdgeF1V2V1);
	halfEdgeF1V2V1->setNext(halfEdgeF1V1V6);
	//set sym F1
	halfEdgeF1V1V6->setSym(halfEdgeFTV6V1);
	halfEdgeF1V6V7->setSym(halfEdgeF2V7V6);
	halfEdgeF1V7V2->setSym(halfEdgeFBV2V7);
	halfEdgeF1V2V1->setSym(halfEdgeF0V1V2);
	
	//set prev F1
	
	halfEdgeF1V6V7->setPrev(halfEdgeF1V1V6);
	halfEdgeF1V7V2->setPrev(halfEdgeF1V6V7);
	halfEdgeF1V2V1->setPrev(halfEdgeF1V7V2);
	halfEdgeF1V1V6->setPrev(halfEdgeF1V2V1);
	//set next F2
	halfEdgeF2V6V5->setNext(halfEdgeF2V5V4);
	halfEdgeF2V5V4->setNext(halfEdgeF2V4V7);
	halfEdgeF2V4V7->setNext(halfEdgeF2V7V6);
	halfEdgeF2V7V6->setNext(halfEdgeF2V6V5);
	
	//set sym F2
	halfEdgeF2V6V5->setSym(halfEdgeFTV5V6);
	halfEdgeF2V5V4->setSym(halfEdgeF3V4V5);
	halfEdgeF2V4V7->setSym(halfEdgeFBV7V4);
	halfEdgeF2V7V6->setSym(halfEdgeF1V6V7);
	//set prev F2
	halfEdgeF2V5V4->setPrev(halfEdgeF2V6V5);
	halfEdgeF2V4V7->setPrev(halfEdgeF2V5V4);
	halfEdgeF2V7V6->setPrev(halfEdgeF2V4V7);
	halfEdgeF2V6V5->setPrev(halfEdgeF2V7V6);
				// cube ///////////////////////////////////////////////////////////////////////
	//    v6----- v5
	//   /|      /|
	//  v1------v0|
	//  | |     | |
	//  | |v7---|-|v4
	//  |/      |/
	//  v2------v3	
	
	//set next F3
	halfEdgeF3V5V0->setNext(halfEdgeF3V0V3);
	halfEdgeF3V0V3->setNext(halfEdgeF3V3V4);
	halfEdgeF3V3V4->setNext(halfEdgeF3V4V5);
	halfEdgeF3V4V5->setNext(halfEdgeF3V5V0);
	
	//set sym F3
	halfEdgeF3V5V0->setSym(halfEdgeFTV0V5);
	halfEdgeF3V0V3->setSym(halfEdgeF0V3V0);
	halfEdgeF3V3V4->setSym(halfEdgeFBV4V3);
	halfEdgeF3V4V5->setSym(halfEdgeF2V5V4);
	//set prev F3
	halfEdgeF3V0V3->setPrev(halfEdgeF3V5V0);
	halfEdgeF3V3V4->setPrev(halfEdgeF3V0V3);
	halfEdgeF3V4V5->setPrev(halfEdgeF3V3V4);
	halfEdgeF3V5V0->setPrev(halfEdgeF3V4V5);
				// cube ///////////////////////////////////////////////////////////////////////
	//    v6----- v5
	//   /|      /|
	//  v1------v0|
	//  | |     | |
	//  | |v7---|-|v4
	//  |/      |/
	//  v2------v3	
	
	
	//set next FT
	halfEdgeFTV1V0->setNext(halfEdgeFTV0V5);
	halfEdgeFTV0V5->setNext(halfEdgeFTV5V6);
	halfEdgeFTV5V6->setNext(halfEdgeFTV6V1);
	halfEdgeFTV6V1->setNext(halfEdgeFTV1V0);
	
	//set sym FT
	halfEdgeFTV1V0->setSym(halfEdgeF0V0V1);
	halfEdgeFTV0V5->setSym(halfEdgeF3V5V0);
	halfEdgeFTV5V6->setSym(halfEdgeF2V6V5);
	halfEdgeFTV6V1->setSym(halfEdgeF1V1V6);
	//set prev FT
	halfEdgeFTV0V5->setPrev(halfEdgeFTV1V0);
	halfEdgeFTV5V6->setPrev(halfEdgeFTV0V5);
	halfEdgeFTV6V1->setPrev(halfEdgeFTV5V6);
	halfEdgeFTV1V0->setPrev(halfEdgeFTV6V1);

	
	//set sym FB
	halfEdgeFBV3V2->setSym(halfEdgeF0V2V3);
	halfEdgeFBV2V7->setSym(halfEdgeF1V7V2);
	halfEdgeFBV7V4->setSym(halfEdgeF2V4V7);
	halfEdgeFBV4V3->setSym(halfEdgeF3V3V4);

	//set next FB
	halfEdgeFBV3V2->setNext(halfEdgeFBV2V7);
	halfEdgeFBV2V7->setNext(halfEdgeFBV7V4);
	halfEdgeFBV7V4->setNext(halfEdgeFBV4V3);
	halfEdgeFBV4V3->setNext(halfEdgeFBV3V2);
	//set prev FB
	halfEdgeFBV2V7->setPrev(halfEdgeFBV3V2);
	halfEdgeFBV7V4->setPrev(halfEdgeFBV2V7);
	halfEdgeFBV4V3->setPrev(halfEdgeFBV7V4);
	halfEdgeFBV3V2->setPrev(halfEdgeFBV4V3);


	edges.push_back(halfEdgeF0V0V1);
	edges.push_back(halfEdgeF0V1V2);
	edges.push_back(halfEdgeF0V2V3);
	edges.push_back(halfEdgeF0V3V0);
	//
	edges.push_back(halfEdgeF1V1V6);
	edges.push_back(halfEdgeF1V6V7);
	edges.push_back(halfEdgeF1V7V2);
	edges.push_back(halfEdgeF1V2V1);
	//
	edges.push_back(halfEdgeF2V6V5);
	edges.push_back(halfEdgeF2V5V4);
	edges.push_back(halfEdgeF2V4V7);
	edges.push_back(halfEdgeF2V7V6);
	//
	edges.push_back(halfEdgeF3V5V0);
	edges.push_back(halfEdgeF3V0V3);
	edges.push_back(halfEdgeF3V3V4);
	edges.push_back(halfEdgeF3V4V5);
	//
	edges.push_back(halfEdgeFTV1V0);
	edges.push_back(halfEdgeFTV0V5);
	edges.push_back(halfEdgeFTV5V6);
	edges.push_back(halfEdgeFTV6V1);
	//
	edges.push_back(halfEdgeFBV3V2);
	edges.push_back(halfEdgeFBV2V7);
	edges.push_back(halfEdgeFBV7V4);
	edges.push_back(halfEdgeFBV4V3);
}

std::vector<float> MyUnitCube::getVertPoints(){
	std::vector<float> verPts;
	
	//verPts = new float[96];

	for(int i=0; i<faces.size(); i++){
		MyFace* start = faces[i];
		MyHalfEdge * startingHalfEdge=start->HalfEdge;
		MyHalfEdge * nxtHalfEdge = startingHalfEdge->NEXT;
		verPts.push_back(startingHalfEdge->V->X);
		verPts.push_back(startingHalfEdge->V->Y);
		verPts.push_back(startingHalfEdge->V->Z);
		verPts.push_back(1);
		while(nxtHalfEdge != startingHalfEdge){
			verPts.push_back(nxtHalfEdge->V->X);
			verPts.push_back(nxtHalfEdge->V->Y);
			verPts.push_back(nxtHalfEdge->V->Z);
			verPts.push_back(1);
			nxtHalfEdge=nxtHalfEdge->NEXT;
		}
	}
	
	return verPts;
}


std::vector<float> MyUnitCube::getColorPoints(){

	std::vector<float> colPts;
	
	for(int i=0; i<faces.size(); i++){
		
		MyFace* start = faces[i];
		MyHalfEdge * startingHalfEdge=start->HalfEdge;
		MyHalfEdge * nxtHalfEdge = startingHalfEdge->NEXT;
		if(start->high){
			colPts.push_back(startingHalfEdge->F->R+.11);
		colPts.push_back(startingHalfEdge->F->G-.11);
		colPts.push_back(startingHalfEdge->F->B);
		colPts.push_back(1);
		
		}
		else if(start->fHover==true){
				colPts.push_back(nxtHalfEdge->F->R+.05);
			colPts.push_back(nxtHalfEdge->F->G-.05);
			colPts.push_back(nxtHalfEdge->F->B-.3);
			colPts.push_back(1);
			
			}else{
			colPts.push_back(startingHalfEdge->F->R);
		colPts.push_back(startingHalfEdge->F->G);
		colPts.push_back(startingHalfEdge->F->B);
		colPts.push_back(1);
		}
		 
		while(nxtHalfEdge != startingHalfEdge){
			if(nxtHalfEdge->F->high){
			
			colPts.push_back(nxtHalfEdge->F->R+.11);
			colPts.push_back(nxtHalfEdge->F->G-.11);
			colPts.push_back(nxtHalfEdge->F->B);
			colPts.push_back(1);
			}
			else if(nxtHalfEdge->F->fHover==true){
				colPts.push_back(nxtHalfEdge->F->R+.05);
			colPts.push_back(nxtHalfEdge->F->G-.05);
			colPts.push_back(nxtHalfEdge->F->B-.3);
			colPts.push_back(1);
			
			}else{
				colPts.push_back(nxtHalfEdge->F->R);
			colPts.push_back(nxtHalfEdge->F->G);
			colPts.push_back(nxtHalfEdge->F->B);
			colPts.push_back(1);
			}
			 
			nxtHalfEdge=nxtHalfEdge->NEXT;
		}		
	}
	return colPts;
}

std::vector<float> MyUnitCube::getNormPoints(){
	std::vector<float> normPts;
	
	for(int i=0; i<faces.size(); i++){
		MyFace* start = faces[i];
		
		MyHalfEdge * startingHalfEdge=start->HalfEdge;
		MyHalfEdge* HE1 =startingHalfEdge;
		glm::vec3 v1 = glm::vec3( startingHalfEdge->V->X, startingHalfEdge->V->Y, startingHalfEdge->V->Z );
		MyHalfEdge * nxtHalfEdge = startingHalfEdge->NEXT;
		glm::vec3 v2 = glm::vec3( nxtHalfEdge->V->X, nxtHalfEdge->V->Y, nxtHalfEdge->V->Z);
		MyHalfEdge * thirdHalfEdge = nxtHalfEdge->NEXT;
		glm::vec3 v3 = glm::vec3( thirdHalfEdge->V->X, thirdHalfEdge->V->Y, thirdHalfEdge->V->Z);
		glm::vec3 vC1 = v2-v1;
		glm::vec3 vC2 = v3-v2;
		glm::vec3 cross = glm::cross(vC1,vC2);
		do{
		normPts.push_back(cross.x);
		normPts.push_back(cross.y);
		normPts.push_back(cross.z);
		normPts.push_back(0);
		HE1=HE1->NEXT;
		} while (HE1!=startingHalfEdge);

	}

	return normPts;
}
std::vector<unsigned short> MyUnitCube::getIndiciesPoints(){
	std::vector<unsigned short> indPts;
	int counter = 0;
	for(int i=0; i<faces.size(); i++){
		int sideCt=1;
		MyFace* start = faces[i];
		MyHalfEdge * startingHalfEdge=start->HalfEdge;
		MyHalfEdge * nxtHalfEdge = startingHalfEdge->NEXT;
		while(nxtHalfEdge != startingHalfEdge){
			sideCt++;
			nxtHalfEdge=nxtHalfEdge->NEXT;
		}
		for(int s = 0; s< sideCt-2; s++){
		indPts.push_back(counter);
		
		indPts.push_back(counter+1+s);
		
		indPts.push_back(counter+2+s);
		
		}
		counter+=sideCt;

	}
//	cout <<indPts.size()<<endl;
	return indPts;
}
