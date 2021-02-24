#include "Vector3.h"

const float  PI = 3.14159265358979f;

MyVector3::MyVector3() :
	x{ 0.0 },
	y{ 0.0 },
	z{ 0.0 }
{
}

MyVector3::MyVector3(float t_x, float t_y, float t_z) :
	x{ t_x },
	y{ t_y },
	z{ t_z }
{
}

MyVector3::MyVector3(sf::Vector3f t_sfVector) :
	x{ static_cast<float>(t_sfVector.x) },
	y{ static_cast<float>(t_sfVector.y) },
	z{ static_cast<float>(t_sfVector.z) }
{
}

MyVector3::MyVector3(sf::Vector3i t_sfVector) :
	x{ static_cast<float>(t_sfVector.x) },
	y{ static_cast<float>(t_sfVector.y) },
	z{ static_cast<float>(t_sfVector.z) }
{
}

MyVector3::MyVector3(sf::Vector2i t_sfVector) :
	x{ static_cast<float>(t_sfVector.x) },
	y{ static_cast<float>(t_sfVector.y) },
	z{ 0.0f }
{
}

MyVector3::MyVector3(sf::Vector2u t_sfVector) :
	x{ static_cast<float>(t_sfVector.x) },
	y{ static_cast<float>(t_sfVector.y) },
	z{ 0.0f }
{
}

MyVector3::MyVector3(sf::Vector2f t_sfVector) :
	x{ static_cast<float>(t_sfVector.x) },
	y{ static_cast<float>(t_sfVector.y) },
	z{ 0.0f }
{
}

MyVector3::~MyVector3()
{
}

std::string MyVector3::toString()
{
	const std::string output = "[" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + "]";
	return output;
}

MyVector3 MyVector3::operator+(const MyVector3 t_right) const
{
	return MyVector3{ x + t_right.x, y + t_right.y, z + t_right.z };
}

MyVector3 MyVector3::operator-(const MyVector3 t_right) const
{
	return MyVector3{ x - t_right.x, y - t_right.y, z - t_right.z };
}

MyVector3 MyVector3::operator*(const float t_scalar) const
{
	return MyVector3{ x * t_scalar, y * t_scalar, z * t_scalar };
}

MyVector3 MyVector3::operator/(const float t_divisor) const
{
	if (t_divisor != 0) // never divide by zero 
	{
		return MyVector3{ x / t_divisor, y / t_divisor, z / t_divisor };
	}
	else
	{
		return MyVector3{}; // dividing by zero has no effect according to Pete ??
	}
}

float MyVector3::length() const
{
	const float result = std::sqrtf(x * x + y * y + z * z);
	return result;
}

float MyVector3::lengthSquared() const
{
	const float result = std::powf(x, 2) + std::powf(y, 2) + std::powf(z, 2);
	return result;
}

MyVector3 MyVector3::crossProduct(const MyVector3 t_other) const
{
	const float newX = y * t_other.z - z * t_other.y;
	const float newY = z * t_other.x - x * t_other.z;
	const float newZ = x * t_other.y - y * t_other.x;
	return MyVector3{ newX, newY, newZ };
}

MyVector3 MyVector3::unit() const
{
	MyVector3 unitVector{};
	float vectorLenght = length();
	if (vectorLenght != 0.0)
	{
		const float unitX = x / vectorLenght;
		const float unitY = y / vectorLenght;
		const float unitZ = z / vectorLenght;
		unitVector = { unitX, unitY, unitZ };
	}
	return unitVector;
}