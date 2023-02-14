/*
** EPITECH PROJECT, 2023
** GAME ENGINE
** File description:
** Object
*/

#ifndef GAME_ENGINE_OBJECT_HPP
    #define GAME_ENGINE_OBJECT_HPP

    #include "Vector2.hpp"

    namespace MalekEngine {

        class Object {
            public:
                Object(Vector2<float> _position = Vector2<float>(0, 0), Vector2<float> _scale = Vector2<float>(1, 1),
                       Vector2<float> _origin = Vector2<float>(0, 0), Vector2<float> _size = Vector2<float>(0, 0)) :
                        _position(_position), _scale(_scale), _origin(_origin), _size(_size) {};
                Object(const Object &src) {
                    _position = src._position;
                    _scale = src._scale;
                    _origin = src._origin;
                    _size = src._size;
                }
                Object &operator=(const Object &src) {
                    _position = src._position;
                    _scale = src._scale;
                    _origin = src._origin;
                    _size = src._size;
                    return *this;
                }
                ~Object() = default;




                // Setters
                inline void SetPosition(const Vector2<float> &position) { _position = position; };
                inline void SetScale(const Vector2<float> &scale) { _scale = scale; };
                inline void SetOrigin(const Vector2<float> &origin) { _origin = origin; };
                inline void SetSize(const Vector2<float> &size) { _size = size; };

                // Getters
                inline Vector2<float> GetPosition(void) const { return _position; };
                inline Vector2<float> GetScale(void) const { return _scale; };
                inline Vector2<float> GetOrigin(void) const { return _origin; };
                inline Vector2<float> GetSize(void) const { return _size; };
            private:
                Vector2<float> _position;
                Vector2<float> _scale;
                Vector2<float> _origin;
                Vector2<float> _size;
        };
    } // MalekEngines

#endif //GAME_ENGINE_OBJECT_HPP
