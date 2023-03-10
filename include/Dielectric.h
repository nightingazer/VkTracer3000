//
// Created by alex on 1/3/23.
//

#ifndef VKTRACER3000_DIELECTRIC_H
#define VKTRACER3000_DIELECTRIC_H

#include "Material.h"

class Dielectric : public Material {
public:
  explicit Dielectric(float refractionCoefficient);
  Dielectric(float refractionCoefficient, Color albedo);
  virtual bool scatter(const Ray& rayInput, const HitRecord& hitRecord, Color& attenuation, Ray& scattered) const override;

private:
  static float reflectance(float cos, float refractionRatio);

private:
  float m_RefractionCoeff;
  Color m_Albedo;
};


#endif //VKTRACER3000_DIELECTRIC_H
