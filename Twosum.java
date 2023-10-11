import java.util.Scanner;

public class TwoSum {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the array size");
        int n = sc.nextInt();
        int nums[] = new int[n];
        System.out.println("Enter the array elements");

        for(int i=0; i<n; i++)
        {
            nums[i]=sc.nextInt();
        }

        System.out.println("Enter the target sum");
        int target_sum = sc.nextInt();

        int[] ans=twoSum(nums,target_sum);

        System.out.println("Answer :["+ans[0]+" "+ans[1]+"]");

    }
    static int[] twoSum(int[] nums, int target_sum)
    {
        for(int i=0; i<nums.length; i++)
        {
            for(int j=i+1; j<nums.length; j++)
            {
                if(nums[i]+nums[j]==target_sum)
                    return new int[] { i, j };
            }
        }
        return null;
    }
}
