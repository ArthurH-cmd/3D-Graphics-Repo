#include "CmdSetFillMode.h"
#include "Rasterizer.h"

bool CmdSetFillMode::Execute(const std::vector<std::string>& params)
{
	// verify we have enough parameters
	if (params.size() < 1)
	{
		return false;
	}

	// determine which fill mode to use
	FillMode fillMode = FillMode::Solid;
	if(params[0] == "wireframe")
	{
		fillMode = FillMode::WireFrame;
	}
	else if(params[0] == "solid")
	{
		fillMode = FillMode::Solid;
	}
	else
	{
		return false;
	}

	// set the fill mode in the rasterizer
	Rasterizer::Get()->SetFillMode(fillMode);
	return true;
}