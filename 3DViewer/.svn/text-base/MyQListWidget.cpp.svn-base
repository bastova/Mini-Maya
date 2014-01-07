#include "MyQListWidget.h"

MyQListWidget::MyQListWidget(QWidget* parent) : QListWidget(parent){
	
}

void MyQListWidget::addFaces(MyFace* f){
	f->setText("face "+QString::number(f->ID));
	addItem(f);
}
void MyQListWidget::addVerts(MyVertex* v){
	v->setText("vertex "+QString::number(v->ID));
	addItem(v);
}
void MyQListWidget::addEdges(MyHalfEdge* e, int i){
	e->setText("halfEdge "+QString::number(e->ID));
	addItem(e);
}
void MyQListWidget::clearz(){
	while(count()>0){
		takeItem(0);
	}
}

void MyQListWidget::dasmoothy() {

}