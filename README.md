# sorting
 Repository to store sorting algorithms learned by Matheus Costa during his graduation.
Sort Algorithms are included:
<center><ul>
 <li>Bubble Sort</li>
 <li>Selection Sort</li>
 <li>Insertion Sort</li>
<ul>
  </center>
 <h4>To the explanation of every algorithm and specific details, just scroll  😁 😉 </h4>
   <img align="left" width="400" height="300" src="https://media.giphy.com/media/QaPkV29BJh3gI/giphy.gif"/>
  <img width="400" height="300" src="https://media.giphy.com/media/4UzW8S83pWoKs/giphy.gif"/>
 <h2>Bubble Sort</h2>
 Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.<br>
 <b>Worst and Average Case Time Complexity</b>: O(n*n). Worst case occurs when array is reverse sorted.<br>
 <b>Best Case Time Complexity</b>: O(n). Best case occurs when array is already sorted.<br>
 <b>Auxiliary Space</b>: O(1)<br>
 <b>Boundary Cases</b>: Bubble sort takes minimum time (Order of n) when elements are already sorted.<br>
 <b>Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm.</b>
 <br><br>
 <img src="https://media.giphy.com/media/nfq7ThNeMbfCfGDGu2/giphy.gif"/>
 <br>
 <h2>Selection Sort</h2>
 <p>The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.</p>
 <ul>
<li>1: The subarray which is already sorted.</li>
<li>2: Remaining subarray which is unsorted.</li>
</ul>
<p>In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.</p>
<b> Its good to use for arrays that´s not too big, and for easy implementation steps require.</b>
<b>Time Complexity</b>: O(n2) as there are two nested loops.</b>
<br>
Auxiliary Space: O(1)
<p>The good thing about selection sort is it never makes more than O(n) swaps and can be useful when memory write is a costly operation.</p>
 <br>
 <img src="https://media.giphy.com/media/z3iMTsKMWSEDBLtCy2/giphy.gif"/>
 <br>
 <h2>Insertion Sort</h2>
 <p>Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.</p>
 <b>Algorithm</b>
  <p>To sort an array of size n in ascending order:</p>
  <ul>
  <li>1: Iterate from arr[1] to arr[n] over the array.</li>
  <li>2: Compare the current element (key) to its predecessor.</li>
  <li>3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.</li>
  </ul>
 <br>
 <img src="https://media.giphy.com/media/28cSLDjI0mJFZQOyin/giphy.gif"/>
 <br>
 <h2>Binary Insertion Sort</h2>
 <p>We can use binary search to reduce the number of comparisons in normal insertion sort. Binary Insertion Sort uses binary search to find the proper location to insert the selected item at each iteration. 
In normal insertion sort, it takes O(n) comparisons (at nth iteration) in the worst case. We can reduce it to O(log n) by using binary search.</p>
 <p> <b>Time Complexity: </b>The algorithm as a whole still has a running worst-case running time of O(n2) because of the series of swaps required for each insertion.</p>
 <img src="https://media.giphy.com/media/HJwkuOw1NRCfqk7Ttr/giphy.gif"/>
 <br>
 <h2>Merge Sort</h2>
 <p>Merge sort is based on Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, l, m, r) is a key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one. See the following implementation for details.</p>
 <p>Merge Sort a subarray [a...b] as follows:</p>
 <b>Steps:</b>
 <ul>
  <li>1. If a = b, do not do anything, because the subarray is already sorted</li>
  <li>2.Calculate the position of the middle element: k = ⌊(a+b)/2⌋</li>
  <li>3.Recursively sort the subarray array[a...k]</li>
  <li>4.Recursively sort the subarray array[k+1...b]</li>
  <li>5.Merge the sorted subarray array[a...k] and array[k+1...b] into the sorted subarray array[a...b]</li>
 </ul>
 <p> Merge sort is an efficient algorithm, because it halves the size of the subarray at each step. The recursion consists of O(log n) level and processing each level takes O(n) time.</p>
 <p><b>Time Complexity</b> Sorting arrays on different machines. Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation. 
  T(n) = 2T(n/2) + θ(n)</p>
 <p>Merge Sort is useful for sorting linked lists in O(nLogn) time.In the case of linked lists, the case is different mainly due to the difference in memory allocation of arrays and linked lists. Unlike arrays, linked list nodes may not be adjacent in memory. Unlike an array, in the linked list, we can insert items in the middle in O(1) extra space and O(1) time. Therefore, the merge operation of merge sort can be implemented without extra space for linked lists.</p>
 <img src="/Merge-Sort-Tutorial.png"/>
 <br>
 <br>
 Reference: <a href="https://www.geeksforgeeks.org/sorting-algorithms/">geeksforgeeks.org/sorting-algorithms/</a>
