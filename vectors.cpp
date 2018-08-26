#include <stdio.h>
#include <stdio.lib>

class vec2 {
    public:
        int x;
        int y;

    void add(vec2 v) {
        x += v.x
        y += v.y
    }

    void sub(vec2 v) {
        x -= v.x;
        y -= v.y;
    }

    void mul(vec2 v) {
        x *= v.x;
        y *= v.y;
    }

    void div(vec2 v) {
        x /= v.x;
        y /= v.y;
    }
};

int main (int argc, char** argv) {
    vec2 v1 = {4, 5};
    vec2 v2 = {5, 6};

    v1.add(v2);

    printf("(%i, %i)\n", v1.x, v2.y);

    return 0
}