add_executable(cmsis_test cmsis_test.c)

target_link_libraries(cmsis_test PRIVATE pico_stdlib cmsis_core)
pico_add_extra_outputs(cmsis_test)