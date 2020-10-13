#ifndef __STRING_UTILS_H_INCLUDED_
#define __STRING_UTILS_H_INCLUDED_

#include <sstream>
#include <string>

namespace utils {

template <typename T>
using to_string_fn = std::function<std::string(const T& value)>;

template <typename T>
inline std::string to_string(const T& collection, const std::string& separator = ", ")
{
	std::string result;
	for (auto&& i : collection)
		result += i + separator;

	result.erase(result.size() - separator.size());

	return result;
}

template <typename T>
inline std::string to_string(const T& collection, const std::string& separator = ", ",
                             to_string_fn<typename T::value_type> to_str = {})
{
	std::string result;
	for (auto&& i : collection)
		result += to_str(i) + separator;

	result.erase(result.size() - separator.size());

	return result;
}
} // namespace utils

#endif // __STRING_UTILS_H_INCLUDED_