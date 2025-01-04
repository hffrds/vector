// vector初始化
必须初始化时指定大小或者用push_back
    vector<int>
        t(size, 0);                                                                          // 初始化大小为size，所有元素都为0   vector<int> t(size)也是
push_back() 必须有参数 假设 t 是 vector<int>，你可以添加一个初始值，比如 0： t.push_back(0); // 正确：添加元素 0 到向量 t

// 遍历vector
std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i : vec)
{
    vec[c] = (nums[c] < 0 ? -nums[c] : nums[c]);
    std::cout << i << " ";
}

排序：sort(ans.begin(), ans.end());
复制字符串到vector ： int main()
{
    std::string s = "hello";
    std::vector<char> ss(s.begin(), s.end()); // 将字符串内容拷贝到vector中
    ss.push_back('\0');                       // 确保字符串以'\0'结尾

    std::cout << ss[0] << std::endl; // 输出 'h'
    return 0;
}

// 移除元素--双指针法
双指针可以一左一右，缺点是会打乱顺序，优点是只遍历一次。循环条件是 while (left < right)
    // 移动元素--双指针法
    将0移到末尾且原数组元素和顺序保持不变。数组元素不变需要用swap() 保持vector元素不变

    // 比较含回退格的字符串--vector pop与push的运用
    class Solution
{
public:
    bool backspaceCompare(string S, string T)
    {
        return build(S) == build(T);
    }

    string build(const string &str)
    {
        string ret;
        for (char ch : str)
        {
            if (ch != '#')
            {
                ret.push_back(ch);
            }
            else if (!ret.empty())
            {
                ret.pop_back(); // 空容器调用pop_back不安全
            }
        }
        return ret;
    }
};

// cin >> a >> b    blog.csdn.net/weixin_45031801/article/details/137544229

// 长度最小的子数组--双指针滑动窗口

// 填充螺旋矩阵（二维）
循环条件是while(m <= n2)，利用边界缩减即可
    vector<vector<int>> vec(n, vector<int>(n, 0)); // 或者只有（n）没有,0

// 区间和
保存前缀和的数组然后相减即可（输入数据与计算前缀和可在一个循环）

//栈
template <class Type, class Container= deque <Type>>
class stack//栈数据结构用于模拟后进先出的特性
需要包含头文件<stack>。container为基础容器，vector，list，deque(默认deque)，需要有push_back(push),pop_back(pop),back(top),size(size),empty(empty)
模拟栈一般用专门的stack，不过string也有pop_back和push_back,可以用来模拟栈的先入后出而无需引入栈头文件 //普通数组没有pop_back与push_back，但可以定义两个变量用于模拟更新尾部与首部，也可以模拟栈
stack2 = stack1

vector.front()访问第一个元素，vector.at()访问指定，vec.data()返回第一个指针(普通指针，不能赋值于迭代器)，vec.insert(position, value)/vec.erase(position)/vec.erase(begin, end)/vec.clear()/vec.size()/vec.capacity()
vec.resize(new_size)改变大小/vec.reserve(capacity)预分配/vec.swap(other_vector)交换两个vector的内容，实际只交换指针和状态信息/vec.assign(n, value)重置，可以用于初始化/std::find(vec.begin(), vec.end(), value)查找value是否在vector中。如果找到，返回该元素的迭代器，否则返回vec.end()
vec.begin()/end()返回迭代器
vec == other_vector
vec = other_vector

//队列(queue)
类似于栈，不过是先入先出//首端删除与尾端插入
以std::deque/std::list为底层容器
多了个back()函数返回最后一个元素的引用(queue为空时返回值不确定)

//双端队列(deque)
栈+队列
支持首端插入删除和尾端插入删除//普通数组可模拟
可以通过[]访问元素(类似于vector 是普通通用容器 而非只暴露部分接口的容器适配器)
