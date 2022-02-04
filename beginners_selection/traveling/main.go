package main

import (
	"fmt"
	"math"
)

func main() {
	var n int
	fmt.Scan(&n)

	plans := make([][]float64, n+1)
	plans[0] = []float64{0, 0, 0}

	var t, x, y float64
	for i := 1; i < n+1; i++ {
		fmt.Scanf("%f %f %f", &t, &x, &y)
		plans[i] = []float64{t, x, y}
	}

	for i := 1; i < n+1; i++ {
		tDist := plans[i][0] - plans[i-1][0]
		xDist := math.Abs(plans[i][1] - plans[i-1][1])
		yDist := math.Abs(plans[i][2] - plans[i-1][2])

		if tDist < xDist+yDist {
			fmt.Println("NO")
			return
		}

		if int(tDist)%2 != int(xDist+yDist)%2 {
			fmt.Println("NO")
			return
		}
	}

	fmt.Println("YES")
}
