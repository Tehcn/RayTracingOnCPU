#include <iostream>

#include "color.h"
#include "vec3.h"

int main() {
    // Image
    const int image_width = 256;
    const int image_height = 256;

    // Render
    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for(int j = image_height-1; j >= 0; --j) {
        std::cerr << "\rScanlines remaning: " << j << ' ' << std::flush;
        for(int i = 0; i < image_width; ++i) {
            auto r = double(i) / (image_width - 1);
            auto g = double(j) / (image_height - 1);
            auto b = 0.25;
        }
    }
}