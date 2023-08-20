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
#include "levels/totwc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_totwc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE, spiky_tree_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, totwc_area_1),
		WARP_NODE(241, LEVEL_CASTLE, 1, 97, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 96, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		OBJECT(129, 150, 5955, -148, 0, 0, 0, 0x30000, bhvBreakableBox),
		OBJECT(129, -150, 5955, -148, 0, 0, 0, 0x30000, bhvBreakableBox),
		OBJECT(129, -150, 5955, 152, 0, 0, 0, 0x30000, bhvBreakableBox),
		OBJECT(129, 150, 5955, 152, 0, 0, 0, 0x30000, bhvBreakableBox),
		OBJECT(128, -5515, 2377, -7656, 0, 0, 0, 0x0, bhvCannon),
		OBJECT(128, -1992, 2549, 8293, 0, 0, 0, 0x0, bhvCannon),
		OBJECT(85, 1115, 2920, 7267, 0, 0, 0, 0x0, bhvCapSwitch),
		OBJECT(0, 1130, 827, 2062, 0, 31, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 3134, 1140, 6064, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(137, -6022, 2685, -7667, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(137, -1991, 2898, 8693, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(137, -500, 1290, 0, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(0, -2429, 672, 4231, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 6658, 1322, -8472, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -1778, 719, -3648, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 0, 1297, 0, 0, 0, 0, 0x0, bhvHiddenRedCoinStar),
		OBJECT(124, 8617, 2575, -13289, 0, 0, 0, 0x480000, bhvMessagePanel),
		OBJECT(116, -5231, 3628, -7234, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(116, -1881, 3628, 7909, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(215, 4892, 3074, -3073, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 1859, 3354, -9673, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -5202, 1967, 1497, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -5755, 941, 3311, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 4507, 961, 1615, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -2575, 2519, 8284, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -5512, 2336, -8161, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 6217, 1069, 9800, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(0, 0, 900, 0, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, 0, 6526, 0, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(27, -2685, 630, -3505, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, 6160, 2097, -12154, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -6391, 1226, 10754, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, 4018, 1912, 9995, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -4994, 1045, -11888, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, 75, 1912, -7082, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -7047, 780, 4484, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, 7314, 865, 1628, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, 753, 2695, 5463, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -1022, 746, 3549, 0, 0, 0, 0x0, bhvTree),
		TERRAIN(totwc_area_1_collision),
		MACRO_OBJECTS(totwc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 38),
		TERRAIN_TYPE(TERRAIN_SAND),
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
