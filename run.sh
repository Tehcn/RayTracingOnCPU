echo "Compiling main.cpp..."
g++ main.cpp -o main
clear
echo "Running main and outputting to image.ppm"
./main > image.ppm
clear
echo "Converting image.ppm to image.png"
convert image.ppm image.png
clear
echo "Done"