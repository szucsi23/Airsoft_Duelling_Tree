//statemachine.h
#pragma once

typedef enum {
	msSTARTUP,
	msIDLE,
	msGAME,
	msEXIT,
	msERROR
} main_states_t;

void main_statemachine();
