### 1、vector
###### 定义
vector<类型> 标识符；
vector<int> ans;
###### 内置函数
push_back() Vector最后添加一个元素（参数为要插入的值）

    int num = 10;
    vector<int> vec;
    vec.push_back(num);

begin() 返回指向容器最开始位置数据的指针
    
end() 返回指向容器最后一个数据单元+1的指针
### 2、sort
sort(start,end,cmp)
    
（1）start表示要排序数组的起始地址
    
（2）end表示数组结束地址的下一位
    
（3）cmp用于规定排序的方法，可不填，默认升序
