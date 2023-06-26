# ALX higher programming - python project 0x02 tasks

## 0. Import a simple function from a simple file

> Write a program that imports the function `def add(a, b):` from the file `add_0.py` and prints the result of the addition `1 + 2 = 3`

## 1. My first toolbox!

> Write a program that imports functions from the file `calculator_1.py`, does some **_Maths_**, and prints the result.

## 2. How to make a script dynamic!

> Write a program that prints the number of and the list of its arguments.

>   - The output should be:   
>      - Number of argument(s) followed by `argument` (if number is one) or `arguments` (otherwise), followed by
>      - `:` (or `.` if no arguments were passed) followed by
>      - a new line, followed by (if at least one argument),
>      - one line per argument:
>          - the position of the argument (starting at `1`) followed by `:`, followed by the argument value and a new line

## 3. Infinite addition

> Write a program that prints the result of the addition of all arguments

>   - The output should be the result of the addition of all arguments, followed by a new line
>   - You can cast arguments into integers by using int() (you can assume that all arguments can be casted into integers)

## 4. Who are you?

> Write a program that prints all the names defined by the compiled module `hidden_4.pyc` (please download it locally).

>   - You should print one name per line, in alpha order
>   - You should print only names that do not start with `__`
>   - Your code should not be executed when imported

## 5. Everything can be imported

> Write a program that imports the variable `a` from the file `variable_load_5.py` and prints its value.

## 6. Build my own calculator!

> Write a program that imports all functions from the file `calculator_1.py` and handles basic operations.

>   - Usage: `./100-my_calculator.py a operator b`
>   - If the number of arguments is not 3, your program has to:
>       - print `Usage: ./100-my_calculator.py <a> <operator> <b>` followed with a new line
>       - exit with the value `1`
>   - `operator` can be:
>       - `+` for addition
>       - `-` for subtraction
>       - `*` for multiplication
>       - `/` for division
>   - If the operator is not one of the above:
>       - print `Unknown operator. Available operators: +, -, * and /` followed with a new line
>       - exit with the value `1`
>   - You can cast `a` and `b` into integers by using `int()` (you can assume that all arguments will be castable into integers)
>   - The result should be printed like this: `<a> <operator> <b> = <result>`, followed by a new line

## 7. Easy print

> Write a program that prints `#pythoniscool`, followed by a new line, in the standard output.

>   - Your program should be maximum 2 lines long
>   - You are not allowed to use `print` or `eval` or `open` or `import sys` in your file `101-easy_print.py`
