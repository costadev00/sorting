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
<p>1: The subarray which is already sorted.</p>
<p>2: Remaining subarray which is unsorted.</p>
<p>In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.</p>
<b> Its good to use for arrays that´s not too big, and for easy implementation steps require.</b>
<b>Time Complexity</b>: O(n2) as there are two nested loops.
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
 <img src="https://media.giphy.com/media/z3iMTsKMWSEDBLtCy2/giphy.gif"/>
 <br>
 Reference: <a href="https://www.geeksforgeeks.org/sorting-algorithms/">geeksforgeeks.org/sorting-algorithms/</a>
