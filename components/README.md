# Components

Add your custom ESP-IDF components here.

## Structure

Each component should have:

```
components/
└── my_component/
    ├── CMakeLists.txt
    ├── include/
    │   └── my_component.h
    └── my_component.c
```

## Example CMakeLists.txt

```cmake
idf_component_register(
    SRCS "my_component.c"
    INCLUDE_DIRS "include"
    REQUIRES driver
)
```

## Documentation

See [ESP-IDF Component Documentation](https://docs.espressif.com/projects/esp-idf/en/latest/api-guides/build-system.html#component-cmakelists-files)
