#ifndef _HITABLE_H
#define _HITABLE_H

#include <vec3.h>
#include <ray.h>


struct hit_record {
    float t;
    vec3 p;
    vec3 normal;
};

class hitable {
    public:
    virtual bool hit(const ray &r, float t_min, float t_max, hit_record& rec) const = 0;
};

#endif