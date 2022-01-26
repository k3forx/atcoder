package main

import "fmt"

func main() {
	var a, b, c int
	var sum int

	fmt.Scan(&a) // 500
	fmt.Scan(&b) // 100
	fmt.Scan(&c) // 50
	fmt.Scan(&sum)

	var cnt int
	for aCnt := 0; aCnt < a+1; aCnt++ {
		for bCnt := 0; bCnt < b+1; bCnt++ {
			for cCnt := 0; cCnt < c+1; cCnt++ {
				if 500*aCnt+100*bCnt+50*cCnt == sum {
					cnt++
				}
			}
		}
	}
	fmt.Println(cnt)
}
