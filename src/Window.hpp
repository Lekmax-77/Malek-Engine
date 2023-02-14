/*
** EPITECH PROJECT, 2023
** GAME ENGINE
** File description:
** Window
*/

#ifndef GAME_ENGINE_BUTTON_HPP
    #define GAME_ENGINE_BUTTON_HPP
    #include "Vector2.hpp"

    #include <SFML/Window/Window.hpp>
    #include <string>
namespace MalekEngine {

    class Window {
        public:
            Window(const std::string &title = "New Window" , Vector2<float> _position = Vector2<float>(0, 0), Vector2<float> _size = Vector2<float>(1600, 900)) :
                _title(title), _position(_position), _size(_size) {
                //_window.create(sf::VideoMode(_size.x, _size.y), _title);
            };
            ~Window() = default;

            // Getters
            inline Vector2<float> GetSize(void) const { return _size; };
            inline Vector2<float> GetPosition(void) const { return _position; };

            // Setters
            inline void SetSize(const Vector2<float> &size) { _size = size; };
            inline void SetPosition(const Vector2<float> &position) { _position = position; };

        private:
            Vector2<float> _size;
            Vector2<float> _position;
            std::string _title;
    };
}