class Car
{
   public int mileage;
   public String color;
   protected String make;
   	public void accelerate()
	{
   	System.out.println(" car is accelerate");
	}
}

public class LuxuaryCar extends Car
{
   public String perks;
	public static void main(String[] args)
	{
    	Car objcar=new Car();
     	LuxuaryCar objluxuary=new LuxuaryCar();
      	objcar.accelerate();
     	System.out.println("now inside luxury car");
     	objluxuary.accelerate();
	}
}