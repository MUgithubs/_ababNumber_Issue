# _abab_Number_Issue

@author Mu He
@date 19/2/16

##Introduction

abab number issue, or Odd abab Number issue, is an interesting and historical problem about how to find a sort of numbers. As I know, it was published not later than 1937.

The term "abab" refers to those numbers in form of "abcdeabcde", that is, the first part will exactly same as the rest part.
Odd, as it indicates, means this number only has odd factor.

For example, 99 is not an odd abab number. Firstly, yes, it has "abab" shape, while 99 = 1*3*3*11, so it has following possible factors:

1, 3, 9, 11, 33, 99.

Which is 6, it's not odd.

(Notice factors are not limited as prime, but also composites, 1 and itself.)

You may find, odd abab numbers are beautiful because of it's symmetry, it seems to be trivial, and you cannot wait to find one, right? But in the end, you will find, it's easy to find a even abab number - it's everywhere. But it's hard to find a odd one.

You may think about programming to solve it. Yes, this issue looks like a good material for new brute-force learner to get start!


##Programming? or do it by math?

Of course, we could programming to solve it - but that is almost impossible! I provided a possible program, it's fast, but as you may know in your first algorithm courses: a fast program cannot defeat big O.

Yes, forget about solving it by coding - Actually, the smallest solution will start at 10^12.

Firstly, try to prove this lemma:

**Lemma 0**
An abab number (not necessarily an odd one!) can be represented in form of p*(10^digit(p)+1). Where digit(p) return the digit of an integer p.

Trivial one!

**Lemma 1**
An odd abab number n, can be factorized in form of: n = c*c, or n = c*c*c*c, or n = c^i, where i is an even number.

The prove is wtote in a file called (whatever)note.pdf, in same folder.

Knowing that, you will know we should start at finding n which is also a square number. 

Yeah! we convert one problem to another easier one. It's easy to do sqrt(), but not easy to count factors!

**Lemma 2**
An abab number, p*(10^digit(p)+1), satisfing that (10^digit(p)+1) will have at least one same prime factor.

Prove it! Actually I don't know how to do it. Please check folder Reference for inspiration!

e.g. Think about 10^11+1. It will have a prime factor 11 repeating twice. So, 10^11+1 is the key to goal.

**Lemma 3**(incompleted)
The relation of p and 10^n+1.

(19/2/16/4:45 A.M.)
Mu He



