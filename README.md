# readable-uid

## About UIDs 

ISO 8824 is a standard for unique identifiers. UIDs defined according to this standard have two parts: the org.root and the suffix.

The org.root identifies the organization and is of the form 1.4.444.90004
The suffix also contains numbers and dots.

## The functionality

The program generates a unique ID using a department identifier and random numbers in the suffix
E.g., 1.4.444.90004.223.2832089024
The tests in the repo are passing currently.

## The issue

An issue has been raised, saying that these unique IDs aren't readable and need to be split.
So we decide to split the random number as:
1.4.444.90004.223.28320.89024

## The task

Write a failing test case before you fix the issue.
