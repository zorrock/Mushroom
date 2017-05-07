/**
 *    > Author:            UncP
 *    > Mail:         770778010@qq.com
 *    > Github:    https://www.github.com/UncP/Mushroom
 *    > Created Time:  2017-05-06 22:38:46
**/

#ifndef _UTILITY_UTILITY_HPP_
#define _UTILITY_UTILITY_HPP_

#include <functional>

namespace Mushroom {

class NoCopy {
	public:
		NoCopy() = default;
	private:
		NoCopy(const NoCopy &) = delete;
		NoCopy& operator=(const NoCopy &) = delete;
};

typedef std::function<void()> Task;
typedef std::function<void()> Func;

} // namespace Mushroom

#endif /* _UTILITY_UTILITY_HPP_ */