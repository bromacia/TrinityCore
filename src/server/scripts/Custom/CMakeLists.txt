# Copyright (C) 2008-2013 TrinityCore <http://www.trinitycore.org/>
# U wanna piece of a champ?
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without
# modifications, as long as this notice is preserved.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

set(scripts_STAT_SRCS
  ${scripts_STAT_SRCS}

		Custom/npc_arena_teamTop.cpp
		Custom/Enchant.cpp
		Custom/beast.cpp
		Custom/mmr.cpp
		Custom/Transmogrification.h
		Custom/Transmogrification.cpp
 		Custom/censure.cpp
		Custom/pvp.cpp
		Custom/DuelCD.cpp
  		Custom/npc_info.cpp
		Custom/Professions_NPC.cpp
                Custom/vip.cpp
)

message("  -> Prepared: Custom")
