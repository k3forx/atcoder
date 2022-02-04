package main

import (
	"fmt"
	"strings"
)

func main() {
	var s string
	fmt.Scanf("%s", &s)

	if !strings.Contains(s, "a") {
		if isKaibun(s) {
			fmt.Println("Yes")
			return
		}
	}

	if string(s[len(s)/2]) == "a" && strings.Count(s, "a") == 1 {
		if isKaibun(s) {
			fmt.Println("Yes")
			return
		}
	}

	leftA := strings.Count(s[:len(s)/2], "a")
	rightA := strings.Count(s[len(s)/2:], "a")
	if leftA > rightA {
		fmt.Println("No")
		return
	}

	isContinue := true
	for isContinue {
		s = "a" + s
		leftA := strings.Count(s[:len(s)/2], "a")
		rightA := strings.Count(s[len(s)/2:], "a")
		if leftA > rightA {
			isContinue = false
			fmt.Println("No")
			return
		}

		res := isKaibun(s)
		if res {
			isContinue = false
			fmt.Println("Yes")
			return
		}
	}
}

func isKaibun(s string) bool {
	l := len(s) / 2
	for i := 0; i < l; i++ {
		if s[i] != s[len(s)-1-i] {
			return false
		}
	}
	return true
}
