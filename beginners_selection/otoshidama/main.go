package main

import "fmt"

func main() {
	var n, sum int
	fmt.Scan(&n, &sum)

	// n = 9
	// sum = 45000

	if 1000*n > sum || 10000*n < sum {
		fmt.Println(-1, -1, -1)
		return
	}

	if sum%10000 == 0 {
		fmt.Println(sum/10000, 0, 0)
		return
	}
	if sum%5000 == 0 {
		fmt.Println(0, sum/5000, 0)
		return
	}
	if sum%1000 == 0 {
		fmt.Println(0, 0, sum%1000)
		return
	}

	// 1000
	for i := 0; i <= sum/10000; i++ {
		// i = 0
		// 5000
		for j := 0; j <= (sum-i*10000)/5000; j++ {
			// j = 1
			// 10000
			for k := 0; k <= (sum-i*10000-j*5000)/1000; k++ {
				// k = 0
				if i*10000+j*5000+k*1000 == sum && i+j+k == n {
					// 0
					fmt.Println(i, j, k)
					return
				}
			}
		}
	}
	fmt.Println(-1, -1, -1)
}
