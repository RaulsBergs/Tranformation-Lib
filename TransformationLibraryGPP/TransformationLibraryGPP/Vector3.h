#include <iostream>
#include <SFML/Graphics.hpp>

class MyVector3
{
public:
	float x;
	float y;
	float z;

	MyVector3();
	~MyVector3();
	std::string toString();

	MyVector3(float x, float y, float z);
	MyVector3(sf::Vector3f t_sfVector); //done
	MyVector3(sf::Vector3i t_sfVector); //done
	MyVector3(sf::Vector2i t_sfVector); //done
	MyVector3(sf::Vector2u t_sfVector); //done
	MyVector3(sf::Vector2f t_sfVector); 


	MyVector3 operator +(const MyVector3 t_right) const; //done
	MyVector3 operator -(const MyVector3 t_right) const; //done
	MyVector3 operator *(const float t_scalar) const; //done
	MyVector3 operator /(const float t_divisor) const; //done

	float length()const; //done
	float lengthSquared()const; //done
	MyVector3 crossProduct(const MyVector3 t_other)const; //done
	MyVector3 unit() const;

	// conversion code will be used in casts
	operator sf::Vector3i() { return sf::Vector3i{ static_cast<int>(x), static_cast<int>(y), static_cast<int>(z) }; }// {2.4,-2.6,3.0} ->  {2,-3,3}
	operator sf::Vector3f() { return sf::Vector3f{ x,y,z }; }// {2.4,-2.6,3.0} ->  {2.4~,-2.6~, 3.0}
	operator sf::Vector2f() { return  sf::Vector2f{ x,y }; } // {2.4,-2.6,3.0} ->  {2.4~,-2.6~}
	operator sf::Vector2i() { return sf::Vector2i{ static_cast<int>(x), static_cast<int>(y) }; }// {2.4,-2.6,3.0} ->  {2,-3}

};
