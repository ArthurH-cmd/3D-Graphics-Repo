#pragma once
#include "Command.h"

class CmdVarInt : public Command
{
public:
	const char* GetName() override
	{
		return "int";
	}
	const char* GetDescription() override
	{
		return
			"Declares an int variable. Can optionally specify, a drag speed, min, and max"
			"\n"
			"syntax: float $<name> = <value>, <speed>, <min>, <max>\n"
			"\n";
	}
	bool Execute(const std::vector<std::string>& params) override;
};