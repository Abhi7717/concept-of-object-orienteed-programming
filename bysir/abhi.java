
       public class abhi {
    public static  double myPow(double x, int n) {
        if(x>(10^-3)&& x<10)
        {
            // return 0;
        
        if(n>0)
        {
            n--;
            return x * myPow(x,n);
        }
        // else{
        // return 1;
        // }
        else if(n<0)
        {
            n++;
             return (double)(1/x) * myPow(x,n);
        }
        else
        {
            return  1;
        }
        }
        else
        return 0;
    }
    
   public static  void main(String args[])
    {
        double r;
        r=myPow(0.00001,295723);
        System.out.println(r);
    }
}