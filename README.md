## ✅ Updated: 3.5 Lab - Loops in C (for GitHub Codespaces)

### **Introduction**

This lab introduces loops in C using `for`, `while`, and `do-while` loops. You will implement a program that prints a sequence of numbers and calculates the sum of the first `n` natural numbers. This version is adapted for **GitHub Codespaces**, where development tools are already pre-configured.

---

### **Objectives**

* Understand how to use `for`, `while`, and `do-while` loops in C.
* Write a C program that uses loops for iterative tasks.
* Compile and run the program using `gcc` inside GitHub Codespaces.
* Validate user input with a `do-while` loop.

---

### **Lab Steps**

---

### **Step 1: Open Your GitHub Codespace**

1. In your GitHub repository, click the green **Code** button.
2. Select **Codespaces > Create codespace on main**.
3. Once your Codespace launches, open the built-in terminal.

---

### **Step 2: Create a C File**

1. In the **Explorer pane** open the file: `loops.c`
3. Verify following code:

```c
#include <stdio.h>

int main() {
    int i, n, sum = 0;

    // Do-while loop to ensure the user enters a positive number
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);

    // For loop to print numbers from 1 to n
    printf("Numbers from 1 to %d using a for loop:\n", n);
    for (i = 1; i <= n; ++i) {
        printf("%d ", i);
    }
    printf("\n");

    // While loop to calculate the sum of numbers from 1 to n
    i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }

    // Display the sum
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
```

---

### **Step 3: Compile the Program**

In the terminal (bottom panel), run:

```bash
gcc loops.c -o loops
```

This compiles the program and generates an executable named `loops`.

---

### **Step 4: Run the Program**

Still in the terminal, run the executable:

```bash
./loops
```

Enter a positive integer when prompted (e.g., `5`). You should see:

```
Enter a positive integer: 5
Numbers from 1 to 5 using a for loop:
1 2 3 4 5 
The sum of numbers from 1 to 5 is: 15
```

---

### **Step 5: Test with Different Inputs**

Try values like:

* `10` → Sum = 55
* `7` → Sum = 28
* `0` or `-3` → Program will re-prompt due to the `do-while` validation.

---

### **Summary**

In this lab, you successfully used GitHub Codespaces to:

* Write and edit a C program.
* Compile it using `gcc`.
* Practice `for`, `while`, and `do-while` loops.
* Use input validation techniques.


