/*

Cada classe em um arquivo, cada arquivo com apenas uma classe

Arquivo e classe com o mesmo nome.

*/

Console.Clear();

Console.WriteLine("---=== Sistema de Biblioteca ---===");

// Cria o objeto 'livro1'
Livro livro1 = new Livro();

// define os valores das propriedadees para 'livro1'
livro1.codigo = 67;
livro1.titulo = "Senhor do Anéis";
livro1.autor = "JRR Tolkien";
livro1.paginas = 1270;
livro1.preco = 120.80;

// Cria o objeto 'livro2'
Livro livro2 = new Livro();

// define os valores das propriedadees para 'livro2'
livro2.codigo = 11;
livro2.titulo = "Harry Potter";
livro2.autor = "JK Rowling";
livro2.paginas = 350;
livro2.preco = 70.65;

// Imprime os livros

Console.WriteLine(livro1.titulo);
Console.WriteLine(livro2);

