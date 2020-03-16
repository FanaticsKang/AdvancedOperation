# 空间几何运算(Geometric)
## 1.1 点到直线的距离(3维)
这节包括点到直线的距离($sin$)和点到直线的投影距离($cos$)
假定一个点$p$和一个直线$l$, 直线上有两个点$x_0$, $x_1$, 求点到直线的距离.
- $x_0 \rightarrow x_1$的向量$\overrightarrow{v}_1 = x_1 - x_0$
- 由$x_0\rightarrow p$的向量为$\overrightarrow{v}_p = p - x_0$

### 1.1.1 点到直线的距离为
$$
d = \frac{||\overrightarrow{v}_p \times \overrightarrow{v}_1||}{||\overrightarrow{v}_1||}
$$

[具体推导过程](https://mathworld.wolfram.com/Point-LineDistance3-Dimensional.html)

code 见 `Geometric/src/euler_function.cc`中`Euler::Point2Line`

### 1.1.2 点到直线的投影
$$
d = \frac{|\overrightarrow{v}_p^T \cdot \overrightarrow{v}_1|}{||\overrightarrow{v}_1||}
$$

code 见 `Geometric/src/euler_function.cc`中`Euler::PointProject2Line`

### 1.1.3 理论延伸
#### 叉乘的模长
$$
|\overrightarrow{a}\times\overrightarrow{b}| = |\overrightarrow{a}|\cdot|\overrightarrow{b}|\cdot sin(\theta)
$$
其中$\theta$表示两个向量之间的夹角, ($0\leq \theta \leq \pi$)

#### 点乘的定义
$$
\overrightarrow{a}\cdot\overrightarrow{b} = |\overrightarrow{a}|\cdot|\overrightarrow{b}|\cdot cos(\theta)
$$
点乘结果为标量, 几何意义为向量$\overrightarrow{a}$在向量$\overrightarrow{b}$方向上的投影与向量$\overrightarrow{b}$的模的乘积.
