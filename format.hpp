#pragma once

#include <string>

class format {
public:
	char buffer[2048];
	std::string value;

	template<typename fmt, typename... args>
	format(const fmt& _fmt, args&&... _args) {
		snprintf(buffer, sizeof(buffer), _fmt, _args...);
	}

	friend std::ostream& operator << (std::ostream& _os, const format& _fmt) {
		_os << _fmt.buffer;

		return _os;
	}

	operator const char* () const {
		return this->buffer;
	}

	operator std::string() const {
		return this->buffer;
	}

	operator format() const {
		return *this;
	}
};
