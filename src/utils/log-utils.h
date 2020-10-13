#ifndef __LOG_UTILS_H_INCLUDED__
#define __LOG_UTILS_H_INCLUDED__

#include <spdlog/spdlog.h>

namespace utils {

inline void config_logger()
{
	spdlog::set_level(spdlog::level::trace);
}

} // namespace utils
#endif