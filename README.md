# SomePractice
Here are some of my programming practices

---------------------------------------------------------------------------------------------------

TwoNumbers:

Given some integers (negative ones are permitted) which are placed in a vector.

Then a target number is given. We should find two numbers that the sum of them is equal to the target

among the input. The answer should be the places of them in the vector and we assume that there's only

a pair of them could result in the answer. Ex: [1, 2, 3, 4], 6 => [1, 3]

---------------------------------------------------------------------------------------------------

ReverseInteger:

Given a 32-bit integer, then print the reverse of it. If overflow, print 0 instead.

---------------------------------------------------------------------------------------------------

BinartCarryBits:

Given a decimal number N, find the number of carry bits needed when N+1 in binary format.

ex:

N = 1 => N = 01, N+1 = 10 => #carry bits = 1

N = 7 => N = 0111, N+1 = 1000 => #carry bits = 3

N = 4 => N = 100, N+1 = 101 => #carrt bits = 0

---------------------------------------------------------------------------------------------------

SumOfPerfectSquare:

Given a, b. Find the sum of all perfect square numbers between a and b.

ex: (a, b) = (1, 10) => sum = 1 + 4 + 9 = 14

---------------------------------------------------------------------------------------------------

SpaceDivision:

Determine that how much different space could be divided by n non-parallel and different planes.

---------------------------------------------------------------------------------------------------

LongestCommonPrefix:

ex: ["abcde", "abced", "adcbe"] => lcp = "a"; ["abcde", "fghij"] => lcp = ""

---------------------------------------------------------------------------------------------------

RemoveDuplicates:

Given a sorted vector of integers, print it without duplicate integers.

---------------------------------------------------------------------------------------------------

RemoveElement:

Given a vector of integers and a target value, print the elements of the vector without target value.

---------------------------------------------------------------------------------------------------

CountAndSay:

Given a target value n, output a specific string.

The rule is below:

n = 1 => "1"

n = 2 => "11", which is one "1"

n = 3 => "21", which is two "1"

n = 4 => "1211", which is one "2", one "1"

n = 5 => "111221", which is one "1", one "2", two "1"

We count each number occurs in the n-th string, output(say) as the (n+1)-th string. 
