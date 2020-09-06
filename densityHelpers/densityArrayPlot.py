import numpy as np
import matplotlib.pyplot as plt

N = 256
pi = 3.14

densityArray = np.fromfile('rho1.dat', dtype=float)

densityArray = np.transpose(np.reshape(densityArray[1:,], (N, N)))

x = np.arange(0, 2*pi, 2*pi/N)
y = np.arange(0, 2*pi, 2*pi/N)

plt.pcolor(x, y, densityArray, cmap='jet')

plt.show()
