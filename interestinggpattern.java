public class pattern2 {
   
    
    public static void main(String[] args){
        int i,j,k;
        for ( i=1;i<=5;i++){
        for (j=1;j<=i;j++){
            for( k=i+64;k>=65;k--){
                System.out.print((char)k);
            }
            break;
        }
        System.out.println();
    //    break;
        }
        
    }
}

