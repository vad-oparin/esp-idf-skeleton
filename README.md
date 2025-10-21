# ESP-IDF Skeleton

Minimal template for all ESP-IDF supported chips using modular structure and best practices.

## Quick Start

### Prerequisites

Install ESP-IDF following the [official guide](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/).

### Build

```bash
# Set target chip (examples: esp32, esp32s2, esp32s3, esp32c3, esp32c6, esp32h2, esp8266)
idf.py set-target <target>

# Build project
idf.py build

# Flash and monitor
idf.py flash monitor
```

### Testing

```bash
# Build and run tests on hardware
idf.py -C test build flash monitor

# Run unit tests without hardware (QEMU simulation)
idf.py -C test qemu monitor
```

Note: QEMU support requires ESP-IDF v5.0+ and is available for specific targets (esp32, esp32c3).

## Project Structure

```
├── main/              # Application entry point
├── components/        # Reusable components (add your own)
├── test/              # Unity tests
├── .vscode/           # VS Code configuration
└── .idea/             # CLion configuration
```

## IDE Setup

### VS Code

1. Install [ESP-IDF extension](https://marketplace.visualstudio.com/items?itemName=espressif.esp-idf-extension)
2. Open project folder
3. The `.vscode/c_cpp_properties.json` provides IntelliSense configuration
4. Use extension commands for build/flash/monitor

### CLion

1. Open project as CMake project
2. Set CMake options: `-DIDF_TARGET=<target>`
3. The `.idea/cmake.xml` provides CMake configuration
4. Use built-in CMake tools for building

## Development Guidelines

### Error Handling

Always wrap ESP-IDF API calls that return `esp_err_t` with `ESP_ERROR_CHECK()`:

```c
esp_err_t ret = nvs_flash_init();
ESP_ERROR_CHECK(ret);
```

### Logging

Use ESP-IDF logging macros with a component tag:

```c
static const char *TAG = "MY_COMPONENT";
ESP_LOGI(TAG, "Initialization complete");
```

## License

Apache License 2.0 - see [LICENSE.md](LICENSE.md)
