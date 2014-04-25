#include "Resources.hpp"

sf::Texture     Resources::texture;
sf::Font        Resources::font;
sf::SoundBuffer Resources::sound;
sf::Music       Resources::music;
void Resources::load() {
    texture.loadFromFile("resources/test1.png");
    font.loadFromFile("resources/font.ttf");
    sound.loadFromFile("resources/sound.wav"); //sound must be a short audio
    music.openFromFile("resources/music.ogg"); //Im not sure if this a good way to do that :/
}
