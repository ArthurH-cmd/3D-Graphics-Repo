#pragma once
#include "Command.h"

class CmdSetCullMode : public Command
{
public:
	const char* GetName() override
	{
		return "SetCullMode";
	}
	const char* GetDescription() override
	{
		return "SetCullMode(mode)\n"
			"\n"
			"- sets the cull mode to none, back or front\n";
	}
	bool Execute(const std::vector<std::string>& params) override;
};