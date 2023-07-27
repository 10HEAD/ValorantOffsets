	namespace offsets {
        //cc hook
		const _qword static_find_object = 0x3bba680;
		const _qword call_remote_function = 0x3ba5fe0; //pe

		const _qword bone_matrix = 0x558d060;
		const _qword bypass_skin_changer = 0x2b61c10;

		const _qword set_ares_outline = 0x553c190;

       		 //dx render
        	const _qword game_pointer = NULL;
        	const _qword game_instance = 0x1a0;

        	const _qword u_level = 0x38;
        	const _qword local_players = 0x40;
        	const _qword player_controller = 0x38;
        	const _qword player_state = 0x3f0;

        	const _qword player_camera_manager = 0x478;
        	const _qword my_hud = 0x470;

        	const _qword acknowledged_pawn = 0x460;

        	const _qword team_component = 0x628;
        	const _qword team_id = 0xf8;

        	const _qword unique_id = 0x38;
        	const _qword fname_id = 0x18;

        	const _qword aactor_array = 0xa0;

        	const _qword root_component = 0x230;
        	const _qword relative_location = 0x164;

        	const _qword mesh_component = 0x430;
        	const _qword damage_handler = 0x9f8;

        	const _qword is_dormant = 0x100;
        	const _qword health = 0x1b0;
        	const _qword component_to_world = 0x250;

        	const _qword bone_array = 0x5c8;
        	const _qword bone_array_cache = bone_array + 0x10;
        	const _qword bone_count = bone_array + 0x8;
	}
