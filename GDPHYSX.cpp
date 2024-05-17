#include "GDPHYSX.h"

using namespace physics;

MyVector::MyVector() : x(0),y(0),z(0){}

MyVector::MyVector(const float _x, const float _y, const float _z): x(_x),y(_y),z(_z) {}

float MyVector::Magnitude()
{
    return sqrtf((this->x * this->x) + (this->y * this->y) + (this->z * this->z));
}
MyVector MyVector::Direction()
{
    return MyVector(this->x/this->Magnitude(), this->y / this->Magnitude(), this->z / this->Magnitude());
}

MyVector MyVector::operator+ (const int n) { return MyVector(this->x + n, this->y + n, this->z + n); }
MyVector MyVector::operator+ (const float f) { return MyVector(this->x + f, this->y + f, this->z + f); }
MyVector MyVector::operator+= (const int num) { return MyVector(this->x += num, this->y += num, this->z += num); }
MyVector MyVector::operator+= (const float f) { return MyVector(this->x += f, this->y += f, this->z += f); }

MyVector MyVector::operator+ (const MyVector v) { return MyVector(this->x + v.x, this->y + v.y, this->z + v.z); }
MyVector MyVector::operator+= (const MyVector v) { return MyVector(this->x += v.x, this->y += v.y, this->z += v.z); }

MyVector MyVector::operator- (const int n) { return MyVector(this->x - n, this->y - n, this->z - n); }
MyVector MyVector::operator- (const float f) { return MyVector(this->x - f, this->y - f, this->z - f); }
MyVector MyVector::operator-= (const int num) { return MyVector(this->x -= num, this->y -= num, this->z -= num); }
MyVector MyVector::operator-= (const float f) { return MyVector(this->x -= f, this->y -= f, this->z -= f); }

MyVector MyVector::operator- (const MyVector v) { return MyVector(this->x - v.x, this->y - v.y, this->z - v.z); }
MyVector MyVector::operator-= (const MyVector v) { return MyVector(this->x -= v.x, this->y -= v.y, this->z -= v.z); }

            //scalar multiplication
MyVector MyVector::operator* (const int n) { return MyVector(this->x * n, this->y * n, this->z * n); }
MyVector MyVector::operator* (const float f) { return MyVector(this->x * f, this->y * f, this->z * f); }
MyVector MyVector::operator*= (const int num) { return MyVector(this->x *= num, this->y *= num, this->z *= num); }
MyVector MyVector::operator*= (const float f) { return MyVector(this->x *= f, this->y *= f, this->z *= f); }

            //component product
MyVector MyVector::operator* (const MyVector v) { return MyVector(this->x * v.x, this->y * v.y, this->z * v.z); }
MyVector MyVector::operator*= (const MyVector v) { return MyVector(this->x *= v.x, this->y *= v.y, this->z *= v.z); }

MyVector MyVector::operator/ (const int n) { return MyVector(this->x / n, this->y / n, this->z / n); }
MyVector MyVector::operator/ (const float f) { return MyVector(this->x / f, this->y / f, this->z / f); }
MyVector MyVector::operator/= (const int num) { return MyVector(this->x /= num, this->y /= num, this->z /= num); }
MyVector MyVector::operator/= (const float f) { return MyVector(this->x /= f, this->y /= f, this->z /= f); }

MyVector MyVector::operator/ (const MyVector v) { return MyVector(this->x / v.x, this->y / v.y, this->z / v.z); }
MyVector MyVector::operator/= (const MyVector v) { return MyVector(this->x /= v.x, this->y /= v.y, this->z /= v.z); }
            
MyVector::operator glm::vec3() const {return glm::vec3(x,y,z);}

float physics::dotProduct(MyVector A, MyVector B)
{
    return ((A.x * B.x) + (A.y * B.y) + (A.z * B.z));
}

MyVector physics::crossProduct(MyVector A, MyVector B)
{
    return MyVector
    (
        ((A.y * B.z) - (A.z * B.y)),
        ((A.z * B.x) - (A.x * B.z)),
        ((A.x * B.y) - (A.y * B.x))
    );
}

