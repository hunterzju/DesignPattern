#include "PageMaker.hpp"
#include <cassert>

int main() {
    assert(Database::GetInstance().GetNameByEmail("").empty());
    PageMaker::GetInstance().MakeWelcomePage("zhangsan@inc.com");

    return 0;
}
