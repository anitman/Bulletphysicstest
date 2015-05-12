// BulletPhysicsTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "btBulletDynamicsCommon.h"

int _tmain(int argc, _TCHAR* argv[])
{
	btBoxShape* box = new btBoxShape(btVector3(1, 1, 1));
	delete box;
	return 0;
}

