#include "MyGame.hpp"

MyGame::MyGame(int scrwidth, int scrheight, std::string title, int style)
    : Game(scrwidth,scrheight,title,style) {
    //Create the game and init them
}

MyGame::~MyGame() {}

void MyGame::update(float deltaTime){
    // Update the game
}

void MyGame::draw(){
    // Draw the game
}

void MyGame::processEvents(){
    sf::Event event;
    while (window.pollEvent(event)) {
        switch (event.type) {
        case sf::Event::Closed:
            window.close();
            break;
            // Add more events to handle them.
        default:
            break;
        }
    }
}
