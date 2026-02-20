cmake_minimum_required(VERSION 3.16)
project(MaschineStudioSDK VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Options
option(BUILD_EXAMPLES "Build example applications" ON)
option(BUILD_TESTS "Build tests" OFF)

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Core library
add_library(maschine_studio_sdk STATIC
    src/maschine/MaschineStudioController.cpp
)

target_include_directories(maschine_studio_sdk PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Platform-specific dependencies
if(APPLE)
    find_library(IOKIT_FRAMEWORK IOKit)
    find_library(COREFOUNDATION_FRAMEWORK CoreFoundation)
    target_link_libraries(maschine_studio_sdk PUBLIC
        ${IOKIT_FRAMEWORK}
        ${COREFOUNDATION_FRAMEWORK}
    )
endif()

# Examples
if(BUILD_EXAMPLES)
    add_executable(example_maschine_studio
        examples/example_maschine_studio.cpp
    )
    target_link_libraries(example_maschine_studio PRIVATE maschine_studio_sdk)
endif()

# Install
install(TARGETS maschine_studio_sdk
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
)

install(DIRECTORY include/ni
    DESTINATION include
)

# Package info
message(STATUS "=== Maschine Studio SDK ===")
message(STATUS "Version: ${PROJECT_VERSION}")
message(STATUS "Build examples: ${BUILD_EXAMPLES}")
message(STATUS "Build tests: ${BUILD_TESTS}")
