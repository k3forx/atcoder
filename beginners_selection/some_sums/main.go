package main

import "fmt"

func main() {
	var n, a, b int
	fmt.Scan(&n, &a, &b)

	// init total sum
	var sum int
	for i := 1; i <= n; i++ {
		digitSum := sumDigit(i)
		if digitSum >= a && digitSum <= b {
			sum = sum + i
		}
	}
	fmt.Println(sum)
}

func sumDigit(num int) int {
	var sum int
	for num != 0 {
		sum = sum + num%10
		num = num / 10
	}
	return sum
}
