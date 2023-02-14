/*
** EPITECH PROJECT, 2023
** GAME ENGINE
** File description:
** Button
*/

#ifndef GAME_ENGINE_BUTTON_HPP
    #define GAME_ENGINE_BUTTON_HPP
    #include "Vector2.hpp"

namespace MalekEngine {

    enum class ButtonState {NORMAL,HOVER, PRESSED};

    class Button : public Object
            {
                public:
                Button(){_state = ButtonState::NORMAL;};
                ~Button() = default;

                // Getters
                inline ButtonState GetButtonState(void) const { return _state; };

                // Setters
                inline void SetState(const MalekEngine::ButtonState &state) { _state = state; };

                // Methods
                inline bool IsPressed(void) const { return _state == ButtonState::PRESSED; };
                inline bool IsHover(const Vector2<float> &mousePosition) const {
                    return mousePosition.x >= _position.x && mousePosition.x <= _position.x + _size.x &&
                       mousePosition.y >= _position.y && mousePosition.y <= _position.y + _size.y;
                };
            private:
                MalekEngine::ButtonState _state;
    };

} // MalekEngine

#endif //GAME_ENGINE_BUTTON_HPP
