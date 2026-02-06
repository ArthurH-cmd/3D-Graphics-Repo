#include "Graphics.h"

#include "Viewport.h"
#include "Clipper.h"
#include "MatrixStacker.h"

void Graphics::NewFrame()
{
	Viewport::Get()->OnNewFrame();
	Clipper::Get()->OnNewFrame();
	MatrixStack::Get()->OnNewFrame();
}