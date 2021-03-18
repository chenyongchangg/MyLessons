#### redis两种持久化方式

```c++
RDB:RDB其实就是把数据以快照的形式保存在磁盘上
AOF:日志记录 
```

![img](https://pics5.baidu.com/feed/8326cffc1e178a82c532308ef2117b8ba977e8ae.jpeg?token=fea28817e45f0e091b5be3854d856fbb&s=BD48B55F1C784C095E61DCEB0300D036)

#### redis五种数据结构

```
string list hash set zset
a.string
    string 是 redis 最基本的类型，你可以理解成与 Memcached 一模一样的类型，一个 key 对应一个 value。
    string 类型是二进制安全的。意思是 redis 的 string 可以包含任何数据。比如jpg图片或者序列化的对象。
    string 类型是 Redis 最基本的数据类型，string 类型的值最大能存储 512MB。
b.list
	Redis 列表是简单的字符串列表，按照插入顺序排序。你可以添加一个元素到列表的头部（左边）或者尾部（右边）。
列表最多可存储 232 - 1 元素 (4294967295, 每个列表可存储40多亿)。
他的底层是一个链表
c.hash
    Redis hash 是一个键值(key=>value)对集合。
    Redis hash 是一个 string 类型的 field 和 value 的映射表，hash 特别适合用于存储对象。
    每个 hash 可以存储 232 -1 键值对（40多亿）
d.Set
    Redis的Set是string类型的无序集合。
    集合是通过哈希表实现的，所以添加，删除，查找的复杂度都是O(1)。
    集合中最大的成员数为 232 - 1(4294967295, 每个集合可存储40多亿个成员)。
e zset
    zset 和 set 一样也是string类型元素的集合,且不允许重复的成员。
    不同的是每个元素都会关联一个double类型的分数。redis正是通过分数来为集合中的成员进行从小到大的排序。
    zset的成员是唯一的,但分数(score)却可以重复。
```

