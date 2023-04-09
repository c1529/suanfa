import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner myScanner = new Scanner(System.in);

        int i,n,high,low;
        System.out.println("请输入你要输入的数组长度");
        n=myScanner.nextInt();
        int[] nums = new int[n];
        for(i=0;i<n;i++)
        {
            nums[i]= myScanner.nextInt();
        }
        high = n-1;
        low = 0;
        sort sort1 = new sort();
        sort1.sqsort(nums,low,high);
        sort1.input(nums);

    }
}

class sort{
    public void sqsort(int nums[],int low,int high)
    {
        int i = low,j = high;
        int temp;
        if(i>=j)
            return;
        while(i<j)
        {
            while(nums[j]>=nums[low]&&i<j)
                j--;
            while(nums[i]<=nums[low]&&i<j)
                i++;
            if(i<=j)
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
        temp = nums[low];
        nums[low] = nums[j];
        nums[j] = temp;
        sqsort(nums,low,i-1);
        sqsort(nums,i+1,high);


    }




    //输出
    public void input(int nums[])
    {
        int n=nums.length;
        for(int i=0;i<n;i++)
        {
            System.out.print(nums[i]+"  ");9
        }
    }
}





