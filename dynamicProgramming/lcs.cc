
/**
总的来说，就是把LCS转化成LIS，然后用LIS的NlogN算法来求解。
实现如下：（引用）
假设有两个序列 s1[ 1~6 ] = { a, b, c, a, d, c }, s2[ 1~7 ] = { c, a, b, e, d, a, b }。
记录s1中每个元素在s2中出现的位置, 再将位置按降序排列, 则上面的例子可表示为：
loc(a) = { 6, 2 }, loc( b ) = { 7, 3 }, loc( c ) = { 1 }, loc( d ) = { 5 }。 // 倒着扫一遍s2即可把位置扔进vector
将s1中每个元素的位置按s1中元素的顺序排列成一个序列s3 = { 6, 2, 7, 3, 1, 6, 2, 5, 1 }。
在对s3求LIS得到的值即为求LCS的答案。
*/
