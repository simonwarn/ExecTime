# ExecTime
Simple class to measure execution speed

Example:
```cpp
ExecTime time; // sets the start time when constructed
// some code
time.Print(); // prints the elapsed time in ms

time.Start(); // sets a new start time
// some code
time.Print(); // prints the elapsed time in ms
```
