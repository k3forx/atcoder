package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	ints := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&ints[i])
	}

	var alice, bob int
	for index := 0; index < n; index++ {
		maxIndex, max := getMaxInt(ints)
		if index%2 == 0 {
			alice = alice + max
		} else {
			bob = bob + max
		}

		ints = append(ints[:maxIndex], ints[maxIndex+1:]...)
	}
	fmt.Println(alice - bob)
}

func getMaxInt(ints []int) (int, int) {
	var max, index int
	for ind, i := range ints {
		if i > max {
			max = i
			index = ind
		}
	}
	return index, max
}
