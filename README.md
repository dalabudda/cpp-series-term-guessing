# Project

#### Name: TP projekt 
#### Author: Dawid Labudda


## How it work

The program choose random type of series, that could be arithmetic or geometric, random first term, and random difference or factor. Calculates next three terms in a series. Prints the first three terms in the console. Scan the expected next term from the user. Validates input and prints an error message or checks the compliance of the given number with the fourth term of the series. Prints the message if the given number is correct or not.


## Modules

### main

The module responsible for the main program thread and processing of input/output operations.

#### scanInput
```cpp
bool scanInput(int &input)
```
Scans and validate input. Returns true if input is correct or false if not.

#### main
```cpp
int main()
```
main thread

### Random Series Factory

The module responsible for choosing the type of series, the first term and the difference/factor, and then receiving the first 4 terms and returning them to the main module.

#### getRandomSeries
```cpp
Series* getRandomSeries()
```
Returns new constructed random type of series with random first term and modifier.

#### getFourTerms
```cpp
int* getFourTerms()
```
Returns new array of 4 terms of random series.

### Series

Module responsible for presenting series as an arithmetic or geometric with the getNthTerm function returning the nth term of the series.

#### Series Class
```cpp
protected:
    int first, modifier;
public:
    Series(const int first_term, const int series_modifier);
    virtual int getNthTerm(const int n)
```

#### ArithmeticSeries Class
```cpp
public:
    ArithmeticSeries(const int first_term, const int series_modifier);
    int getNthTerm(const int n)
```

#### GeometricSeries Class
```cpp
public:
    GeometricSeries(const int first_term, const int series_modifier);
    int getNthTerm(const int n)
```

## Environment

Code::Blocks 17.12 MinGW32 GCC version 5.1.0
