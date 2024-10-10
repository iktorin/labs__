/* Add a description of dynamic variables in the main block
and nested blocks, and initialize variables upon creation and via assignment. */

// Dynamic variable in the main block

 int* mainVar = new int(100); // Initialization upon creation
cout << "Main block, dynamically allocated value: " << *mainVar << endl;

// Assign a new value
*mainVar = 200;
cout << "Main block, reassigned value: " << *mainVar << endl;

// Nested block
{
    // Dynamic variable in the nested block
    int* innerVar = new int; // Initialization without a value
    *innerVar = 300;         // Initialization via assignment
    cout << "Inner block, dynamically allocated value: " << *innerVar << endl;

    // Free the memory for the inner variable
    delete innerVar;

    return 0;
}