#include <iostream>

int main() {
    int nx = 200;
    int ny = 100;
    std::cout << "P3\n"
              << nx << " " << ny << "\n255\n";
    for (int y = ny - 1; y >= 0; y--) {
        for (int x = 0; x < nx; x++) {
            float red = float(x) / float(nx);
            float green = float(y) / float(ny);
            float blue = 0.2;
            int ir = int(255.99 * red);
            int ig = int(255.99 * green);
            int ib = int(255.99 * blue);
            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }

    return 0;
}