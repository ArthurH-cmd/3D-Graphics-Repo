#pragma once

#include "Command.h"

class CmdSetLightAmbient : public Command
{
public:
	const char* GetName() override
	{
		return "SetLightAmbient";
	}
	const char* GetDescription() override
	{
		return "Set the ambient color of the light. Usage: SetLightAmbient r g b a";
	}
	bool Execute(const std::vector<std::string>& params) override;
};

class CmdSetLightDiffuse : public Command
{
public:
	const char* GetName() override
	{
		return "SetLightDiffuse";
	}
	const char* GetDescription() override
	{
		return "Set the diffuse color of the light. Usage: SetLightDiffuse r g b a";
	}
	bool Execute(const std::vector<std::string>& params) override;
};

class CmdSetLightSpecular : public Command
{
public:
	const char* GetName() override
	{
		return "SetLightSpecular";
	}
	const char* GetDescription() override
	{
		return "Set the specular color of the light. Usage: SetLightSpecular r g b a";
	}
	bool Execute(const std::vector<std::string>& params) override;
};

class CmdSetDirectionalLight : public Command
{
public:
	const char* GetName() override
	{
		return "SetDirectionalLight";
	}
	const char* GetDescription() override
	{
		return "Add a directional light. Usage: SetDirectionalLight x y z";
	}
	bool Execute(const std::vector<std::string>& params) override;
};

class CmdAddPointLight : public Command
{
public:
	const char* GetName() override
	{
		return "AddPointLight";
	}
	const char* GetDescription() override
	{
		return "Add a point light. Usage: AddPointLight x y z";
	}
	bool Execute(const std::vector<std::string>& params) override;
};

class CmdAddSpotLight :public Command
{
public:
	const char* GetName() override
	{
		return "AddSpotLight";
	}
	const char* GetDescription() override
	{
		return "AddSpotLight(px, py, pz, dx, dy, dz, <constant>, <linear>, <quadratic>, <angle>, <decay>";
	}
	bool Execute(const std::vector<std::string>& params) override;
};