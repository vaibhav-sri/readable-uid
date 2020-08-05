# readable-uid

## About UIDs 

ISO 8824 is a standard for unique identifiers. UIDs defined according to this standard have two parts: the org.root and the suffix.
The maximum length of the UID is normally restricted to 64 characters.

The org.root identifies the organization and is of the form 1.4.444.90004
The suffix is similar, containing numbers separated by dots.

## The functionality

The program generates a unique ID using a department identifier and random numbers in the suffix
E.g., 1.4.444.90004.223.2832089024
The tests in the repo are passing currently.

## The issue

People look at these UIDs during trouble-shooting.
They have raised an issue, saying that these unique IDs aren't readable and need to be split.

So we decide to split the random number as:
1.4.444.90004.223.28320.89024

## The tasks

1. Write a failing test case before you fix the issue.
1. Strengthen the test by checking that the values returned are different each time.
