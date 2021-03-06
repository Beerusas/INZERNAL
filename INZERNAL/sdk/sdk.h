#pragma once
//include everything here so no need to include them individually in other files
#include <sdk/AvatarRenderData.h>
#include <sdk/GameLogic.h>
#include <sdk/GameUpdatePacket.h>
#include <sdk/NetAvatar.h>
#include <sdk/world/WorldRenderer.h>
#include <sdk/world/WorldTileMap.h>

class EnetPeer;
namespace sdk {
    GameLogic* gamelogic();
    WorldTileMap* tilemap();
    WorldRenderer* renderer();
    uintptr_t* enetclient(); //TODO: class for enetclient
    EnetPeer* enetpeer();

} // namespace sdk