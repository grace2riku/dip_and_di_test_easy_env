file(GLOB SOURCES "./*.c" "./*.cpp")

add_library(settingvalue_example STATIC ${SOURCES})
target_include_directories(settingvalue_example PUBLIC ${CMAKE_CURRENT_LIST_DIR} ${PROJECT_SOURCE_DIR}/include/settingvalue_example)
