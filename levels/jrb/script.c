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
#include "levels/jrb/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_jrb_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _water_yay0SegmentRomStart, _water_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _clouds_skybox_yay0SegmentRomStart, _clouds_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group4_yay0SegmentRomStart, _group4_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART, jrb_geo_000978), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART, jrb_geo_0009B0), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP, jrb_geo_000990), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK, jrb_geo_0009C8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK, jrb_geo_000930), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX, jrb_geo_000960), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR, jrb_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE, jrb_geo_000918), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM, jrb_geo_000948), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, jrb_area_1),
		WARP_NODE(241, LEVEL_CASTLE, 1, 49, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 48, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_JRB, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		OBJECT(140, 406, 1486, 2368, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(188, -6202, 442, -6734, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, 6135, -8, 3468, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT_WITH_ACTS(0, -228, -1296, -3854, 0, 0, 0, 0x230000, bhvBobombBuddy, ACT_1),
		OBJECT(0, -1053, -1499, -3919, 0, 0, 0, 0x270000, bhvBobombBuddy),
		OBJECT(0, -897, -1499, -3865, 0, 0, 0, 0x240000, bhvBobombBuddy),
		OBJECT_WITH_ACTS(0, -228, -1296, -3854, 0, 0, 0, 0x460000, bhvBobombBuddy, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(129, -1896, 4814, 1020, 0, 0, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -1681, 4814, -1257, 0, 0, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -3267, 4814, -291, 0, -176, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -2499, 4814, -753, 0, 24, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -1697, 4814, -327, 0, 0, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -3216, 3689, 2752, 0, -37, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -3828, 3694, 2415, 0, -70, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -1070, 4814, 1222, 0, -83, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -2605, 3652, 2523, 0, -29, 0, 0x10000, bhvBreakableBox),
		OBJECT(129, -2238, 4814, -324, 0, 41, 0, 0x10000, bhvBreakableBox),
		OBJECT(129, -1525, 4814, 983, 0, 12, 0, 0x10000, bhvBreakableBox),
		OBJECT(129, -3103, 4814, -1154, 0, -17, 0, 0x10000, bhvBreakableBox),
		OBJECT(130, 2495, -8, -5303, 0, 0, 0, 0x0, bhvBreakableBoxSmall),
		OBJECT(187, -2469, 3748, 6156, 0, 0, 0, 0x0, bhvButterfly),
		OBJECT(187, -3072, 4814, -828, 0, 0, 0, 0x0, bhvButterfly),
		OBJECT(187, -1315, 4814, 1096, 0, 0, 0, 0x0, bhvButterfly),
		OBJECT(187, -3498, 3686, 2503, 0, 0, 0, 0x0, bhvButterfly),
		OBJECT(187, -3765, 2552, -2264, 0, 0, 0, 0x0, bhvButterfly),
		OBJECT(187, -1014, 305, -3482, 0, 0, 0, 0x0, bhvButterfly),
		OBJECT(187, 3362, 2057, 3782, 0, 0, 0, 0x0, bhvButterfly),
		OBJECT(187, 3476, 968, -4427, 0, 0, 0, 0x0, bhvButterfly),
		OBJECT(223, -2580, 4814, 114, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(0, 6398, -93, 6512, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 514, 3929, 2583, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1035, 2975, -1579, 0, -111, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -3755, 1636, -3512, 0, -130, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2531, -8, -3881, 0, 24, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 3273, 1346, -6649, 0, -54, 0, 0x0, bhvCoinFormation),
		OBJECT(137, -2162, 4206, 6888, 0, 0, 0, 0x50000, bhvExclamationBox),
		OBJECT(137, -1517, 4206, 5826, 0, 0, 0, 0x50000, bhvExclamationBox),
		OBJECT(137, -1074, 4384, 6886, 0, 0, 0, 0x60000, bhvExclamationBox),
		OBJECT(137, -7843, 1050, -6789, 0, 0, 0, 0x60000, bhvExclamationBox),
		OBJECT(137, -6091, 1590, -4939, 0, -11, 0, 0x60000, bhvExclamationBox),
		OBJECT(137, 3113, 4445, 1361, 0, 0, 0, 0x50000, bhvExclamationBox),
		OBJECT(137, -5323, 1955, -2557, 0, 0, 0, 0x50000, bhvExclamationBox),
		OBJECT(207, 2019, 4108, 5286, 0, -153, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(220, -2843, 4465, 6557, 0, 0, 0, 0x10000, bhvFlyGuy),
		OBJECT(192, 744, 1311, 1412, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(0, 1244, -1227, -5726, 0, 0, 0, 0x40000, bhvGoombaTripletSpawner),
		OBJECT(0, 4875, 643, -5225, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 385, 3581, 6528, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -390, 1311, 2881, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(118, 387, 1311, 1752, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 403, 1311, 2975, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -210, 1311, 2359, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 1038, 1311, 2357, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(129, -2615, 5330, 5109, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -1815, 5130, 5109, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -1615, 4930, 5109, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -1415, 4730, 5109, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -415, 4730, 5109, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -215, 4730, 5109, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -15, 4730, 5109, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 185, 4530, 5109, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 385, 4530, 5109, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -2815, 5530, 5109, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(0, -2252, 5295, 408, 0, 0, 0, 0x0, bhvHiddenRedCoinStar),
		OBJECT(0, -713, 755, -3516, 0, 0, 0, 0x5000000, bhvHiddenStar),
		OBJECT(0, 10, 1795, -1964, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 1529, 2354, -1002, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 2624, 1275, -4546, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, -3283, 3488, -1972, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, -3747, 507, -4664, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(129, 3365, 491, -1117, 0, 0, 0, 0x0, bhvJumpingBox),
		OBJECT(104, -3769, 2552, -2469, 0, 0, 0, 0x10000, bhvKoopa),
		OBJECT(0, -3159, 4814, 915, 0, 0, 0, 0x280000, bhvMessagePanel),
		OBJECT(0, 6587, 76, -2, 0, 90, 0, 0x2e0000, bhvMessagePanel),
		OBJECT(116, 4556, 2104, 5864, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 3401, 2622, 5941, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 3988, 2404, 6073, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -6659, 1165, -5842, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -6173, 1332, -6223, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -5742, 1751, -6159, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -5366, 2102, -5841, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -5460, 2366, -5166, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -5814, 2811, -4874, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -6466, 3004, -5107, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 3371, 1413, 2919, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 4644, -172, -1104, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 3196, -487, -2200, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 1913, -747, -3097, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 423, -1296, -3801, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(100, -1698, -1296, -5869, 0, 0, 0, 0x0, bhvPiranhaPlant),
		OBJECT(100, -1786, -1333, -420, 0, 0, 0, 0x0, bhvPiranhaPlant),
		OBJECT(100, -152, -1333, -387, 0, 0, 0, 0x0, bhvPiranhaPlant),
		OBJECT(100, -74, -1296, -5574, 0, 0, 0, 0x0, bhvPiranhaPlant),
		OBJECT_WITH_ACTS(217, -3947, 3733, 3588, 0, 0, 0, 0x0, bhvPushableMetalBox, ACT_1),
		OBJECT(215, -1896, 4814, 1020, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -1681, 4814, -1257, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -3267, 4814, -291, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -2499, 4814, -753, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -1697, 4814, -327, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -3210, 3689, 2748, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -3823, 3694, 2417, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -1070, 4814, 1222, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(0, 5943, 0, -5, 0, -90, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, -935, -624, 473, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(122, -6679, 3470, -5878, 0, 0, 0, 0x2000000, bhvStar),
		OBJECT(122, -3630, 6070, 4956, 0, 0, 0, 0x3000000, bhvStar),
		OBJECT(23, -1696, -1391, -4096, 0, 0, 0, 0x0, bhvTree),
		OBJECT(23, -2345, -1296, -4265, 0, 0, 0, 0x0, bhvTree),
		OBJECT(23, -1815, -1451, -4969, 0, 0, 0, 0x0, bhvTree),
		OBJECT(23, -2001, -1296, -5521, 0, 0, 0, 0x0, bhvTree),
		OBJECT(23, 102, -1292, -3399, 0, 0, 0, 0x0, bhvTree),
		OBJECT(23, -551, -1448, -5574, 0, 0, 0, 0x0, bhvTree),
		OBJECT(23, 124, -1323, -5094, 0, 0, 0, 0x0, bhvTree),
		OBJECT(23, -1072, -1296, -5954, 0, 0, 0, 0x0, bhvTree),
		OBJECT(187, 6495, -8, -3153, 0, 0, 0, 0x0, bhvTripletButterfly),
		OBJECT_WITH_ACTS(0, -3950, 3829, 3586, 0, 0, 0, 0xa0b0000, bhvWarp, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(107, 6399, -132, 6512, 0, 0, 0, 0x0, bhvWoodenPost),
		OBJECT(107, -4311, 4814, -1142, 0, 0, 0, 0x0, bhvWoodenPost),
		TERRAIN(jrb_area_1_collision),
		MACRO_OBJECTS(jrb_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 42),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, jrb_area_2),
		WARP_NODE(241, LEVEL_CASTLE, 1, 49, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 48, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 2, 0, WARP_NO_CHECKPOINT),
		OBJECT(137, -1256, 1002, -471, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(180, -1997, 1412, -2221, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 943, 823, -1033, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 2350, 2628, -2085, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -108, 0, -2404, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 853, 0, 2326, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 826, 2970, 1254, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(192, 2641, 2467, -1262, 0, 0, 0, 0x0, bhvGoomba),
		OBJECT(0, -2124, 37, -1452, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 2270, 0, 2171, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -275, 0, 1394, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(116, 1023, 1681, 261, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, 1987, 2467, -322, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(120, -2051, 176, 1075, 0, 0, 0, 0x0, bhvRecoveryHeart),
		OBJECT(0, -2718, -6, -30, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, -1089, 4060, 2603, 0, 0, 0, 0x4000000, bhvStar),
		TERRAIN(jrb_area_2_collision),
		MACRO_OBJECTS(jrb_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 46),
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
