/*
** Malek PROJECT, 2023
** GAME ENGINE
** File description:
** Vector3
*/

#ifndef GAME_ENGINE_VECTOR3_HPP
    #define GAME_ENGINE_VECTOR3_HPP

namespace MalekEngine {
    template<typename T>
    class Vector3 {
    public:
        // Constructors

        /**
         * @brief Construct a new Vector3 object without parameters
         */
        Vector3() {
            _x = 0;
            _y = 0;
            _z = 0;
        };

        /**
         * @brief Construct a new Vector3 object with parameters
         *
         * @param x
         * @param y
         * @param z
         */
        Vector3(T x, T y, T z) {
            _x = x;
            _y = y;
            _z = z;
        };

        /**
         * @brief Construct a new Vector3 object with a Vector3
         *
         * @param src
         */
        Vector3(const Vector3 &src) {
            _x = src._x;
            _y = src._y;
            _z = src._z;
        }

        // Destructor

        /**
         * @brief Destroy the Vector3 object
         */
        ~Vector3() = default;

        // Operators

        /**
         * @brief Operator = of Vector3
         *
         * @param src
         * @return Vector3&
         */
        inline Vector3 &operator=(const Vector3 &src) {
            _x = src._x;
            _y = src._y;
            _z = src._z;
            return *this;
        }

        /**
         * @brief Operator + of Vector3
         *
         * @param src
         * @return Vector3
         */
        inline Vector3 operator+(const Vector3 &src) {
            return Vector3(_x + src._x, _y + src._y, _z + src._z);
        }

        /**
         * @brief Operator - of Vector3
         *
         * @param src
         * @return Vector3
         */
        inline Vector3 operator-(const Vector3 &src) {
            return Vector3(_x - src._x, _y - src._y, _z - src._z);
        }

        /**
         * @brief Operator * of Vector3
         *
         * @param src
         * @return Vector3
         */
        inline Vector3 operator*(const Vector3 &src) {
            return Vector3(_x * src._x, _y * src._y, _z * src._z);
        }

        /**
         * @brief Operator / of Vector3
         *
         * @param src
         * @return Vector3
         */
        inline Vector3 operator/(const Vector3 &src) {
            return Vector3(_x / src._x, _y / src._y, _z / src._z);
        }

        /**
         * @brief Operator += of Vector3
         *
         * @param src
         * @return Vector3&
         */
        inline Vector3 &operator+=(const Vector3 &src) {
            _x += src._x;
            _y += src._y;
            _z += src._z;
            return *this;
        }

        /**
         * @brief Operator -= of Vector3
         *
         * @param src
         * @return Vector3&
         */
        inline Vector3 &operator-=(const Vector3 &src) {
            _x -= src._x;
            _y -= src._y;
            _z -= src._z;
            return *this;
        }

        /**
         * @brief Operator *= of Vector3
         *
         * @param src
         * @return Vector3&
         */
        inline Vector3 &operator*=(const Vector3 &src) {
            _x *= src._x;
            _y *= src._y;
            _z *= src._z;
            return *this;
        }

        /**
         * @brief Operator /= of Vector3
         *
         * @param src
         * @return Vector3&
         */
        inline Vector3 &operator/=(const Vector3 &src) {
            _x /= src._x;
            _y /= src._y;
            _z /= src._z;
            return *this;
        }

        /**
         * @brief Operator == of Vector3
         *
         * @param src
         * @return true
         * @return false
         */
        inline bool operator==(const Vector3 &src) {
            return (_x == src._x && _y == src._y && _z == src._z);
        }

        /**
         * @brief Operator != of Vector3
         *
         * @param src
         * @return true
         * @return false
         */
        inline bool operator!=(const Vector3 &src) {
            return (_x != src._x || _y != src._y || _z != src._z);
        }

        // Methods

        /**
         * @brief Get the X object
         *
         * @return T
         */
        inline T GetX(void) const {
            return _x;
        }

