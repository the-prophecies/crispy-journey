// Author: Victor De la Luz
// vdelaluz@enesmorelia.unam.mx
// GNU/GPL

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "numeric.h"
#include "model.h"
#include "physics.h"
#include "particle.h"

//MKS system

double PI = 3.14159;
double MISSILE_MASS = 70000;
double MISSILE_ANGLE = 45;
double MISSILE_SPEED = 5500;
double EARTH_RADIUS = 6357000;
double EARTH_MASS = 5.9722e24;

int main(int argn, char **args){
    srand(time(0));
    int N=2;
    printf("%d\n", N);
    double M=EARTH_RADIUS*1.5+1;
    printf("%lf\n", M);
	
    Model model = new_Model("System", N);
    Integrator integrator = new_integrator(1, 1.0);

    add_Particle_to_Model(&model, new_Particle(EARTH_MASS, 0, -EARTH_RADIUS, 0, 0, 0, 0, 1));
    add_Particle_to_Model(&model, new_Particle(MISSILE_MASS, 0, 0, 0, 
        MISSILE_SPEED * sin(MISSILE_ANGLE * 2 * PI / 360.0), MISSILE_SPEED * cos(MISSILE_ANGLE * 2 * PI / 360.0), 0,
        0));

    int steps = 0;
    while(steps<60*60*24) {
        if (steps % 60 == 0) {
            printf("#%i\n", steps);
            print_Model(model);
        }
        model = integrator_solve(integrator, model);
        model.particles[1].mass = fmax(model.particles[1].mass-10, MISSILE_MASS*.4);
        model.backup_particles[1].mass = model.particles[1].mass;
        steps++;
        double dist = R(model.particles[0].p[0], model.particles[0].p[1], model.particles[0].p[2], model.particles[1].p[0], model.particles[1].p[1], model.particles[1].p[2]);
        if (dist <= EARTH_RADIUS) {
            break;
        }
    }
    printf("#%i\n", steps);
    print_Model(model);

    return 0;
}
