#pragma once

#include <cmath>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

namespace physics{

    class MyVector
    {
        public: float x,y,z;

        public: 
            MyVector();
            MyVector(const float _x, const float _y, const float _z);

            float Magnitude();
            MyVector Direction();

            MyVector operator+ (const int n);
            MyVector operator+ (const float f);
            MyVector operator+= (const int num);
            MyVector operator+= (const float f);

            MyVector operator+ (const MyVector v);
            MyVector operator+= (const MyVector v);

            MyVector operator- (const int n);
            MyVector operator- (const float f);
            MyVector operator-= (const int num);
            MyVector operator-= (const float f);

            MyVector operator- (const MyVector v);
            MyVector operator-= (const MyVector v);

            //scalar multiplication
            MyVector operator* (const int n);
            MyVector operator* (const float f);
            MyVector operator*= (const int num);
            MyVector operator*= (const float f);

            //component product
            MyVector operator* (const MyVector v);
            MyVector operator*= (const MyVector v);

            MyVector operator/ (const int n);
            MyVector operator/ (const float f);
            MyVector operator/= (const int num);
            MyVector operator/= (const float f);

            MyVector operator/ (const MyVector v);
            MyVector operator/= (const MyVector v);
            
            operator glm::vec3() const;
        
    };

    float dotProduct(MyVector A, MyVector B);
    MyVector crossProduct(MyVector A, MyVector B);

}