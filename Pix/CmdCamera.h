#pragma once

#include "Command.h"

class CmdSetCameraPosition : public Command
{
public:
	const char* GetName() override
	{
		return "SetCameraPosition";
	}
	const char* GetDescription() override
	{
		return "SetCameraPosition\n"
			"\n"
			"- sets the camera position in the given parameters\n";
	}
	bool Execute(const std::vector<std::string>& params) override;
};

class CmdSetCameraDirection : public Command
{
public:
	const char* GetName() override
	{
		return "SetCameraDirection";
	}
	const char* GetDescription() override
	{
		return "SetCameraDirection\n"
			"\n"
			"- sets the camera direction in the given parameters\n";
	}
	bool Execute(const std::vector<std::string>& params) override;
};

class CmdSetCameraNearPlane : public Command
{
public:
	const char* GetName() override
	{
		return "SetCameraNearPlane";
	}
	const char* GetDescription() override
	{
		return "SetCameraNearPlane\n"
			"\n"
			"- sets the camera near the plane\n";
	}
	bool Execute(const std::vector<std::string>& params) override;
};

class CmdSetCameraFarPlane : public Command
{
public:
	const char* GetName() override
	{
		return "SetCameraFarPlane";
	}
	const char* GetDescription() override
	{
		return "SetCameraFarPlane\n"
			"\n"
			"- sets the camera far from the plane\n";
	}
	bool Execute(const std::vector<std::string>& params) override;
};

class CmdSetCameraFov : public Command
{
public:
	const char* GetName() override
	{
		return "SetCameraFov";
	}
	const char* GetDescription() override
	{
		return "SetCameraFov\n"
			"\n"
			"- sets the camera fov\n";
	}
	bool Execute(const std::vector<std::string>& params) override;
};