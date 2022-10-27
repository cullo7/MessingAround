Topic: Testing limits of datatypes in C

Description: Namely, I want to see what happens when we try to store values too large in int, unsigned int, long, char, etc.

Observations:

1.	Long never overflows
	obviously this isn't true, the problem was i was incrementing by 1 and it took and eternity

Conclusions:

Everything worked as expected, casting an int to a short the last 2 bytes of information in the integer value
