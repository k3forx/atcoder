package main

import "fmt"

func main() {
	var s, t string
	fmt.Scan(&s)

	strs := []string{"dream", "dreamer", "erase", "eraser"}

	// pickup one of strs
	// first postion
	// end position: first position + length of one of strs
	// iterate through s from first position to end position
	// if it's identical, then add str to t
	// if not, go next str

	// dreameraser

	last := len(s)
	isContinue := true
	attempt := 1
	for isContinue {
		if attempt > 1 && len(t) == 0 {
			isContinue = false
			fmt.Println("NO")
			return
		}
		for _, str := range strs {
			if last < 0 {
				isContinue = false
				if s == t {
					fmt.Println("YES")
					return
				} else {
					fmt.Println("NO")
					return
				}
			}

			if len(s) < len(str) {
				fmt.Println("NO")
				isContinue = false
				return
			}

			if len(t) > len(s) {
				fmt.Println("NO")
				isContinue = false
				return
			}

			first := last - len(str)
			if first >= 0 {
				if s[first:last] == str {
					t = str + t
					last = last - len(t)
				}
			}
		}
		attempt = attempt + 1
	}
}
