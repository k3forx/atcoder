package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	ints := make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &ints[i])
	}

	var cnt int
	isContinue := true
	for isContinue {
		for _, i := range ints {
			if i%2 != 0 {
				isContinue = false
			}
		}

		if isContinue {
			for index, i := range ints {
				ints[index] = i / 2
			}
			cnt += 1
		}
	}
	fmt.Println(cnt)
}
