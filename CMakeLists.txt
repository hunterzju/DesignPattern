cmake_minimum_required(VERSION 3.2)

project (DesignPattern C CXX)

SET(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/CMakeModules)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# use c++11
if(CMAKE_VERSION VERSION_LESS "3")
  add_definitions(-std=c++11)
else()
  set(CMAKE_CXX_STANDARD 11)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

if (NOT PROJECT_BINARY_DIR)
	set(PROJECT_BINARY_DIR build)
endif()

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/output)
set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/output)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
endif()
message("Build Type " ${CMAKE_BUILD_TYPE})

include_directories(${PROJECT_SOURCE_DIR})

enable_testing()

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
add_subdirectory(01Iterator)
add_subdirectory(02Adaptor1)
add_subdirectory(02Adaptor2)
add_subdirectory(03TemplateMethod)
add_subdirectory(04FactoryMethod)
add_subdirectory(05SingleTon1)
add_subdirectory(05SingleTon2)
add_subdirectory(06Prototype)
add_subdirectory(07Builder)
add_subdirectory(08AbstractFactory)
add_subdirectory(09Bridge)
add_subdirectory(10Strategy)
add_subdirectory(11Composite)
add_subdirectory(12Decorator)
add_subdirectory(13Visitor)
add_subdirectory(14ResponsibilityChain)
add_subdirectory(15Facade)
add_subdirectory(16Mediator)
add_subdirectory(17Observer)
add_subdirectory(18Memento)
add_subdirectory(19State)
add_subdirectory(20FlyWeight)
add_subdirectory(21Proxy)
add_subdirectory(22Command)
add_subdirectory(23Interpreter)
