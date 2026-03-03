#pragma once

#include <XEngine.h>
#include "Vertex.h"

enum class FillMode
{
	WireFrame,
	Solid
};

enum class ShadeMode
{
	Flat,		// per face lightning
	Gouraud,	// per vertex lightning
	Phong		// per pixel lightning
};

class Rasterizer
{
public:
	static Rasterizer* Get();

public:
	void SetColor(X::Color color);

	void SetFillMode(FillMode fillMode);

	void DrawPoint(int x, int y);

	void DrawPoint(const Vertex& vertex);
	void DrawLine(const Vertex& a, const Vertex& b);
	void DrawTriangle(const Vertex& a, const Vertex& b, Vertex& c);

	void SetShadeMode(ShadeMode shadeMode);
	ShadeMode GetShadeMode() const;
private:
	void DrawFilledTriangle(const Vertex& a, const Vertex& b, const Vertex& c);
	X::Color mColor = X::Colors::White;
	FillMode mFillMode = FillMode::Solid;
	ShadeMode mShadeMode = ShadeMode::Phong;
};