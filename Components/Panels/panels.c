#include "panels.h"

panel_t panels[NR_OF_PANELS];


void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	switch (GPIO_Pin) {
		case GPIO_PIN_4:
			panels[0].hit_detected = true;
			break;
		case GPIO_PIN_5:
			panels[1].hit_detected = true;
			break;
		case GPIO_PIN_6:
			panels[2].hit_detected = true;
			break;
		case GPIO_PIN_7:
			panels[3].hit_detected = true;
			break;
		case GPIO_PIN_8:
			panels[4].hit_detected = true;
			break;
		case GPIO_PIN_9:
			panels[5].hit_detected = true;
			break;
		case GPIO_PIN_10:
			panels[6].hit_detected = true;
			break;
		case GPIO_PIN_11:
			panels[7].hit_detected = true;
			break;
		case GPIO_PIN_12:
			panels[8].hit_detected = true;
			break;
		case GPIO_PIN_13:
			panels[9].hit_detected = true;
			break;
		case GPIO_PIN_14:
			panels[10].hit_detected = true;
			break;
		case GPIO_PIN_15:
			panels[11].hit_detected = true;
			break;
		default:
			break;
	}
}