        /**
         * @brief Get the Y object
         *
         * @return T
         */
        inline T GetY(void) const {
            return _y;
        }

        /**
         * @brief Get the Z object
         *
         * @return T
         */
        inline T GetZ(void) const {
            return _z;
        }

        /**
         * @brief Set the X object
         *
         * @param x
         */
        inline void SetX(T x) {
            _x = x;
        }

        /**
         * @brief Set the Y object
         *
         * @param y
         */
        inline void SetY(T y) {
            _y = y;
        }

        /**
         * @brief Set the Z object
         *
         * @param z
         */
        inline void SetZ(T z) {
            _z = z;
        }

        /**
         * @brief Set the X, Y and Z object
         *
         * @param x
         * @param y
         * @param z
         */
        inline void Set(T x, T y, T z) {
            _x = x;
            _y = y;
            _z = z;
        }

        /**
         * @brief Set the X, Y and Z object
         *
         * @param src
         */
        inline void Set(const Vector3 &src) {
            _x = src._x;
            _y = src._y;
            _z = src._z;
        }

        /**
         * @brief Set the X, Y and Z object to zero
         *
         * @param src
         */
        inline void SetZero(void) {
            _x = 0;
            _y = 0;
            _z = 0;
        }

        /**
         * @brief Set the X, Y and Z object to one
         *
         * @param src
         */
        inline void SetOne(void) {
            _x = 1;
            _y = 1;
            _z = 1;
        }

        /**
         * @brief check if the X, Y and Z object are zero
         *
         * @param src
         */
        inline bool IsZero(void) const {
            return (_x == 0 && _y == 0 && _z == 0);
        }

        /**
         * @brief check if the X, Y and Z object are one
         *
         * @param src
         */
        inline bool IsOne(void) const {
            return (_x == 1 && _y == 1 && _z == 1);
        }

        /*
        inline bool IsNormalized(void) const {
            return (Magnitude() == 1);
        }

        inline bool IsNaN(void) const {
            return (std::isnan(_x) || std::isnan(_y) || std::isnan(_z));
        }

        inline bool IsInfinite(void) const {
            return (std::isinf(_x) || std::isinf(_y) || std::isinf(_z));
        }

        inline bool IsFinite(void) const {
            return (std::isfinite(_x) && std::isfinite(_y) && std::isfinite(_z));
        }

        inline T Magnitude(void) const {
            return std::sqrt(_x * _x + _y * _y + _z * _z);
        }

        inline T MagnitudeSquared(void) const {
            return (_x * _x + _y * _y + _z * _z);
        }

        inline Vector3 Normalize(void) const {
            T magnitude = Magnitude();
            return Vector3(_x / magnitude, _y / magnitude, _z / magnitude);
        }

        inline Vector3 Cross(const Vector3 &src) const {
            return Vector3(_y * src._z - _z * src._y, _z * src._x - _x * src._z, _x * src._y - _y * src._x);
        }

        inline T Dot(const Vector3 &src) const {
            return (_x * src._x + _y * src._y + _z * src._z);
        }

        inline Vector3 Lerp(const Vector3 &src, T t) const {
            return Vector3(_x + (src._x - _x) * t, _y + (src._y - _y) * t, _z + (src._z - _z) * t);
        }

        inline Vector3 Slerp(const Vector3 &src, T t) const {
            T dot = Dot(src);
            if (dot < 0) {
                return Lerp(-src, t);
            }
            return Lerp(src, t);
        }

        inline Vector3 Reflect(const Vector3 &src) const {
            return Vector3(_x - 2 * _x * src._x, _y - 2 * _y * src._y, _z - 2 * _z * src._z);
        }

        inline Vector3 Refract(const Vector3 &src, T eta) const {
            T dot = Dot(src);
            T k = 1 - eta * eta * (1 - dot * dot);
            if (k < 0) {
                return Vector3(0, 0, 0);
            }
            return Vector3(eta * _x - (eta * dot + std::sqrt(k)) * src._x, eta * _y - (eta * dot + std::sqrt(k)) * src._y, eta * _z - (eta * dot + std::sqrt(k)) * src._z);
        }

        inline Vector3 Project(const Vector3 &src) const {
            T dot = Dot(src);
            T magnitude = Magnitude();
            return Vector3(dot / magnitude * _x, dot / magnitude * _y, dot / magnitude * _z);
        }

        inline Vector3 ProjectOnPlane(const Vector3 &src) const {
            return Vector3(_x - Dot(src) * src._x, _y - Dot(src) * src._y, _z - Dot(src) * src._z);
        }*/

