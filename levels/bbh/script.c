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
#include "levels/bbh/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bbh_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bbh_skybox_yay0SegmentRomStart, _bbh_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _spooky_yay0SegmentRomStart, _spooky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR, haunted_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP, geo_bbh_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM, geo_bbh_0005E0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF, geo_bbh_000610), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR, geo_bbh_000628), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND, geo_bbh_000640), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB, geo_bbh_000658), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_0_star_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bbh_area_1),
		WARP_NODE(241, LEVEL_CASTLE, 1, 81, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		OBJECT(87, -1235, -159, 5126, 0, 0, 0, 0x0, bhvBigBully),
		OBJECT(87, -1264, -159, 5859, 0, 0, 0, 0x0, bhvBigBully),
		OBJECT(87, -1733, -159, 6504, 0, 0, 0, 0x0, bhvBigBully),
		OBJECT(87, -2530, -159, 6736, 0, 0, 0, 0x0, bhvBigBully),
		OBJECT(87, -3263, -159, 6223, 0, 0, 0, 0x0, bhvBigBully),
		OBJECT(87, -3491, -159, 5205, 0, 0, 0, 0x0, bhvBigBully),
		OBJECT(87, -4159, -159, 4841, 0, 0, 0, 0x0, bhvBigBully),
		OBJECT(87, -4814, -159, 5191, 0, 0, 0, 0x0, bhvBigBully),
		OBJECT(87, -5347, -235, 5477, 0, 0, 0, 0x0, bhvBigBully),
		OBJECT(87, -6172, -235, 5504, 0, 0, 0, 0x0, bhvBigBully),
		OBJECT(140, 8942, -386, 2107, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(188, 6294, 0, 5666, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, 5423, 0, 6225, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, 4707, 0, 7032, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(195, 7630, 1427, 9618, 0, 0, 0, 0x10000, bhvBobombBuddy),
		OBJECT(195, 3825, 266, -1279, 0, 0, 0, 0x20000, bhvBobombBuddy),
		OBJECT(0, 2566, -570, 2288, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2836, -900, 1735, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2717, -1170, 1771, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 3143, -1470, 2411, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2253, -900, 2157, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2633, -1110, 2992, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2050, -810, 2736, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2971, -1170, 2540, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2373, -1080, 2580, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 1981, -690, 2272, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2294, -1170, 2996, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2534, -1170, 1989, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2388, -840, 1988, 0, 0, 0, 0x100000, bhvCoinFormation),
		OBJECT(0, 2948, -1230, 2144, 0, 0, 0, 0x100000, bhvCoinFormation),
		OBJECT(0, 2175, -780, 2649, 0, 0, 0, 0x100000, bhvCoinFormation),
		OBJECT(0, 2500, -780, 2230, 0, 0, 0, 0x100000, bhvCoinFormation),
		OBJECT(0, 2391, -1230, 2394, 0, 0, 0, 0x100000, bhvCoinFormation),
		OBJECT(0, 2755, -660, 2660, 0, 0, 0, 0x100000, bhvCoinFormation),
		OBJECT(0, -643, 0, -2304, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1237, 0, -2310, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(36, 8274, 1427, 9410, 0, 90, 0, 0x32000000, bhvDoor),
		OBJECT(36, -1543, 0, -2960, 0, 90, 0, 0x46000000, bhvDoor),
		OBJECT(0, 11280, 1409, -4209, 0, 0, 0, 0xd0000, bhvExclamationBox),
		OBJECT(137, 5224, 0, 5752, 0, 0, 0, 0xe0000, bhvExclamationBox),
		OBJECT(137, 1352, 210, 9245, 0, 0, 0, 0x50000, bhvExclamationBox),
		OBJECT(137, -2114, 219, -3520, 0, 0, 0, 0x50000, bhvExclamationBox),
		OBJECT(207, 4848, 0, 7662, 0, 0, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(192, 2088, 0, 8957, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(0, -914, 0, 1138, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 7194, -386, -2110, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(118, 8958, -386, -988, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 8958, -386, 471, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 10122, 86, -2703, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 11267, 1218, -4207, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(129, 6059, 0, 7485, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 6509, 210, 7889, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 6628, 600, 8449, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 6918, 990, 8926, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 3972, 999, 7353, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 4534, 781, 7513, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 4540, 375, 7944, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 4849, -189, 8137, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 4537, 163, 8136, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 5390, -190, 7510, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(124, 8567, -386, -1009, 0, -90, 0, 0x100000, bhvMessagePanel),
		OBJECT(124, 8581, -386, 464, 0, -90, 0, 0xf0000, bhvMessagePanel),
		OBJECT(124, 8573, -386, 2118, 0, -90, 0, 0x80000, bhvMessagePanel),
		OBJECT(124, 7344, 1427, 8900, 0, 40, 0, 0x2b0000, bhvMessagePanel),
		OBJECT(116, 10830, 1218, -4602, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 11545, 1218, -3906, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 10459, 1218, -4953, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 3089, 814, -2402, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 1633, 2248, 764, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 1275, 1912, 2781, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -200, 1725, 1419, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -993, 1616, -562, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -1669, 1424, 1514, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 742, 801, 1481, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 2962, 287, 899, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 4049, 266, -358, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 4296, 565, -2165, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(0, 7536, 1542, 10154, 0, -139, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, 1883, 3149, -2376, 0, 0, 0, 0x2000000, bhvStar),
		OBJECT(122, -6590, 87, 5251, 0, 0, 0, 0x3000000, bhvStar),
		OBJECT(122, 3748, 1375, 7353, 0, 0, 0, 0x0, bhvStar),
		TERRAIN(bbh_area_1_collision),
		MACRO_OBJECTS(bbh_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 47),
		TERRAIN_TYPE(TERRAIN_SPOOKY),
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
