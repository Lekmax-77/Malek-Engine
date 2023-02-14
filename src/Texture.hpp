** EPITECH PROJECT, 2023
** GAME ENGINE
** File description:

** Texture
*/

#ifndef GAME_ENGINE_TEXTURE_HPP
    #define GAME_ENGINE_TEXTURE_HPP
    #include "Object.hpp"

    namespace  MalekEngine {
        class Texture : public Object {
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

#endif //GAME_ENGINE_TEXTURE_HPP

