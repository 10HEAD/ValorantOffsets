namespace offsets {
	// global
	uint64_t uworld_state = 0x9005A80; 			// game_base (Pointer: 0x60)
	uint64_t uworld_key = 0x9005AB8;			// game_base
	uint64_t g_object_state = 0x8E73980;			// game_base
	uint64_t g_object_key = 0x8E739B8;			// game_base
	uint64_t line_of_sight = 0x49DBE90;			// game_base
	uint64_t bone_matrix = 0x49A7A80;			// game_base
	uint64_t find_object = 0x3360180;			// game_base
	uint64_t process_event = 0x3321F70;			// game_base
	uint64_t skin_changer_decryption = 0x23DCD00;	 	// game_base
	
	// veh deref
	uint64_t pakman_offset = 0x1B6D880;                     // deref_pointer_in_game_space_fn - https://www.unknowncheats.me/forum/valorant/503616-dumping-valorant-perfect-results-easy.html
		
	// world
	uint64_t persistent_level = 0x38;			// world > persistent_level
	uint64_t game_instance = 0x1A0;				// world > game_instance

	// player
	uint64_t localplayers_array = 0x40;			// world > game_instance > localplayers_array
	uint64_t localplayer = 0x40;				// world > game_instance > localplayers_array[0]
	uint64_t player_controller = 0x38;			// world > game_instance > localplayers_array[0] > playercontroller
	uint64_t apawn = 0x460;					// world > game_instance > localplayers_array[0] > playercontroller > apawn									// aactor > apawn

	// vector
	uint64_t root_component = 0x230;			// world > game_instance > localplayers_array[0] > playercontroller > apawn > root_component				// aactor > root_component
	uint64_t root_position = 0x164;				// world > game_instance > localplayers_array[0] > playercontroller > apawn > root_component > root_position		// aactor > root_component > position
	
	// controllers
	uint64_t damage_handler = 0x9B0;			// world > game_instance > localplayers_array[0] > playercontroller > apawn > damage_handler			// aactor > damage_controller
	uint64_t camera_controller = 0x440;			// world > game_instance > localplayers_array[0] > playercontroller > camera_controller

	// camera
	uint64_t camera_position = 0x1260;			// world > game_instance > localplayers_array[0] > playercontroller > camera_controller > camera_position
	uint64_t camera_rotation = 0x126C;			// world > game_instance > localplayers_array[0] > playercontroller > camera_controller > camera_rotation
	uint64_t camera_fov = 0x1278;				// world > game_instance > localplayers_array[0] > playercontroller > camera_controller > camera_fov
	uint64_t camera_manager = 0x478;			// world > game_instance > localplayers_array[0] > playercontroller > camera_manager


	// level > actors
	uint64_t actor_array = 0xA0;				// world > persistent_level > actor_array
	uint64_t actors_count = 0xB8;				// world > persistent_level > actors_count

	// level > actors info
	uint64_t actor_id = 0x18;				// world > persistent_level > aactor > actor_id
	uint64_t unique_id = 0x38;				// world > persistent_level > aactor > unique_id
	uint64_t team_component = 0x628;			// world > persistent_level > aactor > player_state > team_component
	uint64_t team_id = 0xF8;				// world > persistent_level > aactor > team_component > team_id
	uint64_t health = 0x1B0;				// world > persistent_level > aactor > damage_controller > health
	uint64_t dormant = 0x100;				// world > persistent_level > aactor > dormant
	uint64_t player_state = 0x3F0;				// world > persistent_level > aactor > player_state

	// mesh
	uint64_t mesh = 0x430;					// world > persistent_level > aactor > mesh
	uint64_t component_to_world = 0x250;			// world > persistent_level > aactor > mesh > component_to_world
	uint64_t bone_array = 0x5C0;				// world > persistent_level > aactor > mesh > bone_array
	uint64_t bone_count = 0x5C8;				// world > persistent_level > aactor > mesh > bone_array + (index * bone_count)
	uint64_t last_submit_time = 0x378;			// world > persistent_level > aactor -> mesh -> last_submit_time
	uint64_t last_render_time = 0x37C;			// world > persistent_level > aactor -> mesh -> last_render_time
	
	// chams / glow chams : method1 - BlackMax97
	uint64_t outline_mode = 0x330;				// mesh > outline_mode
	uint64_t attach_children = 0x110;			// mesh > attach_children
	uint64_t attach_children_count = 0x118;			// mesh > attach_children + 0x8
	
	// chams / glow chams : method2 - unknownjunks
	uint64_t outline_component = 0x10e8;			// actor > outline_component3p
	uint64_t outline_mode = 0x2B1;				// outline_component3p > outline_mode
	
	// chams / glow chams colors
	uint64_t outline_ally_color = 0x8F1F120;		// game_base
	uint64_t outline_enemy_color = 0x8F20A00;		// game_base
	
	// minimap
	uint64_t portrait_minimap_component = 0x10c0;		// actor > portrait_minimap_component
	uint64_t character_minimap_component = 0x10c8;		// actor > character_minimap_component
	uint64_t local_observer = 0x530;			// minimap_component > local_observer
	uint64_t is_visible = 0x501;				// minimap_component > is_visible
}
