#include "levitate.h"

#include "cfg.h"
#include "text_manager.h"
#include "sm64.h"

#include "game/level_update.h"

void Levitate_onNormal()
{
    if (Config_ButtonAction_LEVITATE == Config_action())
    {
        if (gMarioState->numStars < 100)
            return TextManager_addLine("IMAGINE THIS WORKING", 1);

        gMarioStates->vel[1] = 30.f;
        gMarioStates->action = ACT_JUMP;
    }
}
