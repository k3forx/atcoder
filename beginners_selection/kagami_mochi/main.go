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
