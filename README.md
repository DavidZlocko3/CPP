tinyurl.com/skola-android1
using System.Collections;

ArrayList lista = new ArrayList();
lista.Add(8);
lista.Add(15);
lista.Add(40);
lista.Add(42420);
lista.Add(676);
lista.Sort();
lista.Reverse();
lista.Add(Int32.Parse(Console.ReadLine()));
foreach (int i in lista)
{
    Console.WriteLine(i);
}
