using System;

namespace Myapp
class Program


{
    Libro libro1 = new Libro("El becerro", "Hombres maltratados", 10);
    Libro libro2 = new Libro ("Teresa","Goma Vacia", 15);
}


Console.WriteLine("Datos Importantes");
Console.WriteLine("Libro 1");
Console.WriteLine("titulo: " + libro1.GetTitulo());
Console.WriteLine("Autor: " + libro1.GetAutor());
Console.WriteLine("Numero de libros disponibles: " + libro1.GetCantLibrosDisponibles());
Console.WriteLine("Libro 2: ");
Console.WriteLine("titulo: " + libro2.GetTitulo());
Console.WriteLine("Autor: " + libro2.GetAutor());
Console.WriteLine("Numero de libros disponibles: " + libro2.GetCantLibrosDisponibles());


Console.WriteLine("\cuales son los datos del nuevo libro: ");

Console.Write("Titulo");