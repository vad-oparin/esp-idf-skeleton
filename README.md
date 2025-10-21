# ESP-IDF Skeleton

Minimal template for ESP32/ESP32-S3/ESP8266 projects using ESP-IDF with modular structure and best practices.

## Quick Start

### Prerequisites

Install ESP-IDF following the [official guide](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/).

### Build

```bash
# Set target chip
idf.py set-target esp32        # or esp32s3, esp8266

# Build project
idf.py build

# Flash and monitor
idf.py flash monitor
```

## Project Structure

```
├── main/              # Application entry point
├── components/        # Reusable components
├── test/              # Unity tests
├── .vscode/           # VS Code configuration
└── .idea/             # CLion configuration
```

## License

Apache License 2.0 - see [LICENSE.md](LICENSE.md)
