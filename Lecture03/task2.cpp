// formula explanataion


suppose merey pass aik array jis ka
base = 1000
element size = 4
lower bound = 0

array:     10     20       30       40       50
          1000   1004     1008     1012     1016

        
find karo array mien index 2 key address ko
  array[i] = base + (i-LB) x element size // Formula

  1000 + (2-0) * 4
  1000 + 8
  1008 // cross checked

// Why lower bound is used


suppose merey pass aik array jis ka
base = 1000
element size = 4
lower bound = 10

array:     10     20       30       40       50
          1000   1004     1008     1012     1016

        
find karo array mien index 2 key address ko
  array[i] = base + (i-LB) x element size // Formula

            2
  1000 + (12-10) X 4
  1000 + 8
  1008
