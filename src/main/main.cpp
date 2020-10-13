#include <iostream>

#include <log-utils.h>
#include <string-utils.h>
#include <deque>

struct CustomTask {
	std::string id;
	std::string value;
};

int main()
{
	utils::config_logger();

	spdlog::debug("hello");

	std::deque<CustomTask> q;

	q.push_back({"aaa", "x"});
	q.push_back({"bbb", "x"});
	q.push_back({"aaa", "x"});

	spdlog::debug("q: {}", utils::to_string(q, ", ", [](const CustomTask& t) {
		              return "id: " + t.id + ", value: " + t.value;
	              }));

	return 0;
}