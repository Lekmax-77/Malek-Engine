** EPITECH PROJECT, 2023
** GAME ENGINE
** File description:
** Vector4
*/
#ifndef GAME_ENGINE_VECTOR4_HPP
    #define GAME_ENGINE_VECTOR4_HPP

    namespace MalekEngine
    {
        template <typename T>
        class Vector4
        {
            public:
                Vector4() {_x = 0;_y = 0;_z = 0;_w = 0;}
                Vector4(T x, T y, T z, T w) {_x = x;_y = y;_z = z;_w = w;}
                ~Vector4() = default;

                // Getters
                T getX() const {return _x;}
                T getY() const {return _y;}
                T getZ() const {return _z;}
                T getW() const {return _w;}

                // Setters
                void setX(T x) {_x = x;}
                void setY(T y) {_y = y;}
                void setZ(T z) {_z = z;}
                void setW(T w) {_w = w;}

                // Operators
                Vector4 operator+(const Vector4 &other) const {return Vector4(_x + other._x, _y + other._y, _z + other._z, _w + other._w);}
                Vector4 operator-(const Vector4 &other) const {return Vector4(_x - other._x, _y - other._y, _z - other._z, _w - other._w);}
                Vector4 operator*(const Vector4 &other) const {return Vector4(_x * other._x, _y * other._y, _z * other._z, _w * other._w);}
                Vector4 operator/(const Vector4 &other) const {return Vector4(_x / other._x, _y / other._y, _z / other._z, _w / other._w);}
                Vector4 operator+(T other) const {return Vector4(_x + other, _y + other, _z + other, _w + other);}
                Vector4 operator-(T other) const {return Vector4(_x - other, _y - other, _z - other, _w - other);}
                Vector4 operator*(T other) const {return Vector4(_x * other, _y * other, _z * other, _w * other);}
                Vector4 operator/(T other) const {return Vector4(_x / other, _y / other, _z / other, _w / other);}
                Vector4 &operator+=(const Vector4 &other) {_x += other._x;_y += other._y;_z += other._z;_w += other._w;return *this;}
                Vector4 &operator-=(const Vector4 &other) {_x -= other._x;_y -= other._y;_z -= other._z;_w -= other._w;return *this;}
                Vector4 &operator*=(const Vector4 &other) {_x *= other._x;_y *= other._y;_z *= other._z;_w *= other._w;return *this;}
                Vector4 &operator/=(const Vector4 &other) {_x /= other._x;_y /= other._y;_z /= other._z;_w /= other._w;return *this;}
                Vector4 &operator+=(T other) {_x += other;_y += other;_z += other;_w += other;return *this;}
                Vector4 &operator-=(T other) {_x -= other;_y -= other;_z -= other;_w -= other;return *this;}
                Vector4 &operator*=(T other) {_x *= other;_y *= other;_z *= other;_w *= other;return *this;}
                Vector4 &operator/=(T other) {_x /= other;_y /= other;_z /= other;_w /= other;return *this;}
                bool operator==(const Vector4 &other) const {return _x == other._x && _y == other._y && _z == other._z && _w == other._w;}
                bool operator!=(const Vector4 &other) const {return _x != other._x || _y != other._y || _z != other._z || _w != other._w;}
                bool operator<(const Vector4 &other) const {return _x < other._x && _y < other._y && _z < other._z && _w < other._w;}
                bool operator>(const Vector4 &other) const {return _x > other._x && _y > other._y && _z > other._z && _w > other._w;}
                bool operator<=(const Vector4 &other) const {return _x <= other._x && _y <= other._y && _z <= other._z && _w <= other._w;}
                bool operator>=(const Vector4 &other) const {return _x >= other._x && _y >= other._y && _z >= other._z && _w >= other._w;}
                Vector4 &operator=(const Vector4 &other) {_x = other._x;_y = other._y;_z = other._z;_w = other._w;return *this;}
                Vector4 &operator=(T other) {_x = other;_y = other;_z = other;_w = other;return *this;}
                Vector4 operator-() const {return Vector4(-_x, -_y, -_z, -_w);}
                Vector4 operator+() const {return Vector4(_x, _y, _z, _w);}
                T &operator[](int index) {return (&_x)[index];}
                T operator[](int index) const {return (&_x)[index];}

                // Methods
                T length() const {return sqrt(_x * _x + _y * _y + _z * _z + _w * _w);}
                T lengthSquared() const {return _x * _x + _y * _y + _z * _z + _w * _w;}

        private:
            T _x;
            T _y;
            T _z;
            T _w;
        };
    }

#endif //GAME_ENGINE_VECTOR4_HPP
