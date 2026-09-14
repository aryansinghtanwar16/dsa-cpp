public class main(){
    public static void main () {
        int arr[]={2,4,6,8,9};
        int n=5;


        int target;
        Scanner sc=new Scanner(System.in);


        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if (arr[i]+arr[j]==target){
                    System.out.println(arr[i]) ;      
                    System.out.println(arr[j]) ;      
                }
            }
        }

    }

return arr[];

}