INFIX:

A + B

PREFIX:

+ A B

POSTFIX:

A B +








Question:
A + B * C

Final Output:
A B C * +



SYMBOL                    STACK                       OUTPUT
A                         Empty                         A

+                          +                            A                        

B                          +                            AB

*                          + *                          AB

C                          + *                          ABC

End                        Empty                        ABC *+