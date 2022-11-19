#!/usr/bin/env python3
import matplotlib
import matplotlib.pyplot as plt
import numpy as np

with open('nbody.dat') as f:
    lines = f.readlines()

data = []

for line in lines:
    if line[0] != '#':
        data.append(line)

n_particles = int(data[0])
M = float(data[1])
print(M)
data.pop(1)

N = len(data)
a = b = k = 0


is_earth=False
fig = plt.figure()
while True:
    a = 1 + n_particles*k
    b = n_particles*(k+1)
    if b >= N:
        break
    #print(b,N)
    k = k + 1
    ax = fig.add_subplot()#(projection='3d')
    subset = np.arange(a,b+1,1)
    ax.set_xlabel('X Label')
    ax.set_ylabel('Y Label')
    #ax.set_zlabel('Z Label')
    plt.xlim([-M*1.5, M*1.5])
    plt.ylim([-M*1.5, M*1.5])
    #ax.set_zlim([-M, M])
    
    for p in subset:
        ms,xs,ys,zs,vxs,vys,vzs = data[p].split()
        m = float(ms)
        x = float(xs)
        y = float(ys)
        z = float(zs)
        vx = float(vxs)
        vy = float(vys)
        vz = float(vzs)
        #print(x,y,z)
        if(is_earth):
            ax.scatter(x, y, c="#ff0000")#, z)
        else:
            circles = [plt.Circle((x,y), radius=M, linewidth=0, color="#005500")]
            c = matplotlib.collections.PatchCollection(circles)
            ax.add_collection(c)
            #ax.scatter(x, y, s=M)
        is_earth=not is_earth
            
    plt.savefig(f"video/squares-{k:03d}.png")
    plt.clf()
    if(k%20==0):
        print(k)
    
