​Here to do it in o(n) we can create walls left and right first we calculate total distance for 0th index which we call it distance;
and 0th index contains ballsthen left is 1 if any other right index contains balls then right variable is incremented.
after that for each index we calulate previous distance and simple do dist+left-right
but if boxes[i] is '1' then we incrment left and decrement right;
