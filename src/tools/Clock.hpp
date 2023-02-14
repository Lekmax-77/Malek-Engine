/*
** Malek PROJECT, 2023
** GAME ENGINE
** File description:
** CLock
*/

#ifndef GAME_ENGINE_CLOCK_HPP
    #define GAME_ENGINE_CLOCK_HPP
#include <SDL2/SDL.h>
    namespace MalekEngine
    {
        class CLock
        {
            public:
                CLock() : _startTicks(0), _pausedTicks(0), _paused(false), _started(false) {}
                ~CLock() = default;
                void start() {
                    _startTicks = SDL_GetTicks();
                    _pausedTicks = 0;
                    _paused = false;
                    _started = true;}
                void stop() {
                    _startTicks = 0;
                    _pausedTicks = 0;
                    _paused = false;
                    _started = false;}
                void reset() {
                    _startTicks = SDL_GetTicks();
                    _pausedTicks = 0;
                    _paused = false;
                    _started = true;}
                void pause() {
                    if (_started && !_paused) {
                        _paused = true;
                        _pausedTicks = SDL_GetTicks() - _startTicks;
                        _startTicks = 0;
                    }
                }
                void unpause() {
                    if (_started && _paused) {
                        _paused = false;
                        _startTicks = SDL_GetTicks() - _pausedTicks;
                        _pausedTicks = 0;
                    }
                }
                int getTicks() {
                    if (_started) {
                        if (_paused) {
                            return _pausedTicks;
                        } else {
                            return SDL_GetTicks() - _startTicks;
                        }
                    }
                    return 0;
                }
                float getSeconds() {
                    if (_started) {
                        if (_paused) {
                            return _pausedTicks / 1000;
                        } else {
                            return (SDL_GetTicks() - _startTicks) / 1000;
                        }
                    }
                    return 0;
                }
                bool isStarted() { return _started; }
                bool isPaused() { return _paused; }
            private:
                int _startTicks;
                int _pausedTicks;
                bool _paused;
                bool _started;
        };
    }
#endif //GAME_ENGINE_CLOCK_HPP
