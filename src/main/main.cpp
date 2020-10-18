#include <iostream>

#include <log-utils.h>
#include <string-utils.h>
#include <deque>

#include <json_utils.h>

struct CustomTask {
	std::string id;
	std::string value;

	bool operator==(const CustomTask& other)
	{
		return id == other.id;
	}
};

int main()
{
	utils::config_logger();

	spdlog::debug("hello");

	auto j = utils::test();

	spdlog::debug("recv j: {}", j.dump());

	return 0;
}