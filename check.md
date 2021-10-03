**1.1)** 
- We have i(i-1)/2 + i = n  
- that is i(i+1)/2 = n   
    for i= 1 2 3 ..., we can see that n takes 1,3,6,10,...  

**1.2)** 
- we have the given keys as A<sub>1</sub>,A<sub>2</sub>A<sub>3</sub>....
and functional dependancies as A<sub>((i-1) *  i/2)+1</sub> A<sub>((i-1) *  i/2)+2</sub> ...
- we know the number of keys are to be equal to i
    We also have, 
    ```math
        \frac{i(i-1)}{2} + i = n  
    ```    
    ```math
        \frac{i(i+1)}{2}= n \\
        .\\
        i^2+i-2n=0  
    ```
    On calculating roots, we get the value of i as 
    ```math
        \frac{-1 + \sqrt(1+8n)}{2}
    ```
    - [Note] - This is the only possible root since number of keys can not be a negative number.


**1.3)**

- As there are no multi attributes, the relation satisfies the first normal form.

- We have already stated that the candidate keys of the relation are A<sub>1</sub>, A<sub>2</sub>A<sub>3</sub>, A<sub>4</sub>A<sub>5</sub>A<sub>6</sub>,………. . In this case, the determinant of every functional dependency is a candidate key. We can see that there is no attribute which is not part of any candidate key. As there are no non-prime attributes, the relation will satisfy Second Normal form by definition.

- Third Normal form states that for every functional dependency X->Y , either X is a super key or Y is a prime attribute. Since the determinant of every functional dependency in our relation is a super key, So the relation will satisfy 3rd normal form as well. 

- A relation is in BCNF if in every non-trivial functional dependency X->Y , X is a super key. As we know the determinant of every functional dependency in our relation is a super key. So our relation will satisfy BCNF. 
- Since all the 4 normal forms are satisfied, there is no further need for normalisation.  
 
**1.4)**
- In the  minimal cover RHS of every functional dependency should be a single attribute. So every functional dependency in our relation which has multiple attributes can be broken down into more than one FD’s , for example A<sub>1</sub> -> A<sub>2</sub>A<sub>3</sub> can be broken down into A<sub>1</sub>-> A<sub>2</sub> and A<sub>1</sub> -> A<sub>3</sub> . We can do the same for every FD.
As they were no extraneous attributes and no transitive functional dependencies in our relation,

- Minimal cover is:  

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;A<sub>i(i-1)/2 + 1</sub> A<sub>i(i-1)/2 + 2</sub> A<sub>i(i-1)/2 + 3</sub> ……………. A<sub>i(i-1)/2 + i</sub>  ->   A<sub>j</sub>, where i > 1 and 1 <= j <= i(i-1)/2.
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;A<sub>i(i-1)/2 + 1</sub> A<sub>i(i-1)/2 + 2</sub> A<sub>i(i-1)/2 + 3</sub> ……………. A<sub>i(i-1)/2 + i</sub>  ->   A<sub>i(i-1)/2 + i + j</sub>, where i(i-1)/2 + i < n and 1 <= j <= i+1.

In the above relation,
  ```math
        1 <= i < \frac{-1 + \sqrt(1+8n)}{2}
  ```
  
- As we see that in every FD in the minimal cover, the determinant is a super key . So our relation in minimal cover will satisfy BCNF.

**2.** Given a relation R(A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>n</sub>) with functional dependencies:  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;A<sub>i</sub> -> A<sub>j</sub> for all 1 <= i < j <= n, &nbsp;&nbsp; --- &nbsp;&nbsp;  (1)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;A<sub>i</sub> -> A<sub>j</sub> for all 1 <= i > j <= n, &nbsp;&nbsp; --- &nbsp;&nbsp; (2)  

**2.1.** Consider the attribute A<sub>1</sub> of the relation R.  
From (1), we can say that A<sub>1</sub> -> A<sub>i</sub> for all 1 < i <= n.  
Therefore, A<sub>1</sub> is a candidate key.    

Similarly, A<sub>2</sub> -> A<sub>1</sub> from (1) and A<sub>2</sub> -> A<sub>i</sub> for all 2 < i <= n from (2).  
Therefore, A<sub>2</sub> is also a minimal superkey.  
Similarly, solving for all A<sub>3</sub>,....A<sub>n</sub>, we can see that:  

Every attribute A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>n</sub> is a candidate key.  

**2.2.** Since all the attributes A<sub>1</sub>, A<sub>2</sub>,....,A<sub>n</sub> are atomic, there are no composite/derived attributes. Hence, the relation is in its first normal form.  
Since the relation is in its first normal form and every key is a candidate key, no non-prime attributes exist.  
Hence, the relation is already in its second normal form.  
For every non-trivial dependency X -> Y, since X is a candidate key, the relation is in its third normal form.  

Since the relation satisfies the above three normal forms and for every non-trivial dependency X -> Y, X is a super key, the relation satisfies the BCNF as well. Therefore, the above relation is already normalised and no change is required.  

2.3. A set of functional dependencies R is called the minimal cover if:  
- For every FD in R, the attribute on the right-hand side of the FD is single-valued : This property holds for all FDs in R (since all attributes A<sub>1</sub>,...A<sub>n</sub> are singled-valued).  

- No functional dependency in F, X -> Y can be replaced by X' ->  Y, where X' is a proper subset of Y : This condition holds as well, since every attribute A<sub>i</sub> on the left hand side is a single-valued attribute, we cannot further break it down into subsets.   
  
- If a dependency is removed from R, then the resulting set of FDs cannot be equivalent to R : This property does not hold for R. for example, A<sub>1</sub> -> A<sub>2</sub> and A<sub>2</sub> -> A<sub>3</sub>, thus A<sub>1</sub> -> A<sub>3</sub> is derivable from these 2 FDs i.e., there is redundancy in R.   

Therefore, to ensure that the 3rd condition holds, we need to remove some FDs. The following set of FDs (let us call it M) is a minimal cover of R:  

M(A<sub>1</sub>,A<sub>2</sub>,.....,A<sub>n</sub>) &nbsp; = &nbsp;&nbsp;&nbsp; A<sub>i</sub> -> A<sub>i+1</sub> for all 1 <= i <  n, and
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  A<sub>i</sub> -> A<sub>i-1</sub> for all 1 <  i <= n.


We can derive A<sub>j</sub> -> A<sub>k</sub> for all 1 <= j < k <= n by applying the relation A<sub>i</sub> -> A<sub>i+1</sub> for j <= i < k and transitively deriving the result.    
Similarly, We can derive A<sub>j</sub> -> A<sub>k</sub> for all j > k by applying the relation A<sub>i</sub> -> A<sub>i-1</sub> for j < i <= k and transitively deriving the result.    

Since R is already normalised to BCNF, the above set of FDs M is also in the Boyce-Codd normal form.  
