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
