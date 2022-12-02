// Author: Victor De la Luz
// vdelaluz@enesmorelia.unam.mx
// GNU/Linux

#ifndef PARTICLE_H
#define PARTICLE_H

#ifdef __cplusplus
extern "C" {
#endif

  typedef struct{
    double mass;
    double p[3];
    double v[3];
    double F[3];
    int anchored;
  }Particle;

  Particle new_Particle(double mass, double x, double y, double z, double vx, double vy, double vz, int anchored);

  void print_Particle(Particle particle);
  
#ifdef __cplusplus
}

#endif

#endif