        /**
         * @brief Rotate the vector around the X axis
         *
         * @param angle
         * @return Vector3
         */
        inline Vector3 Rotate(const Vector3 &src, T angle) const {
            T s = std::sin(angle);
            T c = std::cos(angle);
            return Vector3(_x * (src._x * src._x * (1 - c) + c) + _y * (src._x * src._y * (1 - c) - src._z * s) +
                           _z * (src._x * src._z * (1 - c) + src._y * s),
                           _x * (src._y * src._x * (1 - c) + src._z * s) + _y * (src._y * src._y * (1 - c) + c) +
                           _z * (src._y * src._z * (1 - c) - src._x * s),
                           _x * (src._z * src._x * (1 - c) - src._y * s) +
                           _y * (src._z * src._y * (1 - c) + src._x * s) + _z * (src._z * src._z * (1 - c) + c));
        }

        /**
         * @brief Rotate the vector around the X axis
         *
         * @param angle
         * @return Vector3
         */
        inline Vector3 RotateAround(const Vector3 &src, const Vector3 &point, T angle) const {
            return Vector3(_x - point._x, _y - point._y, _z - point._z).Rotate(src, angle) +
                   Vector3(point._x, point._y, point._z);
        }

        /*inline Vector3 MoveTowards(const Vector3 &src, T maxDistanceDelta) const {
            T magnitude = Magnitude();
            if (magnitude <= maxDistanceDelta || magnitude == 0) {
                return src;
            }
            return Vector3(_x + (src._x - _x) / magnitude * maxDistanceDelta, _y + (src._y - _y) / magnitude * maxDistanceDelta, _z + (src._z - _z) / magnitude * maxDistanceDelta);
        }*/

        /**
         * @brief Get the angle between two vectors
         *
         * @param src
         * @return T
         */
        inline Vector3 Scale(const Vector3 &src) const {
            return Vector3(_x * src._x, _y * src._y, _z * src._z);
        }

        /*inline Vector3 ClampMagnitude(T maxLength) const {
            T magnitude = Magnitude();
            if (magnitude > maxLength) {
                return Vector3(_x / magnitude * maxLength, _y / magnitude * maxLength, _z / magnitude * maxLength);
            }
            return Vector3(_x, _y, _z);
        }

        inline Vector3 Min(const Vector3 &src) const {
            return Vector3(std::min(_x, src._x), std::min(_y, src._y), std::min(_z, src._z));
        }

        inline Vector3 Max(const Vector3 &src) const {
            return Vector3(std::max(_x, src._x), std::max(_y, src._y), std::max(_z, src._z));
        }

        inline Vector3 SmoothDamp(const Vector3 &src, const Vector3 &current, T smoothTime, T deltaTime) const {
            T x = SmoothDamp(_x, src._x, current._x, smoothTime, deltaTime);
            T y = SmoothDamp(_y, src._y, current._y, smoothTime, deltaTime);
            T z = SmoothDamp(_z, src._z, current._z, smoothTime, deltaTime);
            return Vector3(x, y, z);
        }*/

    private:
        T _x;
        T _y;
        T _z;
    };
}

#endif //GAME_ENGINE_VECTOR3_HPP
