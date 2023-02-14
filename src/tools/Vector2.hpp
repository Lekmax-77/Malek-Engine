/*
** Malek PROJECT, 2023
** GAME ENGINE
** File description:
** Vector2
*/

#ifndef GAME_ENGINE_VECTOR2_HPP_
    #define GAME_ENGINE_VECTOR2_HPP_


namespace MalekEngine {

    template <typename T>
    class Vector2 {
        public:
            // Constructors --------------------------------------------------------------------------------------------

            /**
             * @brief Construct a new Vector2 object without parameters
             *
             * @param
             */
            inline Vector2() {
                _x = 0;
                _y = 0;
            }

            /**
             * @brief Construct a new Vector2 object with parameters
             *
             * @param x
             * @param y
             */
            inline Vector2(T x, T y) {
                _x = x;
                _y = y;
            }

            /**
             * @brief Construct a new Vector2 object with a Vector2
             *
             * @param src
             */
            inline Vector2(const Vector2 &src) {
                _x = src._x;
                _y = src._y;
            }

            // Destructor ----------------------------------------------------------------------------------------------

            /**
             * @brief Destroy the Vector2 object
             *
             */
            ~Vector2() = default;



            // Operators

            /**
             * @brief Copy a Vector2
             *
             * @param src
             * @return Vector2&
             */
            inline Vector2 &operator=(const Vector2 &src) {
                _x = src._x;
                _y = src._y;
                return *this;
            }

            inline Vector2 operator+(const Vector2 &other) const {
                return Vector2(_x + other._x, _y + other._y);
            }
            inline Vector2 operator-(const Vector2 &other) const {
                return Vector2(_x - other._x, _y - other._y);
            }
            inline Vector2 operator*(T product) const {
                return Vector2(_x * product, _y * product);
            }
            inline Vector2 operator/(T quotient) const {
                return Vector2(_x / quotient, _y / quotient);
            }
            inline Vector2 &operator+=(const Vector2 &other) {
                _x += other._x;
                _y += other._y;
                return *this;
            }
            inline Vector2 &operator-=(const Vector2 &other) {
                _x -= other._x;
                _y -= other._y;
                return *this;
            }
            inline Vector2 &operator*=(T product) {
                _x *= product;
                _y *= product;
                return *this;
            }
            inline Vector2 &operator/=(T quotient) {
                _x /= quotient;
                _y /= quotient;
                return *this;
            }
            inline bool operator==(const Vector2 &other) const {
                return _x == other._x && _y == other._y;
            }
            inline bool operator!=(const Vector2 &other) const {
                return _x != other._x || _y != other._y;
            }
            inline static Vector2 Zero() { return {0, 0}; };
            /**
             * @brief Get the One object
             *
             * @return Vector2
             */
            inline static Vector2 One() { return {1, 1}; };
            /**
             * @brief Get the Up object
             *
             * @return Vector2
             */
            inline static Vector2 Up() { return {0, -1}; };
            /**
             * @brief Get the Down object
             *
             * @return Vector2
             */
            inline static Vector2 Down() { return {0, 1}; };
            /**
             * @brief Get the Left object
             *
             * @return Vector2
             */
            inline static Vector2 Left() { return {-1, 0}; };
            /**
             * @brief Get the Right object
             *
             * @return Vector2
             */
            inline static Vector2 Right() { return {1, 0}; };
            /**
             * @brief Get the X object
             *
             * @return T
             */
            inline T GetX(void) const { return _x; };
            /**
             * @brief Get the Y object
             *
             * @return T
             */
            inline T GetY(void) const { return _y; };
            /**
             * @brief Set the X object
             *
             * @param x
             */
            inline void SetX(T x) { _x = x; };
            /**
             * @brief Set the Y object
             *
             * @param y
             */
            inline void SetY(T y) { _y = y; };
        private:
            T _x;
            T _y;

    }; // class Vector2
} // MalekEngine

#endif /* !GAME_ENGINE_VECTOR2_HPP_ */

