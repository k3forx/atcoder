package main

import "fmt"

func main() {
	var h, w int
	fmt.Scanf("%d %d", &h, &w)

	matrix := make([][]int, h)
	for i := 0; i < h; i++ {
		tmp := make([]int, w)
		for j := 0; j < w; j++ {
			fmt.Scanf("%d", &tmp[j])
		}
		matrix[i] = tmp
	}

	for i := 0; i < w; i++ {
		for j := 0; j < h; j++ {
			fmt.Print(matrix[j][i])
			if j < h-1 {
				fmt.Print(" ")
			}
		}
		fmt.Printf("\n")
	}
}
