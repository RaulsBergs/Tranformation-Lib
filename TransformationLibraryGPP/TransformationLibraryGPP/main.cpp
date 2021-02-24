//Author: Rauls Bergs
//Date: 24/02/2021
#include "Vector3.h"

int main() {
	
	MyVector3 testVec1 = { 0.0f,0.0f,0.0f };
	MyVector3 testVec2 = { 0.0f,0.0f,0.0f };
	MyVector3 testVec3 = { 0.0f,0.0f,0.0f };

	//Test Vector Addition
	testVec1 = { 1.0f,2.0f,1.0f };
	testVec2 = { 3.0f,-2.0,1.0f };

	testVec3 = testVec1 + testVec2;

	std::cout << "Vector Addition :  " << testVec3.toString() << std::endl; 

	std::cout << std::endl;

	//test Vector Subtraction
	testVec1 = { 1.0f,2.0f,1.0f };
	testVec2 = { 6.0f,-6.0,-3.0f };

	testVec3 = testVec1 - testVec2;

	std::cout << "Vector Subtraction :  " << testVec3.toString() << std::endl;

	std::cout << std::endl;

	//test Vector Multiplication
	testVec1 = { 1.0f,2.0f,1.0f };
	float scalar = { 4.0f };

	testVec3 = testVec1 * scalar;

	std::cout << "Vector Multiplication :  " << testVec3.toString() << std::endl;

	std::cout << std::endl;

	//test Vector Division
	testVec1 = { 1.0f,2.0f,5.0f };
	float divisor = { 2.0f };

	testVec3 = testVec1 / divisor;

	std::cout << "Vector Division :  " << testVec3.toString() << std::endl;

	std::cout << std::endl;

	//test Vector Division
	testVec1 = { 4.0f,2.0f,3.5f };
	

	testVec3 = testVec1 / divisor;

	std::cout << "Vector Division :  " << testVec3.toString() << std::endl;

	std::cout << std::endl;

	return 0;
}