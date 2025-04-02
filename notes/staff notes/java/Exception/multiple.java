//try  catch 
class multiple
{
    public static void  main(String a[])
      {
            try{
                   int arr[]={10,20,30,40};
                   int b=arr[5];
                    System.out.println(b);
                 }
             catch(ArrayIndexOutOfBoundsException e)
                 {
                       System.out.println("Exception is "+e);
                  }
        }
}

