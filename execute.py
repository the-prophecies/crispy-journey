import subprocess

input=f".\\x64\\Debug\\NBodyVSol.exe > nbody.dat"

print("Running")
result=subprocess.run(input,shell=True,capture_output=True)
print("Ran")

import visor3D
    
subprocess.run(f"magick convert -delay 3 -loop 0 video/*.png nbody.gif",shell=True)
