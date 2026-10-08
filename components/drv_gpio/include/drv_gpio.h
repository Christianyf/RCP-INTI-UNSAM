#pragma once

#include "driver/gpio.h"
#include <stdint.h>
#include "esp_err.h"


esp_err_t drv_gpio_init_output(gpio_num_t pin);
esp_err_t drv_gpio_write(gpio_num_t pin, uint32_t level);
