#include <iostream>

#include <log-utils.h>

int main()
{
	utils::config_logger();

	spdlog::debug("hello");

	return 0;
}