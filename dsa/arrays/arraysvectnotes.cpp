/*
# C++ ARRAYS & VECTORS — NOTES

## PART A: ARRAYS

**1. Definition:** An array stores multiple values of the same data type under one variable name.

**2. Declaration:** `int arr[5];` creates an array of 5 integers.

**3. Initialization:** `int arr[5] = {10, 20, 30, 40, 50};`

**4. Automatic size:** `int arr[] = {10, 20, 30};` creates an array of 3 elements.

**5. Partial initialization:** `int arr[5] = {1, 2};` initializes the remaining elements to `0`.

**6. Uninitialized array:** A local array declared as `int arr[5];` contains indeterminate values until initialized.

**7. Indexing:** Array indexing starts from `0`, not `1`.

**8. First element:** `arr[0]` accesses the first element.

**9. Last element:** For an array of size `n`, the last element is `arr[n-1]`.

**10. Updating values:** `arr[2] = 100;` changes the element at index `2`.

**11. Valid indexes:** An array of size `5` has indexes `0, 1, 2, 3, 4`.

**12. Out-of-bounds access:** Accessing an invalid array index causes undefined behavior.

**13. Fixed size:** A built-in array's size cannot be changed after creation.

**14. User-defined size:** A variable-length built-in array such as `int arr[n];` is not standard C++; use a vector when the size is chosen at runtime.

**15. Array size using `sizeof`:** `int n = sizeof(arr) / sizeof(arr[0]);` works when `arr` is an actual built-in array, not a pointer.

**16. Modern size method:** `std::size(arr)` can get the element count of a built-in array in C++17 and later.

**17. Array input:** `cin >> arr[i];` stores input in the element at index `i`.

**18. Array traversal:** Traversal means visiting each element, usually using a loop.

**19. Input loop:**
`for (int i = 0; i < 5; i++) cin >> arr[i];`

**20. Output loop:**
`for (int i = 0; i < 5; i++) cout << arr[i] << " ";`

## PART B: VECTORS

**21. Definition:** A vector is a resizable collection of elements of the same type.

**22. Header:** Use `#include <vector>` to use vectors.

**23. Declaration:** `vector<int> v;` creates an empty integer vector.

**24. Initialization:** `vector<int> v = {10, 20, 30};`

**25. Fixed initial size:** `vector<int> v(5);` creates 5 integers initialized to `0`.

**26. Same initial value:** `vector<int> v(5, 7);` creates 5 elements, each containing `7`.

**27. Runtime size:** `int n; cin >> n; vector<int> v(n);` creates a vector based on user input, provided `n` is valid.

**28. Vector size:** `v.size()` returns the number of elements currently in the vector.

**29. Empty check:** `v.empty()` returns `true` if the vector has no elements.

**30. Last index:** For a non-empty vector, the last index is `v.size() - 1`.

**31. Access an element:** `v[0]` accesses the first element.

**32. Update an element:** `v[1] = 99;` replaces the element at index `1`.

**33. Add an element:** `v.push_back(50);` adds `50` to the end of the vector.

**34. Remove last element:** `v.pop_back();` removes the last element; use it only when the vector is non-empty.

**35. Clear the vector:** `v.clear();` removes all elements.

**36. First element:** `v.front()` accesses the first element of a non-empty vector.

**37. Last element:** `v.back()` accesses the last element of a non-empty vector.

**38. Checked access:** `v.at(2)` accesses index `2` and throws an exception if the index is invalid.

**39. Index safety:** `v[i]` does not automatically check whether the index is valid.

**40. Vector flexibility:** A vector can grow or shrink, unlike a built-in array.

## PART C: INPUT, OUTPUT & LOOPS

**41. Include the headers:** Use `#include <iostream>` for input/output and `#include <vector>` for vectors.

**42. Namespace:** `using namespace std;` lets you write `vector` and `cout` instead of `std::vector` and `std::cout`.

**43. User input:**
`int n; cin >> n; vector<int> v(n);`

**44. Fill the vector:**
`for (int i = 0; i < n; i++) cin >> v[i];`

**45. Print the vector:**
`for (int i = 0; i < v.size(); i++) cout << v[i] << " ";`

**46. Correct loop condition:** Use `i < v.size()`, not `i <= v.size()`, to avoid accessing one position beyond the end.

**47. Empty vector:** If `v.size()` is `0`, there are no valid indexes. Do not access `v[0]`, `v.front()` or `v.back()`.

**48. Range-based loop:** `for (int x : v)` visits each element by making a copy of its value.

**49. Modify with a reference:** `for (int& x : v) x *= 2;` doubles the actual elements.

**50. Copy vs reference:** Changing `x` in `for (int x : v)` does not change the vector; using `int& x` does.

**51. Add with `push_back`:** An empty vector can be filled using `v.push_back(value)` inside a loop.

**52. Avoid duplicate elements:** Do not create `vector<int> v(n)` and then push back `n` more elements if you intended to have only `n` elements.

**53. Validate input size:** Check that `n` is positive, or non-negative if an empty collection is allowed, before creating a vector from user input.

## PART D: ARRAYS & VECTORS WITH FUNCTIONS

**54. Pass a vector by value:** `void f(vector<int> v)` makes a separate vector copy, so changes do not affect the caller's vector.

**55. Pass by reference:** `void f(vector<int>& v)` allows the function to modify the original vector.

**56. Pass by const reference:** `void f(const vector<int>& v)` allows reading without copying and prevents modification through that parameter.

**57. Pass a built-in array:** `void printArray(const int arr[], int n)` receives the array data and its size separately.

**58. Array parameter rule:** Inside a normal function parameter, `int arr[]` is adjusted to a pointer parameter, so `sizeof(arr)` will not give the original array's total size.

**59. Return a value:** A function like `int sum(const vector<int>& v)` can return a calculated result.

**60. Return a vector:** A function can return a vector, for example `vector<int> makeVector()`.

## PART E: COMMON ARRAY/VECTOR OPERATIONS

**61. Sum:** Initialize `sum = 0`, traverse all elements and add each `v[i]` to `sum`.

**62. Minimum:** For a non-empty vector, initialize `smallest = v[0]` and compare the remaining elements.

**63. Maximum:** For a non-empty vector, initialize `largest = v[0]` and compare the remaining elements.

**64. Count elements:** Use a counter initialized to `0` and increment it whenever a condition is satisfied.

**65. Search:** Compare every element with the target; return `true` when found and `false` when the loop ends without finding it.

**66. Update values:** Use `v[i] = ...` when the result should replace an element.

**67. Reverse traversal:** For a non-empty vector, a loop can start at `v.size() - 1` and move backwards while the index stays valid.

**68. Duplicate values:** Arrays and vectors may contain repeated elements unless your code specifically prevents duplicates.

**69. Time complexity:** Accessing an element by index is O(1); traversing all `n` elements is O(n). Appending with `push_back` is amortized O(1).

**70. Key difference:** Built-in arrays have a fixed size and no `.size()` member; vectors provide `.size()`, `.push_back()`, `.pop_back()` and other useful member functions.

**71. Standard array alternative:** `std::array<int, 5>` is a fixed-size container that provides `.size()` and works with the standard library.

**72. Useful headers:** Use `<algorithm>` for common algorithms such as `sort()`, and `<iterator>` for `std::size()` where required by your standard library.

**73. Sorting a vector:** `sort(v.begin(), v.end());` sorts a vector in ascending order; this requires `<algorithm>`.

**74. Reverse a vector:** `reverse(v.begin(), v.end());` reverses its element order; this requires `<algorithm>`.

**75. Vector iterators:** `v.begin()` refers to the beginning and `v.end()` refers to the position just past the last element.

**76. Resizing:** `v.resize(3);` changes the vector's size to 3, removing extra elements or adding default-initialized elements as necessary.

**77. Reserve capacity:** `v.reserve(100);` may allocate space for at least 100 elements but does not make the vector's size 100.

**78. Type matters:** `vector<int>` stores integers; `vector<double>` stores doubles; `vector<char>` stores characters.

**79. Include the right header:** Vectors need `<vector>`, sorting needs `<algorithm>`, and `std::array` needs `<array>`.

**80. Most important rule:** Remember that size is the number of elements, indexes start at `0`, and the last valid index is `size - 1` only when the collection is non-empty.
*/