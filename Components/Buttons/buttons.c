#include "buttons.h"

static void

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	switch (GPIO_Pin) {
		case GPIO_PIN_0:
			break;
		case GPIO_PIN_1:
			break;
		case GPIO_PIN_2:
			break;
		case GPIO_PIN_3:
			break;
		case GPIO_PIN_4:
		case GPIO_PIN_5:
		case GPIO_PIN_6:
		case GPIO_PIN_7:
		case GPIO_PIN_8:
		case GPIO_PIN_9:
			break;
		case GPIO_PIN_10:
		case GPIO_PIN_11:
		case GPIO_PIN_12:
		case GPIO_PIN_13:
		case GPIO_PIN_14:
		case GPIO_PIN_15:
			break;
		default:
			break;
	}
}
