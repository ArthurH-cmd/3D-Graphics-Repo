#pragma once

#include "Command.h"	

class CmdModel : public Command
{
public:
	const char* GetName() override
	{
		return "Model";
	}
	const char* GetDescription() override
	{
		return
			"Model(modelName)\n"
			"\n"
			"- loads a model from the models folder\n"
			"- supported formats: .obj, .fbx, .gltf\n"
			"- example: Model teapot.obj";
	}
	bool Execute(const std::vector<std::string>& params) override;
};