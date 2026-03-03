#pragma once

#include "Light.h"

class DirectionalLight : public Light
{
public:
	X::Color ComputeLightColor(const Vector3& position, const Vector3& normal) override;
	void SetDirection(const Vector3& direction);
private:
	Vector3 mDirection;
};

class PointLight : public Light
{
public:
	X::Color ComputeLightColor(const Vector3& position, const Vector3& normal) override;
	void SetAttenuation(float constant, float linear, float quadratic);
	void SetPosition(const Vector3& position);
private:
	float mAttenuationConstant = 1.0f;
	float mAttenuationLinear = 0.0f;
	float mAttenuationQuadratic = 0.0f;
	Vector3 mPosition;
};

class SpotLight : public Light
{
public:
	X::Color ComputeLightColor(const Vector3& position, const Vector3& normal) override;
	void SetDirection(const Vector3& direction);
	void SetAttenuation(float constant, float linear, float quadratic);
	void SetPosition(const Vector3& position);
	void SetAngle(float angle);
	void SetDecay(float decay);
private:
	Vector3 mDirection;
	Vector3 mPosition;
	float mAttenuationConstant = 1.0f;
	float mAttenuationLinear = 0.0f;
	float mAttenuationQuadratic = 0.0f;
	float mCosAngle = cos(X::Math::kPiByTwo);
	float mDecay = 0.0f;
};