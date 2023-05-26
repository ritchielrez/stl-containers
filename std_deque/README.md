# std::deque in C++
`std::deque` is a stl container in **C++**, that works as a double-ended queue. So you can push elements at the front or 
at the back of a queue.

### What is a queue?
**Answer:** A queue works like a real world queue, where people who are in a queue before are also the ones to exit before.
Thus it is called a **First in First out(FIFO)** data structure. A double-ended queue is queue where the start and the end
reversed.

### Differences with `std::vector`

1. `std::vector` holds data contigously, meaning each element are stored one after another in the memory. But `std::deque` does
not necessarily have to do this. Each element can be stored in different places in the memory. An implementation of this can be
where many small individual fixed-size arrays are created.

2. Expansion of a `std::deque` is much cheaper, because with a `std::vector`, you have to reallocate it for expanding it and copy
the existing elements into the new reallocated `std::vector`.

3. For smaller datasets, `std::deque` may allocate more memory than a `std::vector`. If you just want to hold one single element, a
`std::deque` has to allocate a full internal array. Allocated size maybe is 8 to 16 times large than the object size!!

4. If `std::deque` is implemented using smaller chunk of fixed-size arrays, than it is possible to access an element of a **deque**
with only two pointer dereferences, comparted to a **vector**'s single indexed access. A `std::vector` is way more efficient, but
you can achieve constant access time regardless of the size of a `std::deque`. Check out this article to learn more:
<https://stackoverflow.com/questions/7572529/complexity-of-stl-dequeinsert>

5. If you want to insert/remove an element not from the beginning or the end of a `std::deque` though, it is going to take `O(N)` linear time 
to do so. Because it would need to shift elements before and after depending on the placement and the operation.

The time complexities for doing various operations on **deques** are:
```
Accessing Elements - O(1)
Insertion or removal of elements at start or end - O(1)
Insertion or removal of elements not at start or end - O(N)
```
