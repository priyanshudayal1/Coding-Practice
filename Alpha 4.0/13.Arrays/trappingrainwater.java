public class trappingrainwater {
    public static int trappedwater(int height[]){
        //calculate left and right max boundry-array
        //loop
        //waterlevel=min(left ,right max boundry)
        //traped water=water level-height[i]
        int leftmax[]=new int[height.length];
        int rightmax[]=new int[height.length];
        leftmax[0]=height[0];
        for (int i=1;i<height.length;i++){
            leftmax[i]=Math.max(leftmax[i-1],height[i]);
        }
        int n=height.length;
        rightmax[n-1]=height[n-1];
        for (int i=n-2;i>=0;i--){
            rightmax[i]=Math.max(rightmax[i+1],height[i]);
        }
        
        int trappedwater=0;
        for (int i=0;i<n;i++){
            int waterlevel=Math.min(leftmax[i],rightmax[i]);
            trappedwater+=waterlevel-height[i];

        }
        System.out.println(trappedwater);
        for(int i:leftmax){
            System.out.print(i+ " ");
        }
        System.out.println();
        for (int i:rightmax){
            System.out.print(i+" ");
        }


        return trappedwater;
    }
    public static void main(String[] args) {
        int height[]={4,2,0,6,3,2,5};
        
        System.out.println("The trappped water in the bars is : "+trappedwater(height));
        
    }
}
