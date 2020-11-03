//buttons.h
#pragma once

#include "stdbool.h"
#include "stdint.h"

#define NR_OF_PANELS 12

typedef struct {
	bool hit_detected;
	bool is_active;
	uint8_t nr_of_hits;
}panel_t;

extern panel_t panels[NR_OF_PANELS];

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
