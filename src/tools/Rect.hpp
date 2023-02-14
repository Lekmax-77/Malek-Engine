/*
** Malek PROJECT, 2023
** GAME ENGINE
** File description:
** Rect
*/

#ifndef GAME_ENGINE_RECT_HPP
    #define GAME_ENGINE_RECT_HPP
    #include <Vector2.hpp>
    #include <Vector4.hpp>

namespace MalekEngine
{
    template <typename T>
    class Rect
    {
        public:
            Rect() {
                _x = 0;
                _y = 0;
                _width = 0;
                _height = 0;
            }
            Rect(const Rect &src) {
                _x = src._x;
                _y = src._y;
                _width = src._width;
                _height = src._height;
            }
            Rect(T x, T y, T width, T height) : _x(x), _y(y), _width(width), _height(height) {};

            React(const Vector2<T> &position, const Vector2<T> &size) : _x(position.x), _y(position.y), _width(size.x), _height(size.y) {};
            React(const Vector4<T> &rect) : _x(rect.x), _y(rect.y), _width(rect.z), _height(rect.w) {};

            ~Rect() = default;

            // Getters
            inline T GetX(void) const { return _x; };
            inline T GetY(void) const { return _y; };
            inline T GetWidth(void) const { return _width; };
            inline T GetHeight(void) const { return _height; };

            // Setters
            inline void SetX(const T &x) { _x = x; };
            inline void SetY(const T &y) { _y = y; };
            inline void SetWidth(const T &width) { _width = width; };
            inline void SetHeight(const T &height) { _height = height; };

            // Operators
            inline Rect &operator=(const Rect &src) {
                _x = src._x;
                _y = src._y;
                _width = src._width;
                _height = src._height;
                return *this;
            }

            inline bool operator==(const Rect &src) {
                return (_x == src._x && _y == src._y && _width == src._width && _height == src._height);
            }

            inline bool operator!=(const Rect &src) {
                return (_x != src._x || _y != src._y || _width != src._width || _height != src._height);
            }

            inline Rect operator+(const Rect &src) {
                return Rect(_x + src._x, _y + src._y, _width + src._width, _height + src._height);
            }

            inline Rect operator-(const Rect &src) {
                return Rect(_x - src._x, _y - src._y, _width - src._width, _height - src._height);
            }

            inline Rect operator*(const Rect &src) {
                return Rect(_x * src._x, _y * src._y, _width * src._width, _height * src._height);
            }

            inline Rect operator/(const Rect &src) {
                return Rect(_x / src._x, _y / src._y, _width / src._width, _height / src._height);
            }

            inline Rect &operator+=(const Rect &src) {
                _x += src._x;
                _y += src._y;
                _width += src._width;
                _height += src._height;
                return *this;
            }

            inline Rect &operator-=(const Rect &src) {
                _x -= src._x;
                _y -= src._y;
                _width -= src._width;
                _height -= src._height;
                return *this;
            }

            inline Rect &operator*=(const Rect &src) {
                _x *= src._x;
                _y *= src._y;
                _width *= src._width;
                _height *= src._height;
                return *this;
            }

            inline Rect &operator/=(const Rect &src) {
                _x /= src._x;
                _y /= src._y;
                _width /= src._width;
                _height /= src._height;
                return *this;
            }

            inline Rect operator+(const T &src) {
                return Rect(_x + src, _y + src, _width + src, _height + src);
            }

            inline Rect operator-(const T &src) {
                return Rect(_x - src, _y - src, _width - src, _height - src);
            }

            inline Rect operator*(const T &src) {
                return Rect(_x * src, _y * src, _width * src, _height * src);
            }

            inline Rect operator/(const T &src) {
                return Rect(_x / src, _y / src, _width / src, _height / src);
            }

            inline Rect &operator+=(const T &src) {
                _x += src;
                _y += src;
                _width += src;
                _height += src;
                return *this;
            }

            inline Rect &operator-=(const T &src) {
                _x -= src;
                _y -= src;
                _width -= src;
                _height -= src;
                return *this;
            }

            inline Rect &operator*=(const T &src) {
                _x *= src;
                _y *= src;
                _width *= src;
                _height *= src;
                return *this;
            }

            inline Rect &operator/=(const T &src) {
                _x /= src;
                _y /= src;
                _width /= src;
                _height /= src;
                return *this;
            }
        private:
            T _x;
            T _y;
            T _width;
            T _height;
    };
}
#endif //GAME_ENGINE_RECT_HPP
