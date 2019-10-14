Shawn Moy, EMBSYS 100 B Au 19, Assignment 01, 10/14/19

Why use two’s complement to represent negative numbers? 

https://en.wikipedia.org/wiki/Two's_complement
https://www.cs.cornell.edu/~tomf/notes/cps104/twoscomp.html
https://en.wikipedia.org/wiki/Signed_number_representations
https://www.youtube.com/watch?v=4qH4unVtJkE
https://www.bing.com/videos/search?q=converting+a+very+large+number+to+binary&&view=detail&mid=CF88A7B4FE91D59474DCCF88A7B4FE91D59474DC&&FORM=VRDGAR&ru=%2Fvideos%2Fsearch%3Fq%3Dconverting%2Ba%2Bvery%2Blarge%2Bnumber%2Bto%2Bbinary%26FORM%3DHDRSC3
https://www.khanacademy.org/math/algebra-home/alg-intro-to-algebra/algebra-alternate-number-bases/v/large-number-decimal-to-binary
    
Two's compliment is used to represent negative numbers, signed decimals and adding positive and negative bits equals same amount a decimal.  Binary is base of two and expononet 0 starting from the lease significant bit, increasing by one each place value and to the most significant bit.  Adding positive and negative bits always equal ten also known as a decimal of two when carrying over.  Last number carried beyond length of bit set is discarded.  Convert a binary to two's compliment by inverting all bits and adding 1 bit.  Shortcut to convert a binary to two's compliment by from least significant bit count 0's until 1.  Retain count to 1 and inverse remaing bits.  A signed char decimal from -128 to 127 has one zero sharing same start point and is 8-bits or a byte.


Convert a binary number to a decimal by each 1-bit intersecting its place value and adding place values. Convert a decimal to a binary by forming a column starting from the top, decimal divide by two, if a remainder place 1, else place 0, make equals a whole number if not already and continue process down column until divisible amount is less than a whole number or zero.  Most significant bit starts at bottom columun and least significant bit top. 

