​We will sort the array according to its end time because by using end time xend we are actually reducing number of arrows.

So, any segment [Xstart, Xend] which was already cut by any vertical line doesn't have to be cut one more time, and for each noncut segment [Xstart, Xend] we need to cut it at its end so that we get more segments as we could alongside the beginning segment.

After this we will compare if points[i][0]<points[index][1] then this means it is not overlapping and we can use one more arrow.
