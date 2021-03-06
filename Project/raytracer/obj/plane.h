#pragma once
#include "object3d.h"

class Plane :
	public Object3D
{
	// H(P) = nP - d =0
	Vec3f normal;
	float d;

public:
	Plane(Vec3f &normal, float d, Material *m); 
	~Plane();
	virtual bool intersect(const Ray &r, Hit &h, float tmin);
	void paint(void);
    void insertIntoGrid(Grid *g, Matrix *m);
};

