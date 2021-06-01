#include "aeroplane.h"
#include <string>

int Aeroplane::get_number_of_passengers() {
	return number_of_passengers;
}
		
float Aeroplane::get_top_speed() {
	return top_speed;
}
		
int Aeroplane::get_number_of_turbines() {
	return number_of_turbines;
}
		
float Aeroplane::get_autonomy() {
	return autonomy_in_kilometers;
}
		
int Aeroplane::get_size() {
	return size_in_meters;
}

std::string Aeroplane::get_name() {
	return name;
}

float Aeroplane::fly() {
    return current_speed = 300;   
}

float Aeroplane::get_current_speed(){
	return current_speed;
}

void Aeroplane::set_current_speed(float speed){
	current_speed  = speed;
	
}

