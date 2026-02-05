add_library(engine SHARED
        src/core/Application.cpp
        src/core/Application.h
        src/core/Core.h
        src/core/EntryPoint.h
        src/Olafix.h)


target_compile_definitions(engine PRIVATE BUILD_DLL)

target_include_directories(engine PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
