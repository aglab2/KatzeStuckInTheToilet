const Collision sa_area_1_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(2873, -3120, 1682),
	COL_VERTEX(-3487, -3120, -2758),
	COL_VERTEX(-3487, -3120, 1682),
	COL_VERTEX(2873, -3120, -2758),
	COL_VERTEX(2873, -2850, -2758),
	COL_VERTEX(-3487, -2850, 1682),
	COL_VERTEX(-3487, -2850, -2758),
	COL_VERTEX(2873, -2850, 1682),
	COL_TRI_INIT( 0, 4),
	COL_TRI(0, 1, 2),
	COL_TRI(1, 0, 3),
	COL_TRI(4, 5, 6),
	COL_TRI(5, 4, 7),
	COL_TRI_STOP(),
	COL_END()
};