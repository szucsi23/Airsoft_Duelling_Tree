#include "statemachine.h"
#include "panels.h"

main_states_t msm_state = msSTARTUP;

void main_statemachine(){
	switch (msm_state) {
		case msSTARTUP:
			for (uint8_t i = 0; i < NR_OF_PANELS; ++i) {
				panels[i].hit_detected = false;
				panels[i].is_active = false;
				panels[i].nr_of_hits = 0;
			}

			break;
		case msIDLE:

			break;
		case msGAME:
			for (uint8_t i = 0; i < NR_OF_PANELS; ++i) {
				panels[i].hit_detected = false;
				panels[i].is_active = false;
				panels[i].nr_of_hits = 0;
			}

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
