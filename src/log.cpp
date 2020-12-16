#include "log.h"
#include "pch.h"
#include <experimental/source_location>

namespace BlueBerry
{
	//return a shared pointer to a char array containing the string representation of an object
	//should be user overwriten when derived from
	std::shared_ptr<char[]> BB_LOGABLE::to_string()
	{
		size_t size = static_cast<size_t>(snprintf(nullptr, 0, "BB_LOGABLE object at 0x%lX", reinterpret_cast<uint64_t>(this)));
		std::shared_ptr<char[]> buffer = std::make_shared<char[]>(size + 1);
		snprintf(buffer.get(), size, "BB_LOGABLE object at 0x%lX", reinterpret_cast<uint64_t>(this));
		return buffer;
	}
}