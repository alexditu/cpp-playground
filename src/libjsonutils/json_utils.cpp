#include "json_utils.h"

#include <spdlog/spdlog.h>

namespace utils {

nlohmann::json test()
{
	spdlog::debug("inside json_utils/test()");

	nlohmann::json j {{"key1", "value1"}};

	return j;
}

} // namespace utils