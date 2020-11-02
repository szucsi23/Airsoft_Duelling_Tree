//buttons.h
#pragma once

#define NR_OF_PANELS 12

typedef struct {
	bool hit_detected = false;
	bool is_active = false;
	uint8_t nr_of_hits = 0;
}panel_t;

extern panel_t panels[NR_OF_PANELS];

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
