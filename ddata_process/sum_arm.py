import numpy as np
import matplotlib.pyplot as plt

# x = np.array([2 ** i for i in range(1, 21)])
x = np.array(range(1, 21))
y1 = np.array([85, 5, 6, 11, 19, 36, 70, 137, 271, 387, 717, 1442, 2929, 6517, 12285, 26892, 50822, 99662, 201180, 411137])
y2 = np.array([65, 3, 4, 5, 10, 19, 35, 68, 136, 270, 537, 1071, 2151, 4385, 8898, 18056, 36618, 73790, 147819, 298447])
y3 = np.array([120, 6, 10, 15, 26, 47, 84, 163, 312, 614, 1220, 2472, 4958, 10267, 20353, 40731, 80941, 164513, 331717, 662280])
y4 = np.array([117, 5, 7, 12, 22, 39, 74, 148, 288, 576, 1134, 2290, 4695, 9519, 18935, 37733, 76918, 152564, 311907, 622831])
plt.plot(x, y1, marker='.', label='Trivial')
plt.plot(x, y2, marker='.', label='Mult-link')
plt.plot(x, y3, marker='.', label='Recursion')
plt.plot(x, y4, marker='.', label='Double-loop')

plt.title("Time consumption under different question scale")
# plt.xlabel("Question scale")
plt.xlabel("Question scale (x = log(n) / log(2))")
plt.ylabel("Time consumption (us)")
plt.legend()
plt.show()