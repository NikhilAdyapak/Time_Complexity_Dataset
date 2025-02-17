// Source: https://www.geeksforgeeks.org/size-subarray-maximum-sum/

// Java program to print length of the largest
// contiguous array sum
class ON_104 {

	static int maxSubArraySum(int a[], int size)
	{
		int max_so_far = Integer.MIN_VALUE,
		max_ending_here = 0,start = 0,
		end = 0, s = 0;

		for (int i = 0; i < size; i++)
		{
			max_ending_here += a[i];

			if (max_so_far < max_ending_here)
			{
				max_so_far = max_ending_here;
				start = s;
				end = i;
			}

			if (max_ending_here < 0)
			{
				max_ending_here = 0;
				s = i + 1;
			}
		}
		return (end - start + 1);
	}

	// Driver code
	public static void main(String[] args)
	{
		int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
		int n = a.length;
		System.out.println(maxSubArraySum(a, n));
	}
}

