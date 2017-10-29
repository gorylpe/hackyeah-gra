//
// Created by CLion on 28.10.2017.
//

#ifndef GRA_UIMANAGER_H
#define GRA_UIMANAGER_H

#include <SFML/Graphics/Font.hpp>
#include "Object.h"
#include "UIElement.h"
#include "UIState.h"

class UIManager {
    sf::Font *font;
    UIManager();
    UIManager(const UIManager&);

    UIState* currentState;
    UIState* nextState;

public:
    static UIManager& getSingleton();

    sf::Font* getFont(){return font;};

    void handleClick(int x, int y);
    void draw(sf::RenderWindow *window);
    void update();

    void changeState(UIState* newState){nextState = newState;};
};


#endif //GRA_UIMANAGER_H
