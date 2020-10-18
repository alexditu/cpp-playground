add_library (jsonutils json_utils.cpp)

target_include_directories (jsonutils PUBLIC include)

add_dependencies (jsonutils nlohmann-json-ep)