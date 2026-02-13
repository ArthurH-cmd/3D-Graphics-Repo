#pragma once
#include "Command.h"

class CmdSetCullMode : public Command
{
public:

	const char* GetName() override 
	{ 
		return "CmdSetCullMode"; 
	}

	const char* GetDescription() override 
	{ 
		return "Set cull mode"; 
	}

	bool Execute(const std::vector<std::string>& params) override;

private:

};

