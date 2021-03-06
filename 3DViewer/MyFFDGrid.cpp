#include "MyFFDGrid.h"

MyFFDGrid::MyFFDGrid(std::vector<MyVertex*> vertices) {
	getBoundingBox(vertices);
	createGrid(2,2,2);
}

MyFFDGrid::MyFFDGrid(int x, int y, int z, std::vector<MyVertex*> vertices) {
	getBoundingBox(vertices);
	createGrid(x,y,z);
	constructControlPoints(x, y, z);
}

void MyFFDGrid::getBoundingBox(std::vector<MyVertex*> vertices) {
	BBox.clear();
	float leftX = vertices[0]->X;
	float rightX = vertices[0]->X;
	float leftY = vertices[0]->Y;
	float rightY = vertices[0]->Y;
	float leftZ = vertices[0]->Z;
	float rightZ = vertices[0]->Z;
	for(int i = 0; i < vertices.size(); i++ ) {
		MyVertex* v = vertices[i];
		if(v->X < leftX) leftX = v->X;
		if(v->X > rightX) rightX = v->X;
		if(v->Y < leftY) leftY = v->Y;
		if(v->Y > rightY) rightY = v->Y;
		if(v->Z < leftZ) leftZ = v->Z;
		if(v->Z > rightZ) rightZ = v->Z;
	}
	BBox.push_back(leftX);	//0
	BBox.push_back(leftY);	//1
	BBox.push_back(leftZ);	//2
	BBox.push_back(rightX);	//3
	BBox.push_back(rightY);	//4
	BBox.push_back(rightZ);	//5
}

void MyFFDGrid::createGrid(int x, int y, int z) {
	float diffX = BBox[3] - BBox[0];
	float diffY = BBox[4] - BBox[1];
	float diffZ = BBox[5] - BBox[2];
	float ratioX = (float) diffX/(x - 1);
	float ratioY = (float) diffY/(y - 1);
	float ratioZ = (float) diffZ/(z - 1);
	int id = 0;
	cout << BBox[0] << " " << BBox[1] << " "<< BBox[2] << endl;
	cout << BBox[3] << " " << BBox[4] << " "<< BBox[5] << endl;
	for( int i = 0; i < x; i++ ) {
		for (int j = 0; j < y; j ++ ) {
			for (int k = 0; k < z; k++ ) {
				MyVertex* v = new MyVertex(BBox[0] + (float) i*ratioX, BBox[1] + (float) j*ratioY, BBox[2] + (float) k*ratioZ, id);
				BBvertices.push_back(v);
				//cout << BBox[0] + (float) i*ratioX << " " << BBox[1] + (float) j*ratioY << " " << BBox[2] + (float) k*ratioZ << " " << id << endl;
				id ++;
			}
		}
	}
}

void MyFFDGrid::constructControlPoints(int x, int y, int z) {
	int nextLevel = y*z;
	int nextDepth = z;
	int level = 0;
	int depth = 0;
	for(int i = 0; i < x*y*z; i++ ) {
		if( i % nextLevel == 0) level ++;
		if( i % nextDepth == 0) depth ++;
		int a1 = -1;
		int a2 = -1;
		int a3 = -1;
		//int a4 = -1;
		//int a5 = -1;
		//int a6 = -1;
		if (i + 1 < nextDepth * depth) a1 = i + 1;
		if (i + z < nextLevel * level) a2 = i + z;
		if (i + nextLevel < x*y*z) a3 = i + nextLevel;
		cout << i << " connected to: " << a1 << " " << a2 << " " << a3 <<endl;
		MyVertex* v1 = nullptr;
		MyVertex* v2 = nullptr;
		for( int j = 0; j < BBvertices.size(); j++ ) {
			if(BBvertices[j]->ID == i ) {
				v1 = BBvertices[j];
				break;
			}
		}
		if( a1 != -1) {
			for( int j = 0; j < BBvertices.size(); j++ ) {
				if(BBvertices[j]->ID == a1 ) {
					v2 = BBvertices[j];
					break;
				}
			}
			vector<MyVertex*> line;
			line.push_back(v1); line.push_back(v2);
			BBcontrol_points.push_back(line);
		}
		if( a2 != -1) {
			for( int j = 0; j < BBvertices.size(); j++ ) {
				if(BBvertices[j]->ID == a2 ) {
					v2 = BBvertices[j];
					break;
				}
			}
			vector<MyVertex*> line;
			line.push_back(v1); line.push_back(v2);
			BBcontrol_points.push_back(line);
		}
		if( a3 != -1) {
			for( int j = 0; j < BBvertices.size(); j++ ) {
				if(BBvertices[j]->ID == a3 ) {
					v2 = BBvertices[j];
					break;
				}
			}
			vector<MyVertex*> line;
			line.push_back(v1); line.push_back(v2);
			BBcontrol_points.push_back(line);
		}
	}
}