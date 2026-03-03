#pragma once

#include "Command.h"

class CmdSetShadeMode : public Command
{
public:
	const char* GetName() override
	{
		return "SetShadeMode";
	}
	const char* GetDescription() override
	{
		return
			"SetShadeMode(mode)\n"
			"\n"
			"- sets the shade mode to flat or smooth\n";
	}
	bool Execute(const std::vector<std::string>& params) override;
};