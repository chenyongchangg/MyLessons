redis

```
typedef struct redisObject {
    /*对象的类型*/
    unsigned type:4;
    /*具体的数据结构，embstr、sds、*/
    unsigned encoding:4;
    /* 24位，对象最后一次被命令程序访问的时间，与内存回收有关*/
    /* LRU time (relative to global lru_clock) or
     * LFU data (least significant 8 bits frequency
     * and most significant 16 bits access time). */
    unsigned lru:LRU_BITS;
    /*引用计数。当refcount为0的时候，表示该对象已经不被任何对象引用，则可以进行垃圾回收了*/
    int refcount;
    /*指向对象实际的数据结构*/
    void *ptr;
} robj;

```

![img](https://bbsmax.ikafan.com/static/L3Byb3h5L2h0dHBzL2ltZzIwMTguY25ibG9ncy5jb20vYmxvZy80MDY0NTYvMjAxOTEyLzQwNjQ1Ni0yMDE5MTIwMTAwMDAyMTg5OC0zMjQ3NDQ0ODgucG5n.jpg)

基础结构

```
简单动态字符串sds
压缩链表ziplist
字典dict
整数集合intset
跳表 skiplist链表加索引
```

数据集结构

```
string  int embstr raw
list    quicklist(list分段 ziplist)
set     intset 字典dict
hash    ziplist 字典dict
zset    ziplist skiplist
```

