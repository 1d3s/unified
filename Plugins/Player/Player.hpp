#pragma once

#include "Plugin.hpp"
#include "Services/Events/Events.hpp"
#include "API/Types.hpp"
#include "API/CNWSPlayer.hpp"

using ArgumentStack = NWNXLib::Services::Events::ArgumentStack;

namespace Player {

class Player : public NWNXLib::Plugin
{
public:
    Player(const Plugin::CreateParams& params);
    virtual ~Player();

private:
    ArgumentStack ForcePlaceableExamineWindow       (ArgumentStack&& args);
    ArgumentStack ForcePlaceableInventoryWindow     (ArgumentStack&& args);
    ArgumentStack StartGuiTimingBar                 (ArgumentStack&& args);
    ArgumentStack StopGuiTimingBar                  (ArgumentStack&& args);
    ArgumentStack SetAlwaysWalk                     (ArgumentStack&& args);
    ArgumentStack GetQuickBarSlot                   (ArgumentStack&& args);
    ArgumentStack SetQuickBarSlot                   (ArgumentStack&& args);
    ArgumentStack GetBicFileName                    (ArgumentStack&& args);
    ArgumentStack ShowVisualEffect                  (ArgumentStack&& args);
    ArgumentStack ChangeBackgroundMusic             (ArgumentStack&& args);
    ArgumentStack PlayBackgroundMusic               (ArgumentStack&& args);
    ArgumentStack ChangeBattleMusic                 (ArgumentStack&& args);
    ArgumentStack PlayBattleMusic                   (ArgumentStack&& args);
    ArgumentStack PlaySound                         (ArgumentStack&& args);
    ArgumentStack SetPlaceableUsable                (ArgumentStack&& args);
    ArgumentStack SetRestDuration                   (ArgumentStack&& args);
    ArgumentStack ApplyInstantVisualEffectToObject  (ArgumentStack&& args);
    ArgumentStack UpdateCharacterSheet              (ArgumentStack&& args);
    ArgumentStack OpenInventory                     (ArgumentStack&& args);

    NWNXLib::API::CNWSPlayer *player(ArgumentStack& args);

};

}
