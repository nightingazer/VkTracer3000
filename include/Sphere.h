//
// Created by alex on 12/15/22.
//

#ifndef VKTRACER3000_SPHERE_H
#define VKTRACER3000_SPHERE_H

#include "Hittable.h"
#include "Material.h"

class Sphere : public Hittable {
public:
  Sphere() = default;
  explicit Sphere(double radius, point3 center, std::shared_ptr<Material> material);
  virtual bool hit(const Ray& r, double minT, double maxT, HitRecord& rec) const override;

private:
  point3 m_Center;
  double m_Radius;
  std::shared_ptr<Material> m_Material;
};


#endif //VKTRACER3000_SPHERE_H
