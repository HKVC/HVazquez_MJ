using System;

class Libro
{
public string titulo;
public string autor;
private int cantLibrosDisponibles;

// metodo constructor 

public Libro (string titulo, string autor, int cantLibrosDisponibles)

{
    this.titulo = titulo;
    this.autor = autor;
    this.cantLibrosDisponibles;

}
// get/set 
public string GetTitulo()
{
    return titulo;
}
public void SetTitulo(string nuevoTitulo)
{
   titulo= nuevoTitulo;

}
public string string GetAutor()
{
    return autor; 
}
public void SetAutor(string nuevoAutor)
{
    autor= nuevoAutor;
}

public int GetCantLibrosDisponibles()
{
    return cantLibrosDisponibles;
}

public void SetCantLibrosDisponibles(int nuevosLibrosDisponibles)
{
    cantLibrosDisponibles = nuevosLibrosDisponibles
}
}