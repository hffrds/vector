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
