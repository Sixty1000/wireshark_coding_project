# SPDX-License-Identifier: GPL-2.0-or-later
# Can build by itself, or as part of the full Wireshark source tree.
cmake_minimum_required(VERSION 3.22)
if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    project(Mineshark VERSION 1.0 LANGUAGES CXX)
    include(CTest)
endif()
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
find_package(Qt6 6.2 REQUIRED COMPONENTS Core Network Widgets Test)
set(MINESHARK_UI "${CMAKE_CURRENT_SOURCE_DIR}/../ui/qt/mineshark")
add_library(mineshark_ui STATIC
    "${MINESHARK_UI}/board.cpp" "${MINESHARK_UI}/board.h"
    "${MINESHARK_UI}/mineshark_dialog.cpp" "${MINESHARK_UI}/mineshark_dialog.h")
target_include_directories(mineshark_ui PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/.." "${MINESHARK_UI}")
target_link_libraries(mineshark_ui PUBLIC Qt6::Widgets Qt6::Network)
if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    add_executable(mineshark-helper helper.cpp)
    target_link_libraries(mineshark-helper PRIVATE Qt6::Core Qt6::Network)
endif()
add_executable(mineshark-demo demo/main.cpp)
target_link_libraries(mineshark-demo PRIVATE mineshark_ui)
add_executable(mineshark-tests tests/test_mineshark.cpp)
target_include_directories(mineshark-tests PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(mineshark-tests PRIVATE mineshark_ui Qt6::Test)
if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    add_test(NAME mineshark-unit COMMAND mineshark-tests)
    set_tests_properties(mineshark-unit PROPERTIES ENVIRONMENT "QT_QPA_PLATFORM=offscreen")
else()
    add_custom_target(check-mineshark
        COMMAND ${CMAKE_COMMAND} -E env QT_QPA_PLATFORM=offscreen $<TARGET_FILE:mineshark-tests>
        DEPENDS mineshark-tests)
endif()
