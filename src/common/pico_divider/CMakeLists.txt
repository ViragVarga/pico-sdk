if (NOT TARGET pico_divider_headers)
    add_library(pico_divider_headers INTERFACE)
    target_include_directories(pico_divider_headers INTERFACE ${CMAKE_CURRENT_LIST_DIR}/include)
    target_link_libraries(pico_divider_headers INTERFACE pico_base_headers)
endif()