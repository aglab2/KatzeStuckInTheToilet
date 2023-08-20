#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP, castle_geo_000F18), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND, castle_geo_001530), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND, castle_geo_001548), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE(241, LEVEL_CASTLE, 1, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(129, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(128, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(113, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(112, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(97, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(96, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(81, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(80, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(65, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(64, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(49, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(48, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(33, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(32, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(17, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(16, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(8, LEVEL_BITDW, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(7, LEVEL_VCUTM, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(6, LEVEL_TOTWC, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(5, LEVEL_BBH, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(4, LEVEL_CCM, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(3, LEVEL_JRB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_WF, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(1, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(100, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		OBJECT(0, -3210, 2550, -9590, 0, -162, 0, 0x100000, bhvAirborneStarCollectWarp),
		OBJECT(0, 7584, 2369, -1478, 0, -90, 0, 0x200000, bhvAirborneStarCollectWarp),
		OBJECT(0, -4070, 3201, 3267, 0, 135, 0, 0x300000, bhvAirborneStarCollectWarp),
		OBJECT(0, -1838, 1973, -3769, 0, -120, 0, 0x400000, bhvAirborneStarCollectWarp),
		OBJECT(0, 5350, 1575, -1111, 0, -90, 0, 0x500000, bhvAirborneStarCollectWarp),
		OBJECT(0, 2952, 642, -10677, 0, 24, 0, 0x600000, bhvAirborneStarCollectWarp),
		OBJECT(0, 3044, 2900, 3466, 0, 177, 0, 0x700000, bhvAirborneStarCollectWarp),
		OBJECT(0, -1296, 3152, 460, 0, -45, 0, 0x800000, bhvAirborneStarCollectWarp),
		OBJECT(0, 5011, 570, -1107, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 98, 661, -7784, 0, -24, 0, 0x640000, bhvDeathWarp),
		OBJECT(0, -3210, 2550, -9590, 0, -162, 0, 0x110000, bhvDeathWarp),
		OBJECT(0, 7584, 2369, -1478, 0, -90, 0, 0x210000, bhvDeathWarp),
		OBJECT(0, -4070, 3201, 3267, 0, 135, 0, 0x310000, bhvDeathWarp),
		OBJECT(0, -1838, 1973, -3769, 0, -120, 0, 0x410000, bhvDeathWarp),
		OBJECT(0, 5350, 1575, -1111, 0, -90, 0, 0x510000, bhvDeathWarp),
		OBJECT(0, 2952, 642, -10677, 0, 24, 0, 0x610000, bhvDeathWarp),
		OBJECT(0, 3044, 2900, 3466, 0, 177, 0, 0x710000, bhvDeathWarp),
		OBJECT(0, -1296, 3152, 460, 0, -45, 0, 0x810000, bhvDeathWarp),
		OBJECT(34, 162, 682, -7947, 0, 157, 0, 0x64000000, bhvDoor),
		OBJECT(124, 753, 3318, -207, 0, 175, 0, 0x330000, bhvMessagePanel),
		OBJECT(124, -4113, 4039, 5667, 0, -165, 0, 0x340000, bhvMessagePanel),
		OBJECT(120, -6278, 3797, 3783, 0, 0, 0, 0x0, bhvRecoveryHeart),
		OBJECT(0, 98, 673, -7793, 0, -23, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(208, -932, 2771, 209, 0, 135, 0, 0x1e000000, bhvStarDoor),
		OBJECT(208, -1043, 2771, 99, 0, -45, 0, 0x1e000000, bhvStarDoor),
		OBJECT(0, -3266, 2230, -9245, 0, 0, 0, 0xa010000, bhvWarp),
		OBJECT(0, -4587, 2535, 3727, 0, 0, 0, 0x3f030000, bhvWarp),
		OBJECT(0, 5841, -1844, -1134, 0, 0, 0, 0x1f050000, bhvWarp),
		OBJECT(0, 5841, -1590, -1134, 0, 0, 0, 0x1f050000, bhvWarp),
		OBJECT(0, 2881, 281, -11043, 0, 0, 0, 0x8060000, bhvWarp),
		OBJECT(0, -825, 2811, -5, 0, 0, 0, 0xa080000, bhvWarp),
		OBJECT(22, 7958, 1828, -1469, 0, 0, 0, 0x20000, bhvWarpPipe),
		OBJECT(22, -1592, 1507, -3643, 0, 0, 0, 0x40000, bhvWarpPipe),
		OBJECT(22, 3058, 2382, 3856, 0, 0, 0, 0x70000, bhvWarpPipe),
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 37),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
