struct point {
    int x;
    int y;
};

struct rectangle {
    struct point pt1;
    struct point pt2;
};

int main() {
    
    struct rectangle myrectangle;

    myrectangle.pt1.x = 5;
    myrectangle.pt1.y = 2;

    myrectangle.pt2.x = 10;
    myrectangle.pt1.y = 4;

    return 0;
}