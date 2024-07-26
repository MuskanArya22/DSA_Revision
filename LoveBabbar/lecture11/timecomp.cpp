/* Time Complexity
- It is the amount of time taken by an algorithm to run as a function of the length of the input.



WHY?

-For making better Programs
-Comparison of Algorithms



Big O Notation  -> O(f(n))
-It is a mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity.

-It is used to describe the performance or complexity of an algorithm.

-It is used to describe the worst-case scenario.

Theta Notation -> Θ(f(n))
-It is used to describe the average-case scenario.

Omega Notation -> Ω(f(n))
-It is used to describe the best-case scenario.

-It is used to describe the lower bound of an algorithm.



*/
/*

________________________________________________________________________________________________


Types of Time Complexity-


1. Constant Time Complexity -> O(1)
-It is the time complexity of an algorithm that does not depend on the size of the input.

-It is the fastest time complexity.

[for(i=0;i<10;i++)]


2. Logarithmic Time Complexity -> O(log n)
-It is the time complexity of an algorithm that increases logarithmically as the size of the input increases.

-It is slower than constant time complexity but faster than linear time complexity.

[for(i=1;i<n;i++)]

3. Linear Time Complexity -> O(n)
-It is the time complexity of an algorithm that increases linearly as the size of the input increases.

-It is slower than logarithmic time complexity but faster than quadratic time complexity.


[Bianry Search]

4. Linearithmic Time Complexity -> O(n log n)
-It is the time complexity of an algorithm that increases linearithmically as the size of the input increases.

-It is slower than linear time complexity but faster than quadratic time complexity.

5. Quadratic Time Complexity -> O(n^2)

-It is the time complexity of an algorithm that increases quadratically as the size of the input increases.

-It is slower than linearithmic time complexity but faster than cubic time complexity.

[for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<<i<<" "<<j;
    }
}]

6. Cubic Time Complexity -> O(n^3)

-It is the time complexity of an algorithm that increases cubically as the size of the input increases.

-It is slower than quadratic time complexity but faster than exponential time complexity.

[for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        for(k=0;k<n;k++){
        cout<<i<<" "<<j;
        }
    }
}]

7. Exponential Time Complexity -> O(2^n)

-It is the time complexity of an algorithm that increases exponentially as the size of the input increases.

-It is the slowest time complexity.

8. Factorial Time Complexity -> O(n!)
-It is the time complexity of an algorithm that increases factorially as the size of the input increases.

-It is slower than exponential time complexity.

________________________________________________________________________________________________






*/

/* Space Complexity
-It is the amount of memory space required by an algorithm to run as a function of the length of the input.

-It is used to describe the memory usage of an algorithm.

-It is used to describe the worst-case scenario.

-It is denoted by O(f(n)).

Constant Space Complexity -> O(1)
-It is the space complexity of an algorithm that does not depend on the size of the input.

-It is the fastest space complexity.

Linear Space Complexity -> O(n) 
-It is the space complexity of an algorithm that increases linearly as the size of the input increases.

-It is slower than constant space complexity but faster than quadratic space complexity.

Quadratic Space Complexity -> O(n^2)
-It is the space complexity of an algorithm that increases quadratically as the size of the input increases.

-It is slower than linear space complexity but faster than exponential space complexity.

Exponential Space Complexity -> O(2^n)
-It is the space complexity of an algorithm that increases exponentially as the size of the input increases.

-It is the slowest space complexity.



*/