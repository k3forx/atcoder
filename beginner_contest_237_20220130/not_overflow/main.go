package main

import (
	"fmt"
	"math"
)

func main() {
	var n int64
	fmt.Scanf("%d", &n)

	if n >= -int64(math.Pow(2, 31)) && n < int64(math.Pow(2, 31)) {
		fmt.Println("Yes")
		return
	}

	fmt.Println("No")
}
