#include "GuiLogicBridge.h"
#include "Game.h"
#include "sstream"

GuiLogicBridge::GuiLogicBridge()
{
    //ctor
}

//variables
wxStaticText *GuiLogicBridge::HpLabel = 0; //I should be
wxStaticText *GuiLogicBridge::NameLabel = 0; //zero memorying this

int GuiLogicBridge::update(Game *game)
{
    /*Gui Update Block*/
    if (HpLabel != 0) //if HPLabel is not a null pointer
    {
        stringstream ss;
        ss << game->player->getPlayerHP();
        if (HpLabel->GetLabel() != ss) {HpLabel->SetLabel(ss.str());} //updates the HP Label
    }

    if (NameLabel != 0)
    {
        if (NameLabel->GetLabel() != game->player->getPlayerName()) {NameLabel->SetLabel(game->player->getPlayerName());} //updates the name label
    }

    return 0; //Everything is ok
}

GuiLogicBridge::~GuiLogicBridge()
{
    //dtor
}