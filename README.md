# atcoder

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
