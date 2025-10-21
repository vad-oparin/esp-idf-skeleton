#include <stdio.h>
#include <inttypes.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_system.h"

static const char *TAG = "TEMPLATE";

void app_main(void)
{
    ESP_LOGI(TAG, "ESP-IDF Skeleton Template initialized");
    ESP_LOGI(TAG, "Free heap: %"PRIu32" bytes", esp_get_free_heap_size());

    // Main application loop
    while (1) {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
