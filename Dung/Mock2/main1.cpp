#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>

int main()
{
    // Khoi tao thu vien SDL2 va SDL_mixer
    if (SDL_Init(SDL_INIT_AUDIO) < 0)
    {
        std::cerr << "SDL2 ko dc khoi tao: " << SDL_GetError() << std::endl;
        return -1;
    }

    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0)
    {
        std::cerr << "SDL_mixer duoc khoi tao: " << Mix_GetError() << std::endl;
        return -1;
    }

    // Tai
    Mix_Music* music = Mix_LoadMUS("nhac.mp3");
    if (!music)
    {
        std::cerr << "Kko the tao nhac: " << Mix_GetError() << std::endl;
        return -1;
    }

    // Phat
    if (Mix_PlayMusic(music, -1) == -1)
    {
        std::cerr << "Ko the phat nhac: " << Mix_GetError() << std::endl;
        return -1;
    }

    // Doi nhac ket thuc
    while (Mix_PlayingMusic())
    {
        // Xu ly update
    }

    // Free tai nguyen
    Mix_FreeMusic(music);
    Mix_CloseAudio();
    SDL_Quit();

    return 0;
}
