### GO

#### 数据类型

```
布尔
数字
字符串 
派生（复合）:array slice map func struct chan pointer
错误类型（error）
```

#### 位清零

```go
&^
package main

func main(){
	a := 3
	b := 2
	println(a&^b)
}

```

#### 数组的定义

```go
gro := [4]int{99, 3, 3, 3}

```

#### new

```go
new（[2]int） 返回一个指针 用于数组
make([]type, len, cap)  用于切片
make() 只用于映射、切片和程道，不返回指针。要明确的得到指针用 new() 分配
```

#### type

```
type z = int (别名 完全一致)
type z int (不保留方法)
```

