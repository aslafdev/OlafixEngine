add_executable(sandbox src/Sandbox.cpp)


target_link_libraries(sandbox PRIVATE engine)


add_custom_command(TARGET sandbox POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:engine>
        $<TARGET_FILE_DIR:sandbox>
)




