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
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(241, LEVEL_CASTLE, 1, 17, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 16, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		OBJECT(140, -10916, 348, 6843, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(188, 250, 0, 3241, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(0, -6904, 348, 3135, 0, 0, 0, 0x30000, bhvBobombBuddy),
		OBJECT(187, 1671, 118, -1138, 0, 0, 0, 0x0, bhvButterfly),
		OBJECT(0, -166, 1496, 3845, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -12052, 348, 1222, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -7460, 348, 4537, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -592, 6, 3253, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -11061, 348, 4515, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 1064, 0, 3063, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(137, 1462, 1466, 5904, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(137, 234, 829, -2624, 0, 0, 0, 0x60000, bhvExclamationBox),
		OBJECT(137, -12042, 697, 7610, 0, 0, 0, 0x60000, bhvExclamationBox),
		OBJECT(137, 3242, 474, 5106, 0, 0, 0, 0x60000, bhvExclamationBox),
		OBJECT(207, -9517, 112, 1540, 0, 0, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(207, -1426, 1887, 6265, 0, -180, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(0, -7373, 348, 6403, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 3220, 0, 5133, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -3520, 0, 7326, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(118, -9853, 553, 7357, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -10156, 553, 7357, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -10462, 553, 7363, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -10762, 553, 7353, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -11098, 553, 7347, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -11411, 553, 7350, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(129, -9517, 506, 1538, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -1100, 1496, 3966, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -3676, 3237, 3854, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -2905, 3032, 4787, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -2957, 2763, 4070, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -2224, 2202, 4568, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -4153, 3829, 4149, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(0, -276, 849, 5317, 0, 0, 0, 0x4000000, bhvHiddenRedCoinStar),
		OBJECT(0, -6575, 665, 3148, 0, 0, 0, 0x3000000, bhvHiddenStar),
		OBJECT(137, -4587, 29, 5080, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(137, -4597, 29, 683, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(137, -3344, 29, 4723, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(137, -4434, 29, 2746, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(137, -3000, 29, 1330, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, -522, 0, 5769, 0, 52, 0, 0x490000, bhvMessagePanel),
		OBJECT(124, 723, 0, 2360, 0, -180, 0, 0x120000, bhvMessagePanel),
		OBJECT(120, -2375, 69, 481, 0, 0, 0, 0x0, bhvRecoveryHeart),
		OBJECT(215, 1859, 209, 3049, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -2124, 278, 5382, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 1898, 278, 5069, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 1665, 336, 6726, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -1584, 209, 3703, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -383, 209, 2808, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -582, 6, 5704, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -2087, 1504, 5718, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(0, -32, 487, -891, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, -1663, 4865, 4630, 0, 0, 0, 0x0, bhvStar),
		OBJECT(122, 2342, 190, 9101, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(122, -9517, 1160, 1539, 0, 0, 0, 0x2000000, bhvStar),
		OBJECT(122, -266, 149, 5316, 0, 0, 0, 0x5000000, bhvStar),
		OBJECT(187, -1696, 232, -879, 0, 0, 0, 0x0, bhvTripletButterfly),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 40),
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
