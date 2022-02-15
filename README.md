# atcoder

## C++

```c++
vector<vector<int>> matrix(RR, vector<int>(CC));

// sort
sort(seq.begin(), seq.end())

// max integer
long long res = 1LL << 60;

//文字列抽出
string str = "";
str.substr(開始位置, 取り出す長さ);

// int to string
to_string()
```

## Sort

- https://pkg.go.dev/sort

```golang
package main

import (
	"fmt"
	"sort"
)

func main() {
	ints := []int{5, 1, 9, 2, 3, 8}
	sort.Ints(ints)
	fmt.Println(ints)

	sort.Sort(sort.Reverse(sort.IntSlice(ints)))
	fmt.Println(ints)
}
```

## Unique

- https://atcoder.jp/contests/abs/tasks/abc085_b

```golang
package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	nums := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&nums[i])
	}

	m := map[int]bool{}
	var uniqueNums []int
	for _, num := range nums {
		if !m[num] {
			m[num] = true
			uniqueNums = append(uniqueNums, num)
		}
	}
	fmt.Println(len(uniqueNums))
}
```
