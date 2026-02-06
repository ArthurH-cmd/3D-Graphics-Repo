#include "Graphics.h"

#include "Viewport.h"
#include "Clipper.h"
#include "MatrixStacker.h"
#include "Camera.h"

void Graphics::NewFrame()
{
	Viewport::Get()->OnNewFrame();
	Clipper::Get()->OnNewFrame();
	MatrixStack::Get()->OnNewFrame();
	Camera::Get()->OnNewFrame();
}