# DNA-Sequence-Matcher-DFA-Implementation-
A C++ program implementing a deterministic finite automaton (DFA) to validate if an input DNA sequence conforms to a given regular expression, evaluating correctness based on specified criteria.


In this assignment, you will implement a deterministic finite automaton (DFA) using C++ programming language to test if an input DNA sequence matches a regular expression. 
1.	The alphabet for generating DNA sequences is {A, T, G, C}. Design a deterministic finite automaton to recognize the regular expression (TT+G)*(A+T).
    If you can’t design directly the DFA, you can convert the regular expression to NFA and convert the NFA to get DFA.

3.	Write a program which asks the user to input a DNA sequence. The program should be able test if the input matches the regular expression given in (1).
    You MUST implement DFA from (1) to check if the DNA sequence is a part of the regular expression or not. 

The program should mimic how a DFA processes a string: reading one letter at a time and doing state transitions. Please see Week 4 materials on DFA implementation in BlackBoard for reference.

Below are four sample input/output. Only the bolded strings are user inputs. 

Input a DNA sequence: GTTTTGT
The pattern GTTTTGT is valid for RE (TT+G)*(A+T)

Input a DNA sequence: GTTTTG
The pattern GTTTTG is not valid for RE (TT+G)*(A+T)

Input a DNA sequence: TTTGT
The pattern TTTGT is not valid for RE (TT+G)*(A+T)

Input a DNA sequence: TTGTTTTA
The pattern TTGTTTTA is valid for RE (TT+G)*(A+T)
