** EPITECH PROJECT, 2023
** GAME ENGINE
** File description:
** Sprite
*/

#ifndef GAME_ENGINE_SPRITE_HPP
    #define GAME_ENGINE_SPRITE_HPP
    #include "Object.hpp"

    namespace  MalekEngine : public Object
    {
        class Sprite {
        public:
            /**
             * @brief Construct a new Sprite object
             *
             */
            Sprite();

            /**
             * @brief Destroy the Sprite object
             *
             */
            ~Sprite();
        };
    }
#endif //GAME_ENGINE_SPRITE_HPP
