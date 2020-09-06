public class digit_sum {
    public static void main(String[]args)
    {
        int n=237,a=0,sum=0;
        while (n>0)
        {
            a=n%10;
            n=n/10;
            sum=sum+a;
            
        }
        System.out.println(sum);
    }
}
