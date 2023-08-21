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
#include "levels/bitdw/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bitdw_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bidw_skybox_yay0SegmentRomStart, _bidw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group11_yay0SegmentRomStart, _group11_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_15), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, geo_bitdw_0003C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, geo_bitdw_0003D8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, geo_bitdw_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, geo_bitdw_000408), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, geo_bitdw_000420), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, geo_bitdw_000438), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, geo_bitdw_000450), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, geo_bitdw_000468), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, geo_bitdw_000480), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, geo_bitdw_000498), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, geo_bitdw_0004B0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, geo_bitdw_0004C8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, geo_bitdw_0004E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, geo_bitdw_0004F8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, geo_bitdw_000510), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_SQUARE_PLATFORM, geo_bitdw_000558), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_SEESAW_PLATFORM, geo_bitdw_000540), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_SLIDING_PLATFORM, geo_bitdw_000528), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_FERRIS_WHEEL_AXLE, geo_bitdw_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_BLUE_PLATFORM, geo_bitdw_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME4, geo_bitdw_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME3, geo_bitdw_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME2, geo_bitdw_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME1, geo_bitdw_0005E8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE, geo_bitdw_000600), 
	LOAD_MODEL_FROM_GEO(22, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bitdw_area_1),
		WARP_NODE(241, LEVEL_CASTLE, 1, 129, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 128, WARP_NO_CHECKPOINT),
		WARP_NODE(13, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(12, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_BITFS, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		OBJECT(202, -1007, 680, -5384, 0, -90, 0, 0x240000, bhvCheckerboardElevatorGroup),
		OBJECT(202, 242, 2108, -6425, 0, -90, 0, 0x7f0000, bhvCheckerboardElevatorGroup),
		OBJECT(0, -2777, 418, -2040, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 83, 1523, -6259, 0, 114, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2336, 774, 1034, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 1267, 3241, -6448, 0, -90, 0, 0xd0000, bhvDeathWarp),
		OBJECT(180, -3633, 418, -368, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -1953, 418, -352, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -3645, 418, -3629, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(144, 2596, 1020, -100, 0, 0, 0, 0x0, bhvFlame),
		OBJECT(144, 2472, 1020, 92, 0, 0, 0, 0x0, bhvFlame),
		OBJECT(144, 3183, 1020, 58, 0, 0, 0, 0x0, bhvFlame),
		OBJECT(144, 3281, 1020, -132, 0, 0, 0, 0x0, bhvFlame),
		OBJECT(207, 2959, 659, 2505, 0, 0, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(220, -452, 2410, -6173, 0, 0, 0, 0x0, bhvFlyGuy),
		OBJECT(220, 1217, 2363, -5589, 0, 0, 0, 0x10000, bhvFlyGuy),
		OBJECT(192, 2731, 1011, -5169, 0, 0, 0, 0x0, bhvGoomba),
		OBJECT(0, -2486, -611, -5466, 0, 0, 0, 0x50000, bhvGoombaTripletSpawner),
		OBJECT(0, 585, -611, -3563, 0, 0, 0, 0x50000, bhvGoombaTripletSpawner),
		OBJECT(0, 843, -611, 986, 0, 0, 0, 0x50000, bhvGoombaTripletSpawner),
		OBJECT(0, 1024, -611, 4276, 0, 0, 0, 0x50000, bhvGoombaTripletSpawner),
		OBJECT(0, -2824, 418, -1945, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(129, 1943, 1005, -1590, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2143, 1005, -1590, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2134, 574, 193, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2134, 574, 393, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2057, 660, 1894, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2257, 660, 2094, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 743, 1050, -1590, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 543, 1050, -1590, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(124, 3410, 3805, 1037, 0, -90, 0, 0x300000, bhvMessagePanel),
		OBJECT(100, 2024, -640, 2808, 0, 0, 0, 0x0, bhvPiranhaPlant),
		OBJECT(100, -532, -640, -1604, 0, 0, 0, 0x0, bhvPiranhaPlant),
		OBJECT(100, 2568, -640, -5708, 0, 0, 0, 0x0, bhvPiranhaPlant),
		OBJECT(100, -1236, -640, -4935, 0, 0, 0, 0x0, bhvPiranhaPlant),
		OBJECT(217, -1889, 418, -3651, 0, 0, 0, 0x0, bhvPushableMetalBox),
		OBJECT(120, 748, 220, 5363, 0, 0, 0, 0x0, bhvRecoveryHeart),
		OBJECT(0, 1490, 1107, 5842, 0, -180, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, -257, 3259, 6151, 0, 0, 0, 0x80c0000, bhvWarp),
		OBJECT(22, 1671, 3241, -6455, 0, 0, 0, 0xb0000, bhvWarpPipe),
		TERRAIN(bitdw_area_1_collision),
		SHOW_DIALOG(0, 0x32),
		MACRO_OBJECTS(bitdw_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 49),
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
