#include "SonicLogo.hpp"

#define WIDTH 7224
#define HEIGHT 420
#define W 514
#define H 420

SonicLogo::SonicLogo(int x, int y) : Entity(x-W/2, y, WIDTH, HEIGHT){
    setClip("move");

    for (int i = 0; i < 14; i++){
        setRectangulo("move", i*W, 0, W, H);
    }
    rectangle = clipsMovimientos->getRectangulo("move", 0);
}

void SonicLogo::render(){
    Renderer::getInstance().setDrawColor(red, green, blue, 1);

    texture->renderWithMovement(originX, originY, &rectangle);
}
