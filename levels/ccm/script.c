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
#include "levels/ccm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group16_yay0SegmentRomStart, _group16_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_17), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR, cabin_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE, snow_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT, ccm_geo_0003D0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE, ccm_geo_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD, ccm_geo_00040C), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE, spiky_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ccm_area_1),
		WARP_NODE(241, LEVEL_CASTLE, 1, 65, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 64, WARP_NO_CHECKPOINT),
		WARP_NODE(18, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(17, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(16, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(13, LEVEL_CCM, 4, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(12, LEVEL_CCM, 3, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_CCM, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		OBJECT(0, 8, 0, -5753, 0, 45, 0, 0x110000, bhvAirborneWarp),
		OBJECT(0, 5857, 855, 3069, 0, -90, 0, 0x120000, bhvAirborneWarp),
		OBJECT(0, 5574, 1650, -385, 0, -90, 0, 0x100000, bhvAirborneWarp),
		OBJECT(188, 5048, 0, 2390, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(223, -1374, 0, -4207, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(223, 4927, 0, -472, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(0, -2452, 1692, 514, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1803, 1308, 3588, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(180, -730, 67, 1314, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(0, 3786, 269, -2679, 0, -90, 0, 0x0, bhvFlamethrower),
		OBJECT(207, -2441, 1753, 3825, 0, 90, 0, 0x0, bhvFloorSwitchGrills),
		OBJECT(192, -1280, 0, -3321, 0, 0, 0, 0x0, bhvGoomba),
		OBJECT(0, 4985, 409, 1351, 0, 0, 0, 0x4000000, bhvHiddenRedCoinStar),
		OBJECT(116, -2004, 1372, 575, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -1350, 698, 452, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -770, 225, 67, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(0, 369, 0, 3487, 0, 0, 0, 0x0, bhvOpenableGrill),
		OBJECT(215, 371, 677, 827, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 5731, 450, 3231, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -1910, 23, -5598, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 2719, 23, -5574, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -2163, 23, 1279, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 3410, 206, -2689, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -562, 1080, 2432, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -443, 300, -5116, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(0, 1756, 349, 292, 0, 120, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, -467, 2497, 526, 0, 0, 0, 0x0, bhvStar),
		OBJECT(122, 2470, -667, 1818, 0, 0, 0, 0x3000000, bhvStar),
		OBJECT(0, 6313, 855, 3072, 0, 0, 0, 0x160d0000, bhvWarp),
		OBJECT(0, -447, 81, -6517, 0, 0, 0, 0x290c0000, bhvWarp),
		OBJECT(22, 5870, 1831, -386, 0, 0, 105, 0xb0000, bhvWarpPipe),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 45),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, ccm_area_2),
		WARP_NODE(241, LEVEL_CASTLE, 1, 65, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 64, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_CCM, 1, 16, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 2, 0, WARP_NO_CHECKPOINT),
		OBJECT(0, 188, 630, 1054, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -968, 630, -695, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 1576, 1274, -542, 0, 17, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1601, 1274, 431, 0, 17, 0, 0x0, bhvCoinFormation),
		OBJECT(137, 926, 1171, -758, 0, -25, 0, 0x60000, bhvExclamationBox),
		OBJECT(124, 0, 280, 0, 0, 0, 0, 0x470000, bhvMessagePanel),
		OBJECT(116, -59, 2029, -191, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -64, 2281, -632, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(0, -93, 1200, 3889, 0, -180, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, 12, 2569, -1248, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(24, -1140, 145, -2219, 0, 0, 0, 0x0, bhvTree),
		OBJECT(24, 1559, -83, -2556, 0, 0, 0, 0x0, bhvTree),
		OBJECT(24, 26, -28, -2004, 0, 0, 0, 0x0, bhvTree),
		OBJECT(24, -2517, 86, 195, 0, 0, 0, 0x0, bhvTree),
		OBJECT(24, 2981, 231, 310, 0, 0, 0, 0x0, bhvTree),
		OBJECT(24, 2020, 21, -274, 0, 0, 0, 0x0, bhvTree),
		OBJECT(24, -1241, 159, 4088, 0, 0, 0, 0x0, bhvTree),
		OBJECT(24, -1376, 47, 2398, 0, 0, 0, 0x0, bhvTree),
		OBJECT(24, 1019, 14, 2385, 0, 0, 0, 0x0, bhvTree),
		OBJECT(22, 1262, 153, 4308, 0, 0, 0, 0xb0000, bhvWarpPipe),
		TERRAIN(ccm_area_2_collision),
		MACRO_OBJECTS(ccm_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 44),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, ccm_area_3),
		WARP_NODE(241, LEVEL_CASTLE, 1, 65, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 64, WARP_NO_CHECKPOINT),
		WARP_NODE(12, LEVEL_CCM, 1, 17, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 3, 0, WARP_NO_CHECKPOINT),
		OBJECT(140, -2, 0, 2089, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(0, 1719, 0, 3220, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 4420, 382, 5027, 0, 51, 0, 0x0, bhvCoinFormation),
		OBJECT(137, 3573, 1230, 6623, 0, 0, 0, 0xb0000, bhvExclamationBox),
		OBJECT(137, -1970, 612, 4417, 0, 0, 0, 0x50000, bhvExclamationBox),
		OBJECT(137, -3351, 471, 361, 0, 0, 0, 0x60000, bhvExclamationBox),
		OBJECT(137, 2414, 379, -818, 0, 0, 0, 0x60000, bhvExclamationBox),
		OBJECT(137, -143, -233, 7517, 0, 0, 0, 0x50000, bhvExclamationBox),
		OBJECT(0, -1395, 0, 2137, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -1583, 283, 4722, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(118, 131, 52, 4058, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 1153, -42, 3377, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 1142, 0, 2426, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 289, 0, 2086, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(0, 0, 0, 200, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, -1, 0, -418, 0, 0, 0, 0x1f0c0000, bhvWarp),
		TERRAIN(ccm_area_3_collision),
		MACRO_OBJECTS(ccm_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 43),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, ccm_area_4),
		WARP_NODE(241, LEVEL_CASTLE, 1, 65, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 64, WARP_NO_CHECKPOINT),
		WARP_NODE(13, LEVEL_CCM, 1, 18, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 4, 0, WARP_NO_CHECKPOINT),
		OBJECT(137, 1377, 1146, -1871, 0, -40, 0, 0x0, bhvExclamationBox),
		OBJECT(137, 2226, 1314, 3888, 0, 0, 0, 0x60000, bhvExclamationBox),
		OBJECT(180, 1717, 1115, -1253, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 1666, 1064, 3573, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(0, -1557, 2640, -2884, 0, 0, 0, 0x5000000, bhvHiddenStar),
		OBJECT(137, -1517, 2037, -687, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(137, -1499, 1691, 454, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(137, -983, 2258, 2020, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(137, 1325, 1454, 1934, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(137, 1424, 1208, 458, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 2062, 600, -3562, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, 2058, 690, -3993, 0, 0, 0, 0x1a0d0000, bhvWarp),
		TERRAIN(ccm_area_4_collision),
		MACRO_OBJECTS(ccm_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 45),
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
