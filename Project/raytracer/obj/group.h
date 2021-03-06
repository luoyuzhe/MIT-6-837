#pragma once
#include "object3d.h"

class Group :
	public Object3D
{
	Object3D **objList;
	int all;
public:
	Group(int n);
	~Group();

	void addObject(int index, Object3D *obj);
	bool intersect(const Ray &r, Hit &h, float tmin);
	void paint(void);
    void insertIntoGrid(Grid *g, Matrix *m);
};

