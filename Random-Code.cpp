int space_shuffle(int counter){
	counter++;
}

int directing_trajectory(){
	int x, y;
	//Put what trajectory will describe the space shuffle
	for(int i = 0; i < 257; i++){
		x++;
		y = y + 2;
		plot_in_a_graph();
		motors_move_to_coordinates(x, y);
	} 
	give_control_to_command_center();
}

int validating_password(int code){
	if(code == 20020){
		cout << "Access granted" << endl;
		access_granted = true;
	}
} 
