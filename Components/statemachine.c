#include "statemachine.h"

main_states_t msm_state = msSTARTUP;

void main_statemachine(){
	switch (msm_state) {
		case msSTARTUP:

			break;
		case msIDLE:

			break;
		case msGAME:

			break;
		case msEXIT:

			break;
		case msERROR:

			break;
		default:
			msm_state = msERROR;
			break;
	}
	return;
}
