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
#include "levels/vcutm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_vcutm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x07, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
    LOAD_YAY0(        /*seg*/ 0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group14_geoSegmentRomStart,  _group14_geoSegmentRomEnd),
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_VCUTM_SEESAW_PLATFORM, vcutm_geo_0001F0), 
	LOAD_MODEL_FROM_GEO(MODEL_VCUTM_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, vcutm_area_1),
		WARP_NODE(241, LEVEL_CASTLE, 1, 113, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 112, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		OBJECT(85, -327, 1091, -10971, 0, 0, 0, 0x20000, bhvCapSwitch),
		OBJECT(0, 1774, 38, 7595, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(137, -3517, 108, 7993, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(207, 2531, 5335, -9278, 0, 0, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(192, -2974, 38, -7422, 0, 0, 0, 0x0, bhvGoomba),
		OBJECT(192, 3173, 38, 45, 0, 0, 0, 0x0, bhvGoomba),
		OBJECT(192, -3158, 38, 3887, 0, 0, 0, 0x0, bhvGoomba),
		OBJECT(129, -202, 5268, -9332, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -2, 5268, -9332, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(104, -300, 0, 8000, 0, 0, 0, 0x20000, bhvKoopa),
		OBJECT(0, 614, 1091, -11822, 0, 0, 0, 0x0, bhvKoopaRaceEndpoint),
		OBJECT(124, 3461, 95, 4314, 0, -180, 0, 0x4b0000, bhvMessagePanel),
		OBJECT(124, -2946, 5751, -9757, 0, 45, 0, 0x4d0000, bhvMessagePanel),
		OBJECT(0, 0, 500, 9000, 0, -180, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, 3258, 999, 8393, 0, 0, 0, 0x1000000, bhvStar),
		TERRAIN(vcutm_area_1_collision),
		MACRO_OBJECTS(vcutm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 41),
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
