include (ExternalProject)

set (THIRD_PARTY_DEPS_DIR ${CMAKE_CURRENT_BINARY_DIR}/third-party-deps)
set (THIRD_PARTY_DEPS_INCLUDE_DIR ${THIRD_PARTY_DEPS_DIR}/include)
set (THIRD_PARTY_DEPS_LIB_DIR ${THIRD_PARTY_DEPS_DIR}/lib)

set (JSON_INCLUDE_DIR ${THIRD_PARTY_DEPS_INCLUDE_DIR}/nlohmann)

ExternalProject_Add (nlohmann-json-ep
	PREFIX ${THIRD_PARTY_DEPS_DIR}/nlohmann-json-ep
	URL https://github.com/nlohmann/json/releases/download/v3.8.0/json.hpp
	URL_HASH MD5=3c834c9d8eef63a2fb082e08d14f3b1c
	CONFIGURE_COMMAND ""
	BUILD_COMMAND ""
	INSTALL_COMMAND ${CMAKE_COMMAND} -E copy ${THIRD_PARTY_DEPS_DIR}/nlohmann-json-ep/src/json.hpp ${JSON_INCLUDE_DIR}/json.hpp
	DOWNLOAD_NO_EXTRACT ON
)