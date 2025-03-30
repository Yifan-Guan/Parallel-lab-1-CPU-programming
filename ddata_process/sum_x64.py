import numpy as np
import matplotlib.pyplot as plt

x = np.array([2 ** i for i in range(1, 23)])
# x = np.array(range(1, 23))
y1 = np.array([1, 1, 2, 3, 5, 12, 18, 34, 68, 135, 271, 539, 773, 1571, 3083, 6890, 13125, 24000, 49360, 96160, 198715, 397756])
y2 = np.array([0, 0, 0, 2, 2, 4, 9, 15, 28, 55, 111, 220, 459, 879, 1763, 3603, 7796, 15856, 32305, 63481, 128320, 265123])
y3 = np.array([0, 1, 2, 3, 5, 11, 19, 39, 73, 144, 284, 566, 1116, 2261, 4611, 9299, 18876, 38035, 75993, 154606, 311338, 623207])
y4 = np.array([0, 0, 1, 3, 5, 10, 19, 38, 72, 141, 279, 549, 1099, 2205, 4482, 9310, 18903, 37640, 76774, 153658, 311606, 623787])
plt.plot(x, y1, marker='.', label='Trivial')
plt.plot(x, y2, marker='.', label='Mult-link')
plt.plot(x, y3, marker='.', label='Recursion')
plt.plot(x, y4, marker='.', label='Double-loop')

plt.title("Time consumption under different question scale")
plt.xlabel("Question scale")
# plt.xlabel("Question scale (x = log(n) / log(2))")
plt.ylabel("Time consumption (us)")
plt.legend()
plt.show()