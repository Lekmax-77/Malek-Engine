** EPITECH PROJECT, 2023
** GAME ENGINE
** File description:
** RessourcesManager
*/

#ifndef GAME_ENGINE_RESSOURCESMANAGER_HPP
    #define GAME_ENGINE_RESSOURCESMANAGER_HPP

namespace MalekEngine {
    class ResourcesManager {
    public:
        /**
         * @brief Construct a new Resources Manager object
         *
         */
        ResourcesManager() = default;
        /**
         * @brief Destroy the Resources Manager object
         *
         */
        ~ResourcesManager();
        /**
         * @brief Load a Texture once time for optimisation
         *
         * @param path string to filepath for the texture
         * @return Texture2D&
         */
        Texture2D &LoadTextures(const std::string &path);
        /**
         * @brief Load a Image once time for optimisation
         *
         * @param path string to filepath for the picture
         * @return Image&
         */
        Image &LoadPictures(const std::string &path);
        /**
         * @brief Load a Modzl once time for optimisation
         *
         * @param path string to filepath for the model
         * @return Model&
         */
        Model &LoadModels(const std::string &path);

    protected:
        std::map<const std::string, MalekEngine::Texture> _texture;
        std::map<const std::string, MalekEngine::Sprite> _sprite;
        std::map<const std::string, MalekEngine::Model> _model;
    private:
    };

    static ResourcesManager rManager;
}
#endif //GAME_ENGINE_RESSOURCESMANAGER_HPP
