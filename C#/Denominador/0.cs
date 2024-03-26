using System;

class Program
{
    static void Main()
    {
        try
        {
            int divisor = 0;
            int result = 10/divisor;

        } catch (DivideByZeroException e)
        {
            Console.WriteLine("Exception captured:"+ e.Message);
        }
    }
}