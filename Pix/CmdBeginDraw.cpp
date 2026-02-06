#include "CmdBeginDraw.h"
#include "PrimitivesManager.h"

bool CmdBeginDraw::Execute(const std::vector<std::string>& params)
{
	// verify we have enough parameters
	if (params.size() < 1)
	{
		// test
		return false;
	}

	// confirm which topology to use, return false if topology is not found
	Topology topology = Topology::Point;
	if (params[0] == "point") { topology = Topology::Point; }
	else if (params[0] == "line") { topology = Topology::Line; }
	else if (params[0] == "triangle") { topology = Topology::Triangle; }
	else
	{
		return false;
	}

	// tell primitives manager to start storing data
	return PrimitivesManager::Get()-> BeginDraw(topology);
}