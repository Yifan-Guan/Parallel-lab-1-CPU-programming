from PIL import Image
import matplotlib.pyplot as plt

path = r"C:\Users\Guan\Pictures\Screenshots\屏幕截图 2025-03-30 124732.png"
image = Image.open(path).convert("RGB")

plt.imshow(image)
plt.xticks([])
plt.yticks([])
plt.axis('off')
plt.show()