#ifndef __HIGHPRECISION_H__
#define __HIGHPRECISION_H__

#include <string>

class HighPrecision {
public:
	static std::string add(const std::string & lhs, const std::string & rhs);
	static std::string multiple(const std::string & lhs, const std::string & rhs);
	static std::string factorial(int n);
};

#endif // __HIGHPRECISION_H__
