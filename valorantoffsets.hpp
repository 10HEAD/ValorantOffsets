namespace offsets {
	// global
	uint64_t uworld_key = 0x87FCD38; 
	uint64_t uworld_state = 0x87FCD00;
	uint64_t line_of_sight = 0x4495DF0;
	uint64_t gobject_state = 0x8657B40;
	uint64_t gobject_key = 0x8657B78;
	uint64_t bone_matrix = 0x445E120;
	
	// world
	uint64_t persistent_level = 0x38;			// world > persistent_level
	uint64_t game_instance = 0x1A8;				// world > game_instance

	// player
	uint64_t localplayers_array = 0x40;			// world > game_instance > localplayers_array
	uint64_t localplayer = 0x40;				// world > game_instance > localplayers_array[0]
	uint64_t player_controller = 0x38;			// world > game_instance > localplayers_array[0] > playercontroller
	uint64_t apawn = 0x460;					// world > game_instance > localplayers_array[0] > playercontroller > apawn									// aactor > apawn

	// vector
	uint64_t root_component = 0x230;			// world > game_instance > localplayers_array[0] > playercontroller > apawn > root_component				// aactor > root_component
	uint64_t position = 0x164;				// world > game_instance > localplayers_array[0] > playercontroller > apawn > root_component > position		// aactor > root_component > position
	uint64_t rotation = 0x170;				// world > game_instance > localplayers_array[0] > playercontroller > apawn > root_component > rotation		// aactor > root_component > rotation
	
	// controllers
	uint64_t damage_controller = 0x9A8;			// world > game_instance > localplayers_array[0] > playercontroller > apawn > damage_controller				// aactor > damage_controller
	uint64_t camera_controller = 0x440;			// world > game_instance > localplayers_array[0] > playercontroller > camera_controller

	// camera
	uint64_t camera_position = 0x1240;			// world > game_instance > localplayers_array[0] > playercontroller > camera_controller > camera_position
	uint64_t camera_rotation = 0x124C;			// world > game_instance > localplayers_array[0] > playercontroller > camera_controller > camera_rotation
	uint64_t camera_fov = 0x1258;				// world > game_instance > localplayers_array[0] > playercontroller > camera_controller > camera_fov
	uint64_t camera_manager = 0x478;			// world > game_instance > localplayers_array[0] > playercontroller > camera_manager


	// level > actors
	uint64_t actor_array = 0xA0;				// world > persistent_level > actor_array
	uint64_t actors_count = 0xB8;				// world > persistent_level > actors_count

	// level > actors info
	uint64_t actor_id = 0x18;				// world > persistent_level > aactor > actor_id
	uint64_t unique_id = 0x38;				// world > persistent_level > aactor > unique_id
	uint64_t team_component = 0x5B0;			// world > persistent_level > aactor > player_state > team_component
	uint64_t team_id = 0xF8;				// world > persistent_level > aactor > team_component > team_id
	uint64_t health = 0x1B0;				// world > persistent_level > aactor > damage_controller > health
	uint64_t dormant = 0x100;				// world > persistent_level > aactor > dormant
	uint64_t player_state = 0x3F0;				// world > persistent_level > aactor > player_state

	// mesh
	uint64_t mesh = 0x430;					// world > persistent_level > aactor > mesh
	uint64_t component_to_world = 0x250;			// world > persistent_level > aactor > mesh > component_to_world
	uint64_t bone_array = 0x558;				// world > persistent_level > aactor > mesh > bone_array
	uint64_t bone_count = 0x560;				// world > persistent_level > aactor > mesh > bone_array + (index * bone_count)
}
