public class ContaBancaria
{
    private double saldo;
    public string titular;

    public void Depositar(double valor)
    {
        if (valor > 0) this.saldo = valor; 
    }

    public double ObterSaldo()
    {
         return this.saldo;
    }

    public void Sacar(double valor)
    {
        if (this.saldo >= valor && valor > 0)
        {
            this.saldo -= valor;
        }
        else
        {
            Console.WriteLine("Esta tentando sacar um valor maior do que o saldo disponivel.");
        }
    }
}