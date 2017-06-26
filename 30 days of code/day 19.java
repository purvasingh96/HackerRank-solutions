//Write your code here
class Calculator implements AdvancedArithmetic{
  public int divisorSum(int n)
    {
        int i;
        int sum=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }
        return sum;
    }
};
