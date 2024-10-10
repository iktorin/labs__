/*Write a program that consists of a main block, several blocks nested in the main block
that are dynamically distributed relative to each other, and several more blocks nested within one another. */

 #include <iostream>

int main() {
    {
        int D = 1;
        {
        // In this block, there is no access to int D
            int A = 2;
            int C = 3;
        }
    }
    return 0;
}

   

