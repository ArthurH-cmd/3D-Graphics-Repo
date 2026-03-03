#include "LightManager.h"
#include "MaterialManager.h"	
#include "LightTypes.h"

LightManager* LightManager::Get()
{
	static LightManager instance;
	return &instance;
}

void LightManager::OnNewFrame()
{
	mLights.clear();
	mAmbient = X::Colors::White;
	mDiffuse = X::Colors::White;
	mSpecular = X::Colors::White;

}

void LightManager::SetLightAmbient(const X::Color& color)
{
	mAmbient = color;
}
void LightManager::SetLightDiffuse(const X::Color& color)
{
	mDiffuse = color;
}
void LightManager::SetLightSpecular(const X::Color& color)
{
	mSpecular = color;
}

void LightManager::AddDirectionalLight(const Vector3& direction)
{
	auto light = std::make_unique<DirectionalLight>();
	light->SetDirection(direction);
	light->SetAmbient(mAmbient);
	light->SetDiffuse(mDiffuse);
	light->SetSpecular(mSpecular);
	mLights.push_back(std::move(light));
}
void LightManager::AddPointLight(const Vector3& position, float attenuationConstant, float attenuationLinear, float attenuationQuadratic)
{
	auto light = std::make_unique<PointLight>();
	light->SetPosition(position);
	light->SetAttenuation(attenuationConstant, attenuationLinear, attenuationQuadratic);
	light->SetAmbient(mAmbient);
	light->SetDiffuse(mDiffuse);
	light->SetSpecular(mSpecular);
	mLights.push_back(std::move(light));
}
void LightManager::AddSpotLight(const Vector3& position, const Vector3& direction, float attenuationConstant, float attenuationLinear, float attenuationQuadratic, float angle, float decay)
{
	auto light = std::make_unique<SpotLight>();
	light->SetPosition(position);
	light->SetDirection(direction);
	light->SetAttenuation(attenuationConstant, attenuationLinear, attenuationQuadratic);
	light->SetAngle(angle);
	light->SetDecay(decay);
	light->SetAmbient(mAmbient);
	light->SetDiffuse(mDiffuse);
	light->SetSpecular(mSpecular);
	mLights.push_back(std::move(light));
}

X::Color LightManager::ComputeLightColor(const Vector3& position, const Vector3& normal) const
{
	if (mLights.empty())
	{
		return X::Colors::White;
	}

	X::Color color = MaterialManager::Get()->GetMaterialAmbient();
	for (auto& light : mLights)
	{
		color += light->ComputeLightColor(position, normal);
	}
	return color;
}