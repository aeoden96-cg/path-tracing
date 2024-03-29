//
// Created by mateo on 28.7.22.
//

#ifndef PROJECT_SPHERE_H
#define PROJECT_SPHERE_H

#include "hittable_list.h"


class sphere : public hittable {
public:
    sphere() {}
    sphere(point3 cen, double r) : center(cen), radius(r) {};
    sphere(point3 cen, double r, shared_ptr<material> m)
            : center(cen), radius(r), mat_ptr(m) {};

    virtual bool hit(
            const ray& r, double t_min, double t_max, hit_record& rec) const override;

    virtual bool bounding_box(double time0, double time1, aabb& output_box) const override;

    static void get_sphere_uv(const point3& p, double& u, double& v);

public:
    point3 center;
    double radius;
    shared_ptr<material> mat_ptr;
};




#endif //PROJECT_SPHERE_H
