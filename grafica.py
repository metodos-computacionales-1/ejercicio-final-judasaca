import numpy as np
import matplotlib.pylab as plt
import os
datos=np.loadtxt("datos.dat")
x=datos[:,0]
y=datos[:,1]
w=datos[:,2]

plt.figure()
plt.scatter(y,w)
plt.title("Fd=2.5")
plt.savefig("phase1.png")