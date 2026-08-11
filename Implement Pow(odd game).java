class Solution {
    double power(double b, int e) {
        // code here
          long binform=e;
         if(e<0){
            b=1/b;
            binform=-binform;
        }
        double ans=1;
        
        while(binform>0){
            if(binform %2==1){
            ans*=b;
        }
        b*=b;
        binform /=2;
            
        }
        return ans;
    }
}
