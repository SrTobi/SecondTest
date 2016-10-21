#include <iostream>
#include <vector>

struct Bla {
    int x, y;
};



constexpr int length(const char* str) {
    const char* i = str;
    while(*i) ++i;
    return i - str;
}


constexpr void setbla(Bla& b) {
    b.y = 3;
}

constexpr int test() {
    Bla bb{8, 8};
    setbla(bb);
    return bb.y;
}

int main()
{
    static_assert(length("test") > 3, "has to be > 3");
    static_assert(test() == 3, "should be 3");

    std::cout << length("test") << std::endl;

    std::vector<int> xxxx = {
        1, 2
    };

    

    std::cout << "Hello world!!" << std::endl;
    return 0;
}
